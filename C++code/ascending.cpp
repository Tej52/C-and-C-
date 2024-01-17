#include<iostream>
using namespace std;
int main(void){
    int arr[20],n,temp;
    cout<<"Enter n: ";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<"Enter number: ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Ascending order: "<<endl;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Decending order: "<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}