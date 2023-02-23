#include<iostream>
using namespace std;
int main(){

    for(int i=1;i<=3;i++){
        int space=3-i;;
        while(space){
            cout<<" ";
            space--;
        }
        for(int j=i;j<=i;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    
}