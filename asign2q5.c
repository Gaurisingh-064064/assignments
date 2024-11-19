#include <stdio.h>
int main(){
    int marks[5]={45,67,78,32,34};
    int i,sum=0;
    for ( i = 0; i < 5; i++)
    {
        /* code */printf("\n the marks of student %d is %d",i,marks[i]);
        sum=sum+marks[i];
    }
    printf("\n %d",sum);
    return 0;
}