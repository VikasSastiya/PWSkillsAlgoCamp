#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter odd no of rows";
    cin>>n;
     int m=(1+n)/2;
    for(int i=1;i<=n;i++){
       
        for(int j=1;j<=n;j++){
         if((i==m)||(j==m)){
            cout<<"*";
         }
         else{
            cout<<" ";
         }
        }
        cout<<endl;
    }
}