#include <iostream>
using namespace std;
int ans[31];
int main(void) {
    int A, B, D, num = 0;
    cin >> A >> B >> D;
    int sum = A + B;
    do {
        ans[num++] = sum % D;
        sum /= D;
    } while(sum);
    for(int i = num-1; i >=0 ; --i)
        cout << ans[i];
    return 0;
}