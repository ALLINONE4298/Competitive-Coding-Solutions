// Coding Section:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int TestCases,NoOfSweetsInBox,i; 
    scanf("%d",&TestCases);
    
    while(TestCases>0){
        int firstHalf=0,secondHalf=0;  
        scanf("%d",&NoOfSweetsInBox);
        int SweetBox[NoOfSweetsInBox];
        for(i=0; i<NoOfSweetsInBox; i++){
            scanf("%d ",&SweetBox[i]);
        }
        
        for(i=0;i<NoOfSweetsInBox/2;i++){
            firstHalf += SweetBox[i];
        }
        for(i=NoOfSweetsInBox/2;i<NoOfSweetsInBox;i++){
            secondHalf += SweetBox[i];
        }
        if(firstHalf == secondHalf)
            printf("GOOD\n");
        else
            printf("SPOILT\n");
        
        TestCases--;
    }
    
    return 0;
}
