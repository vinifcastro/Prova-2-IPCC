#include <stdio.h>

int main(){
    int a, b, n;
    scanf("%d", &n);
    for (a = 1 ; a < n ; a++){
        for (b = 1 ; b < n ; b++){
            if ((((a*b)%n) == 1) && (a<=b)) printf("(%d,%d)\n", a, b);
        }
    }
    return 0;
}