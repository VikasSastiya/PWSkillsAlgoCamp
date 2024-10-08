#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"no of";
    cin>>m;
    n=m+1;
    for(int i=1;i<=(2*n-1);i++){
        cout<<i;
    }
    cout<<endl;
    for(int i=1;i<=m;i++){
         for(int j=1;j<=m+1-i;j++){
            cout<<j;
        }
        for(int k=1;k<=2*i-1;k++) {
            cout<<" ";
        }
        for(int l=5;l<=(n+4-i);l++) {
            cout<<l;
        }
      cout<<endl;
    }
}