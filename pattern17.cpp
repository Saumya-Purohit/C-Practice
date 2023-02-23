#include<iostream>
using namespace std;

int main(){
    char n;
    cin>>n;
    char i='A';
    char count='A';
    while(i<=n){
        char j='A';
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}