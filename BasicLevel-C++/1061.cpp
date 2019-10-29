#include <bits/stdc++.h>
using namespace std;
int main(){
  int N,M;
  cin>>N>>M;
  vector<int> maxScore(M),key(M);
  const int row = N,col = M;
  int answer[row][col];
  for(int i=0;i<M;i++)
    cin>>maxScore[i];
  for(int i=0;i<M;i++)
    cin>>key[i];
  for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
      cin>>answer[i][j];
  for(int i=0;i<row;i++){
    int score = 0;
    for(int j=0;j<col;j++)
      if(answer[i][j]==key[j])
        score += maxScore[j];
    cout<<score<<endl;
  }
  return 0;
}