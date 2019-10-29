#include <cstdio>
using namespace std;
const int MAX = 100010;
int school[MAX] = {0};//学校得分
int main(void) {
    int N, ID, score;
    scanf("%d", &N);
    for(int i = 0; i < N; ++i) {
        scanf("%d%d", &ID, &score);
        school[ID] += score;
    }
    int index = 1, max = -1;
    for(int i = 1; i <= N; ++i)
        if(max < school[i]) {
            max = school[i];
            index = i;
        }
    printf("%d %d\n", index, max);
    return 0;
}