#include <bits/stdc++.h>
using namespace std;
int Max(int B,int C,int J){
	return B>C?(B>J?B:J):(C>J?C:J);
}
int main(){
  int n,cnt_JS,cnt_YS,cnt_P;
  int countJB,countJC,countJJ;
  int countYB,countYC,countYJ;
  cnt_JS=cnt_YS=cnt_P=0;
  countJB=countJC=countJJ=0;
  countYB=countYC=countYJ=0;
  cin>>n;
  const int N=n;
  vector<char> Arr_J(N),Arr_Y(N);
  for(int i=0;i<N;i++)
    cin>>Arr_J[i]>>Arr_Y[i];
  for(int i=0;i<N;i++)
    if(Arr_J[i]=='B')
      if(Arr_Y[i]=='C'){cnt_JS++;countJB++;}
      else if(Arr_Y[i]=='J'){cnt_YS++;countYJ++;}
      else cnt_P++;
    else if(Arr_J[i]=='C')
      if(Arr_Y[i]=='J'){cnt_JS++;countJC++;}
      else if(Arr_Y[i]=='B'){cnt_YS++;countYB++;}
      else cnt_P++;
    else if(Arr_J[i]=='J')
      if(Arr_Y[i]=='B'){cnt_JS++;countJJ++;}
      else if(Arr_Y[i]=='C'){ cnt_YS++;countYC++;}
      else cnt_P++;
  cout<<cnt_JS<<" "<<cnt_P<<" "<<cnt_YS<<endl;
  cout<<cnt_YS<<" "<<cnt_P<<" "<<cnt_JS<<endl;
  int maxJ=Max(countJB,countJC,countJJ);
  int maxY=Max(countYB,countYC,countYJ);
  if(maxJ==countJB)cout<<"B ";
  else if(maxJ==countJC)cout<<"C ";
  else cout<<"J ";
  if(maxY==countYB)cout<<"B";
  else if(maxY==countYC)cout<<"C";
  else cout<<"J";
  return 0;
}