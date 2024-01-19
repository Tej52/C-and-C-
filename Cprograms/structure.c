#include<stdio.h>
struct tej{
    char name[10];
    int roll,age;
    // int age;
};
int main(void){
    struct tej shiva = {"teja",52,20};
    printf("name is %s , roll number: %i, age : %i",shiva.name,shiva.roll,shiva.age);
}