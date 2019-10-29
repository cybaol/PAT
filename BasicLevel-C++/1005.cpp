#include <bits/stdc++.h>
using namespace std;
int main(){
  int K,i=0,index=0,cnt=0;
  vector<int> Arr(10000),T(100);
  cin>>K;
  const int k=K-1,size=K;
  int n[size],Tn[size],count=0;
  while(K--){
    cin>>n[index];
    Tn[index]=n[index];
    while(n[index]!=1){
      if(k!=K-1){
      	int i=0;
      	while(i<count)
         	if(n[index]==Arr[i++]) break;
      }
      if(n[index]%2==0){
      	Arr[i++] = n[index] /= 2;count++;}
      else{
      	Arr[i++] = n[index] = (3*n[index]+1)/2;count++;}
    }
    index++;
  }
  for(i=0;i<=k;i++)
    for(int j=0;j<count;j++)
      if(Tn[i]==Arr[j]) break;
      else if(j==count-1) T[cnt++] = Tn[i];
  for(int p=0;p<cnt;p++)
    for(int q=p+1;q<cnt;q++)
      if(T[p]<T[q]){
      	int temp = T[p];
      	T[p] = T[q];
      	T[q] = temp;
      }
    for(int m=0;m<cnt;m++){
      if(m!=0) cout<<" ";
      cout<<T[m];
    }
  return 0;
}