#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;

    char i='A';
    char start='A';
    while(i<=ch){
        char j='A';
        while(j<=ch){
            cout<<start;
            start++;
            j++;
        }

        cout<<endl;
        i++;
    }


}