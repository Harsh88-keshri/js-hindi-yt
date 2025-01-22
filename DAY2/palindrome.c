#include<stdio.h>
int main(){
    int n, num,c;
    printf("enter a number: ");
    scanf("%d",&n);
    c=n;
    printf("value of num: ");
    while(n>0){
        num=n%10;
        n=n/10;
       
         printf("%d", num);
        }
   
    if(num == c){
        printf("\npalindrome no.");
    }
    else{
        printf("\nnot palindrome");
    }



    return 0;
}