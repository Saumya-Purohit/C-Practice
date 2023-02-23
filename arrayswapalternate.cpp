#include<iostream>
using namespace std;



void inputarray(int arr[],int size){
    cout<<"Enter elements of your array "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void outputarray(int arr[],int size){
    cout<<endl<<"The array you entered is : "<<"\t";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
}
void swapaaray(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if((i+1)<size){
            swap(arr[i],arr[i+1]);
        }
    }
   outputarray(arr,size);
}
int main(){
    int a[10000],n;
    cin>>n;
    inputarray(a,n);
    outputarray(a,n);
    swapaaray(a,n);
    cout<<endl;
}