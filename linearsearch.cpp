#include<iostream>
using namespace std;

int linersearch(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
            cout<<"At index "<<arr[i];
        }
    }
    return 0;
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
    int a[100],n,key;
    cin>>n;
    inputarray(a,n);
    outputarray(a,n);
    cout<<endl<<"Enter the element you want to search : ";
    cin>>key;
    if(linersearch(a,n,key)){
        cout<<"Element found";
    }else
    cout<<"Nahi mila bhadve ";

}