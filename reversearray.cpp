#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start=0;
    int end=size-1;
    cout<<"Reverse of the array is : ";
    for(int i=0;i<size;i++){
        while(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        cout<<arr[i]<<"\t";
    }
}
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
int main(){
    int a[10000],n;
    cin>>n;
    inputarray(a,n);
    outputarray(a,n);
    cout<<endl;
    reverseArray(a,n);
}