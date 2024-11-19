#include <stdio.h>
int main()
{
    int marks[5];
    int i,peak;  // wap to find peak element which is larger than its neighbors 
    for ( i = 0; i < 5; i++)
    {
        printf("enter the marks of student %d:",i);
        scanf("%d",&marks[i]);
    }
    peak=marks[0];
    for ( i = 0; i < 5; i++)
    {
        if (marks[i]>peak)
        {
            /* code */
        }
        
    }
    
    
    return 0;
}

