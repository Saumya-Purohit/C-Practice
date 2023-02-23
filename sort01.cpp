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

int sort01(int arr[],int size){
    int left=0, right=1;
    while(left<right){
        while(arr[left]==0 && left<right){
            left++;
        }
        while (arr[right]==1 && left<right)
        {
            right++;
        }
        if(arr[right]==1 && arr[left]==0 && left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    outputarray(arr,size);
}
int main(){
    int a[10000],n;
    cin>>n;
    inputarray(a,n);
    outputarray(a,n);
    sort01(a,n);
    

}