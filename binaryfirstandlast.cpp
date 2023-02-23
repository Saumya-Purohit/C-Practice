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
    // cout<<endl<<"The array you entered is : "<<"\t";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
}
int firstoccurance(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        if(key>arr[mid]){
            start=start+1;

        }
        if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;;
    }
    return ans;
}
int lastoccurance(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        if(key>arr[mid]){
            start=start+1;

        }
        if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;;
    }
    return ans;
}
void sortarrayasc(int arr[], int size){
    for(int i=0;i<size;i++){
      for(int j=i+1;j<size;j++){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
      }
    }
    cout<<endl<<"Sorted array is : ";
    outputarray(arr,size);
    
}


int main(){
    int a[10000],n;
    cin>>n;
    inputarray(a,n);
    cout<<endl<<"Array you entered is : ";
    outputarray(a,n);
    sortarrayasc(a,n);
    int key;
    cout<<endl<<"Enter element you want to search ";
    cin>>key;
    cout<<endl<<"1 st Element found at index "<<firstoccurance(a,n,key);
    cout<<endl<<"Last Element found at index "<<lastoccurance(a,n,key);
}