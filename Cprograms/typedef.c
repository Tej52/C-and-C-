#include<stdio.h>
typedef struct{
    char name[10];
    int roll,age;
}info;
int main(void)
{
    info std = {"shiva",52,20 };
    printf("Name : %s \t roll: %d \t age : %d",std.name,std.roll,std.age);
}