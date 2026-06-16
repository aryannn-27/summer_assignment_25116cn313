#include<iostream>
using namespace std;
int main()
{
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5-i;j++)
cout<<" ";

for(char ch='A';ch<'A'+i;ch++)
cout<<ch;

for(char ch='A'+i-2;ch>='A';ch--)
cout<<ch;

cout<<endl;
}
return 0;
}