#include <stdio.h>
int main(){
    int marks[5]={56,34,67,56,23};
    int i,sum;
    for ( i = 0; i < 5; i++)
    {
        sum=sum+marks[i];
    }
    printf("\n the summation of marks is %d",sum);
    printf("\n the avg of marks is %d",sum/5);
    return 0;
}