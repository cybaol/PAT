#include <bits/stdc++.h>
using namespace std;
int main(){
  int N;
  char C;
  cin>>N>>C;
  for (int i=0;i<N;i++)
    cout<<C;
    cout<<endl;
  for (int i=0;i<int(N/2.0+0.5)-2;i++){
   	for (int j=0;j<N;j++){
   		if (j==0 || j==N-1)cout<<C;
   		else cout<<" ";
   	}
     cout<<endl;
  }
  for (int i=0;i<N;i++)
    cout<<C;
  return 0;
}