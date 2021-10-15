// Coding Section

#include <stdio.h>

int gradingStudents(int grades_count, int grades[]) {
    int mo5 = 0; // mo5 = multiple of 5
    
    for(int i=0;i<grades_count;i++){
        if(grades[i] >= 38){
            
            // find multiple of 5
            mo5 = (grades[i] + 5) - ((grades[i] + 5)%5) ;
            
            // difference of multiple of 5 and grade
            if(mo5 - grades[i] < 3){
                grades[i] = mo5;
            }
        }
    }
    return *grades;
}

int main()
{
    int grades_count;
    scanf("%d",&grades_count);
    
    int grades[grades_count];

    for (int i = 0; i < grades_count; i++) {
        scanf("%d",&grades[i]);
    }

    gradingStudents(grades_count, grades);
    
    for (int i = 0; i < grades_count; i++) {
        printf("%d\n",grades[i]);
    }
    
    return 0;
}
