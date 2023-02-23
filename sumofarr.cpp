#include<iostream>
using namespace std;

int sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
return sum;
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
    cout<<"Enter n : ";
    cin>>n;
    inputarray(a,n);
    outputarray(a,n);
    cout<<endl<<"Sum is : "<<sum(a,n);
}