#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of row";
    cin>>n;
    int count=1;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count;
            cout<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}