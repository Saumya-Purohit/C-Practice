#include<iostream>
using namespace std;

int main(){

     int n;
     cin>>n;
     int i=1;
     while(i<=n){
        int v=i;
        int j=1;
        while(j<=i){
            cout<<v;
            v++;
            j++;
        }
        cout<<endl;
        i++;
     }

}