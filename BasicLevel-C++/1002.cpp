#include <bits/stdc++.h>
using namespace std;
int main(){
  char n[99];
  int sum = 0;
  cin>>n;
  char *p=n;
  while(*p) sum += *p++-'0';//9801
  int s=sum,index=0;
  while (s){
  	s /= 10;
  	index++;
  }
  const int indx = index;
  int Arr[indx];
  while (sum){
  	Arr[--index] = sum%10;
  	sum /= 10;
  }
  for (int i=0;i<indx;i++){
     if (i!=0 && i!=indx) cout<<" ";
     if (Arr[i]==0) cout<<"ling";
     else if (Arr[i]==1) cout<<"yi";
     else if (Arr[i]==2) cout<<"er";
     else if (Arr[i]==3) cout<<"san";
     else if (Arr[i]==4) cout<<"si";
     else if (Arr[i]==5) cout<<"wu";
     else if (Arr[i]==6) cout<<"liu";
     else if (Arr[i]==7) cout<<"qi";
     else if (Arr[i]==8) cout<<"ba";
     else if (Arr[i]==9) cout<<"jiu";
  }
  return 0;
}