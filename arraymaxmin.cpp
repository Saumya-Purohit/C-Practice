#include<iostream>
#include<climits>
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
int maxofarray(int arr[],int size){
    int max=INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int minofarray(int arr[],int size){
     int min=INT_MAX;

    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int a[10000],b;
    cout<<"Enter your array size : ";
    cin>>b;
    inputarray(a,b);
    outputarray(a,b);
    cout<<endl<<"The maximum value of the array is : "<<maxofarray(a,b)<<endl;
    cout<<"The minimum value of the array is : "<<minofarray(a,b);
}