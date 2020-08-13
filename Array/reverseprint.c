#include<stdio.h>

int main() {
    int n, i=0, a[1000];
    scanf("%d", &n);
    while(i<n){
        scanf("%d", &a[i]);
        i++;
    }
    for(i=n-1; i>=0; i--){
        printf("%d ", a[i]);
    }
    return 0;
}
