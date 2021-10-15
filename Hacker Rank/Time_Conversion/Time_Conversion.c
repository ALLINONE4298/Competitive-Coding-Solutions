/*
Time Conversion

Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock. 
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.
Example
S = '12:01:00PM'
Return '12:01:00'.

S= '12:01:00AM'
Return '00:01:00'.

We have to complete the timeConversion function in this problem
*/

char* timeConversion(char* s) 
{
    if(s[8]=='P')
    {
        s[8]=' ';
        s[9]=' ';
        if(s[0]=='1' && s[1]=='2')
        {
            s[0]=s[0];
            s[1]=s[1];
        }
        else 
        {
            s[0]=s[0]+1;
            s[1]=s[1]+2;
        }
    }
    else 
    {
        s[8]=' ';
        s[9]=' ';
        if(s[0]=='1' && s[1]=='2')
        {
            s[0]=s[0]-1;
            s[1]=s[1]-2;
        }
    }
    return s;
}