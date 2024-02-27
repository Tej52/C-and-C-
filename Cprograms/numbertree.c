#include<stdio.h>
int main(void){
    int n,count=1;
    printf("Enter height of the tree: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",count);
            ++count;
        }
        printf("\n");
    }
}