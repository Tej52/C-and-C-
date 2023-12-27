#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp;
    temp = a ;
    a = b;
    b = temp;
}
int main(){
    int a= 5,b=10;
    swap(a,b);
    cout<<"in main"<<a<<b;
    return 0;
}