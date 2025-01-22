#include<stdio.h>
int main(){
   int a ,b,multi=1;
   printf("enter two number : ");
   scanf("%d%d",&a,&b);
   
    for(int i=1; i<=100;){
        if(a%i==0 && b%i==0){
          
            multi=multi*i;
           

        }
       
        
    }
     printf("%d", multi);
     
    return 0;
}