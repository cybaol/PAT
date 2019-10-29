#include <cstdio>
#include <algorithm>
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
void To_String(int N, int A[]) {
	for (int i = 0; i < 4; ++i) {
		A[i] = N % 10;
		N /= 10;
	}
}
int TO_Num(int A[]) {
	int N = 0;
	for (int i = 0; i < 4; ++i)
		N = N * 10 + A[i];
	return N;
}
int main(void) {
	int N, max, min, A[4];
	scanf("%d", &N);
	while(true){
		To_String(N, A);
		sort(A, A+4);//升序
		min = TO_Num(A);
		sort(A, A+4, cmp);//降序
		max = TO_Num(A);
		N = max - min;
		printf("%04d - %04d = %04d\n", max, min, N);
		if(N == 0 || N == 6174) break;
	}
	return 0;
}