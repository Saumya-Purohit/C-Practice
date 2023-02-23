#include<iostream>
using namespace std;

int main(){

    char ch;
    cin>>ch;
    char i='A';
    while(i<=ch){
        char j='A';
        while(j<=i){
            char p='A'+i+j-2;
            cout<<p;
            j++;
        }
        cout<<endl;
        i++;
    }
}