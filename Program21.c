       // Display this GP - 100,50,25,.. upto ānā terms

#include<stdio.h>
int main(){
    float a=100,n;
    printf("Enter no of terms:");
    scanf("%f",&n);
    for(int i=1;i<=n;i++)
    {printf("%f  ",a);
    a=a/2;}
    return 0;
}