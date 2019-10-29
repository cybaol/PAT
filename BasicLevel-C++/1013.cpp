#include <bits/stdc++.h>
using namespace std;
int main(){
  int M,N;
  cin>>M>>N;
  vector<int> Prime(1,2);
  for(int i=3;i<=104729;i+=2){
    bool isPrime = true;
    for(int j=2;j<=sqrt(i);j++)
      if(i%j==0){
        isPrime = false;
        break;
      }
      if(isPrime) Prime.push_back(i);
  }
  for(int i=M-1;i<N-1;i++){
    cout<<Prime[i];
    if((i-M+2)%10) cout<<" ";
    else cout<<endl;
  }
  cout<<Prime[N-1];
  return 0;
}