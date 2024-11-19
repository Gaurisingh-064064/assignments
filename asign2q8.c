#include <stdio.h>
int main(){
    int marks[5]={34,45,67,23,34};
    int i,max; // wap to find maximum and minimum marks in array 
    max=marks[0];
    for ( i = 0; i < 5; i++)
    {
        if (marks[i]>max)
        {
            max=marks[i];
        }
             }
    printf("max marks are %d",marks[i]);
    return 0;
}