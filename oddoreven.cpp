#include<iostream>
using namespace std;

int main(){
    int n;
    int i=1;
    int j=1;
    cin>>n;

    cout<<"Even nos. are "<<endl;


    while(i<=n){
        if(i%2==0)
        cout<<i<<"\t";
        i++;

     
    }
      cout<<endl<<"odd nos. are "<<endl;
    
     while(j<=n){
        if(j%2==1)
           cout<<j<<"\t";
             j++; 
     }
   
}

  