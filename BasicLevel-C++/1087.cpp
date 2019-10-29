#include <bits/stdc++.h>
using namespace std;
int main(){
  int N,index=0,count=1;
  cin>>N;
  vector<int> Arr(N);
  for(int n=1;n<=N;n++)
    Arr[index++] = n/2 + n/3 + n/5;
  for(int i=1;i<index;i++)
    if(Arr[i-1]==Arr[i])continue;
    else count++;
  cout<<count<<endl;
  return 0;
}