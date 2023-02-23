#include<iostream>
using namespace std;

int main(){

    char n;
    cin>>n;
    char i='A';
    
    while(i<=n){
        char j='A';
        char var=i;
        while(j<=n){
            
            cout<<var;
            var++;
            j++;
        }
        cout<<endl;
        i++;
    }
}