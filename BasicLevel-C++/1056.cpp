#include <bits/stdc++.h>
using namespace std;
int main(){
  int N,index=0;
  long sum=0;
  cin>>N;
  vector<int> Arr(N),Num(N*(N-1));
  for(int i=0;i<N;i++)
    cin>>Arr[i];
  for(int i=0;i<N;i++)
    for(int j=0;j<N;j++){
      if(i==j)continue;
      Num[index] = Arr[i]*10 + Arr[j];
      sum += Num[index++];
    }
  cout<<sum<<endl;
  return 0;
}