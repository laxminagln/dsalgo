#include<stdio.h>

int main() {
    int n, d, i, j, t, a[100000];
    scanf("%d %d", &n, &d);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<d; i++){
        t = a[0];
        for(j=1; j<n; j++){
            a[j-1] = a[j];
        }
        a[n-1] = t;
    }
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}
