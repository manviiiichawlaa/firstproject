#include<stdio.h>
int hcf(int a,int b){
    if(b==0) return a;
    else return hcf(b,a%b);
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",hcf(n,m));
    return 0;
}