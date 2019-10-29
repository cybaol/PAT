#include <bits/stdc++.h>
using namespace std;
int main(){
  int N,index=0;
  cin>>N;
  vector<char> Pre(N*4),Rear(N*4),C(N*4);
  vector<int> Num(N);
  for(int i=0;i<N*4;i++){
   cin>>Pre[i]>>C[i]>>Rear[i];
   if(!(Rear[i]-'T')) Num[index++] = Pre[i]-'A'+1;
  }
  for(int i=0;i<N;i++)
    cout<<Num[i];
  return 0;
}