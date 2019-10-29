#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  if (n>0 && n<100){
    for(int i=0;i<n/10;i++)
      cout<<"S";
    for(int j=1;j<=n%10;j++)
      cout<<j;
  }
  else if(n>99 && n<1000){
    for(int i=0;i<n/100;i++)
      cout<<"B";
    for(int j=0;j<n/10%10;j++)
      cout<<"S";
    for(int k=1;k<=n%10;k++)
      cout<<k;
  }
  return 0;
}