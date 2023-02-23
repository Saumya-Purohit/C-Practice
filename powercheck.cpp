#include<iostream>
using namespace std;
int setbits(int n){
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
}
int powercheck(int n){
    int pc=setbits(n);
    if(pc==1){
        return 1;
    }
 return 0;
}
int main(){
    int a;
    cin>>a;
    if(powercheck(a)){
        cout<<"It's a power of 2";
    }
    else
    cout<<"SOrry it's not";
}