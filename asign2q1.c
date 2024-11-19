#include <stdio.h>
int main(){
    int marks[5];
    int i,j;
    for ( i = 0; i < 5; i++)
    {
        printf("enter the marks of %d:",i);
        scanf("%d",&marks[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        marks[i]+=5;
        printf("\n the new marks of student %d:%d",i,marks[i]);
        
    }
    
    return 0;
}