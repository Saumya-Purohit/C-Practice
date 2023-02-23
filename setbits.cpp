#include<iostream>
#include<math.h>
#include<cstdlib>
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
void add(int a,int b){
    int add=setbits(a)+setbits(b);
    cout<<add;
}
int main(){
   int a,b;
   cin>>a>>b;
   add(a,b);
}