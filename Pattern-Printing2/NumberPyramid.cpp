#include<iostream>
using namespace std;
int main(){
    int n;
     cout<<"enter no of rows";
     cin>>n;
     int k=1;
     for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        
        for(k=1;k<=i;k++){
            cout<<k;
        }
        // for(int l=1;l<=i-1;l++){
        //     cout<<k-l-1;
        // }
        for(int q=i-1;q>=1;q--){
            cout<<q;
        }
        cout<<endl;
     }
}