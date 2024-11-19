#include <stdio.h>
int main(){
    int marks[5]={34,45,34,45,56};
    int i;
    for ( i = 0; i < 5; i++)
    {
        /* code */printf("\n the score of %d is %d",i,marks[i]);
        if (marks[i]%2==0)
        {
            /* code */printf("\n the marks scored are even");
        }
        else{
            printf("\n marks scored are odd");
        }
        
    }
    return 0;
}