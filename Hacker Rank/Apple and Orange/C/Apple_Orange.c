#include<stdio.h>
int main()
{
    int s,t,a,b,m,n;
    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &m, &n);
    int app[m], oran[n];
    for(int i=0; i<m; i++)
        scanf("%d", &app[i]);
    for(int i=0; i<n; i++)
        scanf("%d", &oran[i]);
    int c_app=0, c_oran=0;
    for(int i=0; i<m; i++)
        if(app[i]>=(s-a) && app[i]<=(t-a))
            c_app++;
    for(int i=0; i<n; i++)
        if(oran[i]>=(s-b) && oran[i]<=(t-b))
            c_oran++;
    printf("%d\n%d", c_app, c_oran);
}
