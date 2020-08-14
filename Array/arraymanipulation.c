#include<stdio.h>

int main() {
    long int n, m, i, j, q[100000][3], a[1000000], max;
    scanf("%ld%ld", &n, &m);
    for(i=0; i<m; i++){
        for(j=0; j<3; j++)
            scanf("%ld", &q[i][j]);
    }
    for(i=0; i<n; i++)
        a[i] = 0;
    for(i=0; i<m; i++){
        for(j=q[i][0]-1; j<q[i][1]; j++){
            a[j] = a[j] + q[i][2];
        }
    }
    max = a[0];
    for(i=0; i<n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    printf("%ld", max);
    return 0;
}
