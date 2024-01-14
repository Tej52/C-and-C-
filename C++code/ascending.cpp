#include<iostream>
using namespace std;
int main(){
    int num[20],size,temp;
    cout<<"Enter the number of elements: ";
    cin>>size;
    for (int i = 0;i<size;i++){
        cin>>num[i];
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(num[i] < num[j]){
                temp = num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    cout<<"Ascending Order: "<<endl;
    for(int i=0;i<size;i++){
        cout<<num[i]<<endl;
    }

    return 0;
}