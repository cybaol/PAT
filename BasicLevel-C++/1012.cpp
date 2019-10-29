#include <bits/stdc++.h>
using namespace std;
int main(){
  int A3,A4,A5,n,flag=1,sign=0;
  long long A1,A2,sum=0;
  A1=A2=A3=A4=A5=0;
  cin>>n;
  const int N=n;
  vector<int> ARR(N),A(N),B(N);
  for(int i=0;i<N;i++)
    cin>>ARR[i];
  for(int i=0;i<N;i++)
    if(ARR[i]%10==0) A1 += ARR[i];
    else if(ARR[i]%5==1){
    	sign = 1;
      A2 += ARR[i]*flag;
      flag *= -1;
    }
    else if(ARR[i]%5==2) A3++;
    else if(ARR[i]%5==3){
    	sum += ARR[i];
    	A4++;
    }
    else if(ARR[i]%5==4) B[A5++]=ARR[i];
  int max=B[0];
  for(int i=1;i<A5;i++)
    if(B[i]>max) max = B[i];
  if(A1) cout<<A1<<" ";
  else cout<<"N ";
  if(sign==1) cout<<A2<<" ";
  else cout<<"N ";
  if(A3) cout<<A3<<" ";
  else cout<<"N ";
  if(sum) cout<<fixed<<setprecision(1)<<1.0*sum/A4<<" ";
  else cout<<"N ";
  if(A5) cout<<max<<endl;
  else cout<<"N"<<endl;
  return 0;
}