#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    char i='A';
    char count='A';
    while(i<=ch){
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