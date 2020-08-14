#include<stdio.h>

int main() {
    int n, q, i, j, r[1000];
    char a[1000][20], b[1000][20];
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%s", &a[i]);
    }
    scanf("%d", &q);
    for(i=0; i<q; i++){
        scanf("%s", &b[i]);
    }
    for(i=0; i<q; i++){
        r[i] = 0;
        for(j=0; j<n; j++){

            if(strcmp(b[i], a[j]) == 0){
                r[i] = r[i] + 1;
            }else{
                continue;
            }
        }
    }
    for(i=0; i<q; i++){
        printf("%d\n", r[i]);
    }
    return 0;
}
