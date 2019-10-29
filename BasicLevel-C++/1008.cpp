#include<bits/stdc++.h>
using namespace std;
int main(){
  int N,M;
  cin>>N>>M;
  const int size=N;
  vector<int> A(size);
  for(int i=0;i<size;i++)
    cin>>A[i];
  for(int i=0;i<M;i++){
	  int temp=A[size-1];
    for(int j=size-2;j>=0;j--)
      A[j+1] = A[j];
    A[0] = temp;
  }
  for(int i=0;i<size-1;i++)
    cout<<A[i]<<" ";
  cout<<A[size-1];
  return 0;
}