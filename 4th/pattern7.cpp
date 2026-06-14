#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of row ";
    cin>>n;
    int i=1;
    while(i<=n){
        int value=i;
        int j=1;
        while(j<=i){
            cout<<value;
            cout<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}