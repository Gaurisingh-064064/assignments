#include <stdio.h>
int main(){
    int first[5]={56,67,90,76,90};
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("\n the marks of student %d is %d",i,first[i]);
        if (first[i]==90)
        {
            printf("\n %d scored first 90",i);
            break;
        }
    }
   return 0; 
}