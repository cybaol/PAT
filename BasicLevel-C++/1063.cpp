#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    double max=0.0,temp;
    scanf("%d",&N);
    vector<int> v1(N),v2(N);
    for(int i=0;i<N;i++){
        scanf("%d %d",&v1[i],&v2[i]);
        temp = sqrt(v1[i]*v1[i] + v2[i]*v2[i]);
        if(max < temp) max = temp;
    }
    printf("%.2f",max);
}