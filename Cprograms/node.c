#include<stdio.h>
struct NODE{
    int item;
    struct node* link;
};
typedef struct NODE node;
int main(void){
    node first;
    first.item = 34;
    first.link = first.item;
    printf("Info: %d, Link: %p",first.item,first.link);

}