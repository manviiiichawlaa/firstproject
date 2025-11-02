
#include<stdio.h>
#include<math.h>
int main(){
int x,count,sum=0;
printf("enter a number : ");
scanf("%d",&x);
int n=x;
count=printf("%d",x);
while(x>0){
    sum=sum+pow(x%10,count);
    x=x/10; 
}
n==sum?printf("\nnumber is armstrong"):printf("\nnumber is not armstrong");;
return 0;
}
