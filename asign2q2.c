#include <stdio.h>
int main(){
    int marks[5];
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("\n enter the marks of student %d:",i);
        scanf("%d",&marks[i]);
        if (marks[i]>=75)
        {
            printf("\n Grade A");
        }
        else if (marks[i]>=60)
        {
            printf("\n Grade B");
        }
        else if (marks[i]>=40)
        {
            printf("\n Grade C");
        }
        else if (marks[i]>=0)
        {
            printf("\n Grade D:");
        }
        
        
        
        
    }
    return 0;
}