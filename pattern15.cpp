#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;

    char i='A';
    while(i<=ch){
        char j='A';
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}