#include<stdio.h>
#define max 100
void push(int num);
int arr[max] = {10,20,30,12,50};
int* top = arr;
int num;
int main(void){
    top = &arr[2];
    // printf("%d",*(top+1));
    printf("%d\n",*top);                //this is top
    // top+=1;
    printf("%d\n",*(top+1));
    printf("\nEnter number to be inserted: ");
    scanf("%d",&num);
    push(num);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
void push(int num){
        arr[*(top+1)] = num;
        *(top+=1) ;
    }