#include<iostream>
using namespace std;
void swap(int &a,int &b)
{

    printf("%p  %p\n", a, b);
    int temp;
    temp = a ;
    a = b;
    b = temp;
}
int main(){
    int a= 5, b=10;
    printf("%p  %p\n", a, b);
    swap(a, b);
    cout<<"in main "<<a<<"\t"<<b;
    return 0;
}