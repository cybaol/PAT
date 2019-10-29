#include <bits/stdc++.h>
using namespace std;
class Student{
private:
  char name[11];
  char ID[11];
  int score;
public:
  void setIfo(){cin>>name>>ID>>score;}
  int getScore(){return score;}
  void setScore(int score){this->score=score;}
  void getIfo(){cout<<name<<" "<<ID<<endl;}
};
int main(){
  int n;
  cin>>n;
  const int N=n;
  Student stu[N];
  for (int i=0;n;n--)
    stu[i++].setIfo();
  Student max=stu[0],min=stu[0];
  for(int i=1;i<N;i++){
    if (stu[i].getScore()>max.getScore())
      max = stu[i];
    if (stu[i].getScore()<min.getScore())
      min = stu[i];
  }
  max.getIfo();
  min.getIfo();
  return 0;
}