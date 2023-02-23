#include<iostream>
using namespace std;

int main(){
    char n;
    cin>>n;
    char i='A';
    while(i<=n){
        char j='A';
        char start='A'+n-i;
        while(j<=i){
            cout<<start<<" ";
            start++;
            j++;
        }
        cout<<endl;
        i++;
    }
}