#include <bits/stdc++.h>
using namespace std;
int main(){
  char A[1001],Q[1001];
  int B=0,R,bit=0,num,i,j;
  cin>>A>>B;
  for(i=0,j=0;i<strlen(A)-1;i++){
    num = A[i]-'0'+bit*10;
    if(num<B){
    	bit = num;
      if(i) Q[j++] = '0';
    }
    else{
      Q[j++] = num/B+'0';
      bit = num%B;
    }
  }
  num = A[i]-'0'+bit*10;
  Q[j++] = num/B+'0';
  R = num%B;
  Q[j] = '\0';
  cout<<Q<<" "<<R;
  return 0;
}