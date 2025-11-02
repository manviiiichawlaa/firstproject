#include <stdio.h>
//Temporary Variable
void swap_temp(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;}
//Using Arithmetic Operators
void swap_arithmetic(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;}
//Using Bitwise XOR Operator
void swap_xor(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;}
// Using Pointers Directly
void swap_pointers(int *a, int *b){
    int *temp = a;
    a = b;
    b = temp;
    int tmp = *a;
    *a = *b;
    *b = tmp;}
int main(){
    int x, y;
return 0 ;}
