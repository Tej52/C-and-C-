#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter the 1st number: ";
    cin>>num1;
    cout<<"Enter the 12nd number: ";
    cin>>num2;
    cout<<"Enter the 3rd number: ";
    cin>>num3;
    if(num1 > num2 && num1 > num3){
        cout<<endl<<num1<<" is the largest number."<<endl;
    }
    else if(num2 > num1 && num2 > num3){
        cout<<endl<<num2<<" is the largest number."<<endl;
    }
    else{
        cout<<endl<<num3<<" is the largest number."<<endl;
    }

    return 0;
}