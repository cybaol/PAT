#include <bits/stdc++.h>
using namespace std;
int main(){
  int A, B, i = 0;
  cin >> A >> B;
  int multi = A * B;
  char ch[10];
  while(multi) {
      ch[i++] = multi % 10 + '0';
      multi /= 10;
  }
  ch[i] = '\0';
  char *p = ch, *q = ch+strlen(ch);
  while (*p=='0') ++p;
  while(p != q)
    cout << *p++;
  cout << *p << endl;
  return 0;
}