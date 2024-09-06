#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j) cout<<j;
            else cout<<" ";
        }
        for(int l=n-1;l>=1;l--){
            if(i>=l) cout<<l;
            else cout<<" ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=n;j++){
            if(i>=j) cout<<j;
            else cout<<" ";
        }
        for(int l=n-1;l>=1;l--){
            if(i>=l) cout<<l;
            else cout<<" ";
        }
        cout<<endl;
    }
}