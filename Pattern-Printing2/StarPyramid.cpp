#include<iostream>
using namespace std;

int main() {
    int n;
 cout<<"no of lines :";
 cin>>n;
    // for(int i=1;i<=n;i++) {
    //  for(int j=1;j<=(n+1-i);j++){
    //   cout<<" ";
    // }
    // int a=1;
    // for(int k=1;k<=(2*i-1);k++){
      
    //   cout<<"*";
      
    // }
    // cout<<endl;
    // }

    // above code is one way for StarPyramid

    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=2*n-1;i++){
          // spaces
        for(int j=1;j<=nsp;j++){
          cout<<" ";
        }
          if(i<=n-1) nsp--;
          else nsp++;
             // stars
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        if(i<=n-1) nst+=2;
          else nst-=2;
        cout<<endl;

}
}