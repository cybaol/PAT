#include <bits/stdc++.h>
using namespace std;
int main(){
  char A[10],B[10];
	int DA,DB,sA=0,sB=0;
	cin>>A>>DA>>B>>DB;
	char *p=A,*q=B;
	while (*p)
		if(*p++-'0'==DA) sA = sA*10+DA;
	while (*q)
		if(*q++-'0'==DB) sB = sB*10+DB;
	cout<<sA+sB<<endl;
	return 0;
}