#include <stdio.h>
int main(){
    int a=76;
    int *ptr = &a; //*ptr is a pointer which stores the adress of a
    printf("the value of a is %d", *ptr);
}