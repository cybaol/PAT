#include <bits/stdc++.h>
using namespace std;
int main(){
  int N,count=0,index=0;
  vector<int> Arr(100000);
  cin>>N;
  for(int i=3;i<=N;i+=2){
  	bool flag=true;
    for(int j=2;j<=sqrt(i);j++)
  	  if(i%j==0){flag=false;break;}
    	if(flag) Arr[index++] = i;
}
  for(int i=0;i<index-1;i++)
    if(Arr[i+1]-Arr[i]==2) count++;
  cout<<count<<endl;
  return 0;
}