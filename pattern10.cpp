#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i;
    while(i<=n){
        int j=i;
        while(j>=1){
            cout<<j<<" ";
            j--;

        }
        cout<<endl;
        i++;
    }

}