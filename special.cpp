#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
         int a=i;
        for(int j=1;j<=n;j++){
            if(i>=j) cout<<a;
            else cout<<" ";
        }
        for(int l=n;l>=1;l--){
            if(i>=l) cout<<a;
            else cout<<" ";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
         int b=i;
        for(int j=1;j<=n;j++){
            if(i>=j) cout<<b;
            else cout<<" ";
        }
        for(int l=n;l>=1;l--){
            if(i>=l) cout<<b;
            else cout<<" ";
        }
        cout<<endl;
    }
}