#include<stdio.h>
// // #include<stdlib.h>
#include<string.h>      //for using the strcpy

struct tej{             //creation of structure
    char name[10];
    int roll,age;
    // int age;
}tarun;                 //making tarun based on structure
int main(void){

    // one method of accessing the struct

    struct tej shiva = {"teja",52,20}; //declaration of struct

    //for printing the info in struct 
    printf("name is %s , roll number: %i, age : %i\n",shiva.name,shiva.roll,shiva.age);

    // struct tej tarun;
                        //defination of tarun struct

    printf("\n");
    strcpy(tarun.name , "ramesh");
    tarun.age = 20 ;
    tarun.roll = 78;
    printf("name is %s , roll number: %i, age : %i\n",tarun.name,tarun.roll,tarun.age);
}