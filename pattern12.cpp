#include<iostream>
using namespace std;

int main(){

    char ch;
    cin>>ch;
    char i='A';
    while(i<=ch){
        char j='A';
        while(j<=ch){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }


}