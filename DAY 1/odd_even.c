#include<stdio.h>
int main(){
    int n, m; 
    printf("Enter a number:");
    scanf("%d",&n);
    m=n/2;
    if(m*2==n)
    {
        printf("yes, even no.");

    }
    else{
    printf("it is odd no.");
    }
    return 0;
}