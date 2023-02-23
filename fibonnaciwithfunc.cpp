#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;

int fibonacci(int n){
int a=0;
int b=1;
cout<<a<<"\t"<<b<<"\t";
for(int i=1;i<=n;i++){
    int nextno=a+b;
    cout<<nextno<<"\t";
a=b;
b=nextno;
}
return 0;
}

int main(){
 int a;
 cin>>a;
 cout<<fibonacci(a);
}