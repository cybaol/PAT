#include <bits/stdc++.h>
using namespace std;
int main(){
  int T,i=0;
  cin>>T;
  const int N=T;
  long A[N][3];
  while(T--){
    for(int j=0;j<3;j++)
      cin>>A[i][j];
      i++;
  }
  for(int m=0;m<N;m++)
    if(A[m][0]+A[m][1]>A[m][2])
      cout<<"Case #"<<m+1<<": true"<<endl;
    else cout<<"Case #"<<m+1<<": false"<<endl;
  return 0;
}