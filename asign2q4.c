#include <stdio.h>
int main()
{
    int marks[5]={45,99,78,99,65};
    int i,j=0;
    for ( i = 0; i < 5; i++)
    {
        /* code */printf("\n the marks of %d is %d",i,marks[i]);
        if (marks[i]==99)
        {
            /* code */printf("\n %d scored 99",i);
            j=+1;
        }
        
    }
    printf("number of students who scored 99 is %d",j);
    return 0;
}