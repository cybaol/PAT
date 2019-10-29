#include <iostream>
#include <string>
using namespace std;
int num[10] = {0};
int main(void) {
	string s;
    getline(cin, s);
    for(auto it = s.begin(); it != s.end(); ++it)
    	++num[*it - '0'];
    for(int i = 0; i < 10; ++i)
        if(num[i] != 0) cout << i << ":" << num[i] << endl;
    return 0;
}