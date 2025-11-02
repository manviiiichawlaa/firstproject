
#include<stdio.h>
int main(){
    int x,y;
    printf("enter x : ");
    scanf("%d",&x);
    printf("enter y: ");
    scanf("%d",&y);
    if(x<0){
        if(y<0){
            printf("3 quadrant");
        }
        else{
            printf("2 quadrant");
        }
    }
    else{
        if(y<0){
            printf("4 quadrant");
        }
        else{
            printf("1 quadrant");
        } 
    }
    return 0;
}