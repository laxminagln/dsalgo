#include<stdio.h>

int main(){
    int i, j, a[6][6], sum[4][4], temp, k, l;
    for(i=0; i<6; i++){
        for(j=0; j<6; j++)
            scanf("%d", &a[i][j]);
    }
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            sum[i][j] = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
        }
    }
    temp = sum[0][0];
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(sum[i][j] > temp){
                temp = sum[i][j];
            }else{
                continue;
            }
        }
    }
    printf("%d", temp);
}
