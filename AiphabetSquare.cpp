#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"no of rows :";
    cin>>n;
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=i;j++){
          cout<<(char)(a)<<" ";
          a+=1;
        }
        cout<<endl;
    }
}