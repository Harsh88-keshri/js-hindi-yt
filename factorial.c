#include<stdio.h>
int main(){
    int n, sum=1;

    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        
        sum=sum*(i);
        
        
        }
    
    printf("factorial is : %d",sum);
    return 0;
}