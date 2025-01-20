#include<stdio.h>
int main()
{
    int n,sum =0,c;
    printf("Enter a number:");
    scanf("%d",&n);
    c=n;
     while(n>0){
        sum= sum+(n%10)*(n%10)*(n%10);
        n=n/10;
     }
     if(sum==c){
        printf("armstrong no.");
     }
     else{
     printf("not armstrong no.");
     }
     return 0;
}