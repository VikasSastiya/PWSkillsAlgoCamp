#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of rows :";
    cin>>n;
for(int i=1;i<=n;i++){
    for(int k=1;k<=n;k++){
       if((i+k)>=n+1){
      cout<<"*"; 
       }
       else {
        cout<<" ";
       }
    }
       cout<<endl;
}
}