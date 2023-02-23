#include<iostream>
using namespace std;

int main(){
    char n;
    cin>>n;
    char i='A';
    while(i<=n){
        char j='A';
        char count=i;
        while(j<=i){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}