#include <stdio.h>
#include <stdlib.h>

void c(int b){
    int i, *a, *m;
    a = malloc(sizeof(int)*6);
    m = malloc(sizeof(int)*6); 
    m[0] = 50000;
    m[1] = 10000;
    m[2] = 5000;
    m[3] = 1000;
    m[4] = 500;
    m[5] = 100;
    for(i = 0; i < 6; i++){
        a[i] = b / m[i];
        b -= a[i] * m[i];
        printf("%d won : %d\n", m[i], a[i]);
        }
    free(m);
    free(a);
   }
    

int main(){
    int b;
    printf(">> ");
    scanf("%d", &b); getchar();
    c(b);
    return 0;
}