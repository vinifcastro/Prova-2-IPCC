#include <stdio.h>

int main(){
    int n, i, k, x;
    x = 0;
    scanf("%d", &n);
    for (i=1 ; i<=6; i++){
        for (k = 6; k >= 1; k--){
            if (i!=k){
                if ((i+k) == n){
                    printf("D1: %d, D2: %d\n", i, k);
                    x++;
                }
            }
        }
    }
    if (x == 0) printf("Combinacao impossivel\n");
    else printf("Ha %d possibilidades\n", x);
    return 0;
}