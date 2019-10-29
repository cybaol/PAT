#include <cstdio>
int ans[100] = {0};
int main(void) {
    int N, score;
    scanf("%d", &N);
    for(int i = 0; i < N; ++i) {
        scanf("%d", &score);
        ++ans[score];
    }
    scanf("%d", &N);
    for(int i = 0; i < N; ++i) {
        scanf("%d", &score);
        if(i) printf(" ");
        printf("%d", ans[score]);
    }
    return 0;
}