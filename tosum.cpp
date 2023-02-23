#include<iostream>
using namespace std;

int main(){

    int i;
    int sum=0;

    int n;
    cin>>n;

    while(i<=n){
        sum+=i;
        i++;
    }

    cout<<"sum is"<<sum;
}