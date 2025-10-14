#include <stdio.h>
int n;
void array(long long int a, long long int b) {
    static int cir = 1;
    if((++ cir) >= n) return ;
    a += b;
    printf(" %lld", a);
    array(b, a);
    return ;
}
int main() {
    printf("请输入打印项数:");
    scanf("%d", &n);
    printf("斐波那契数列前%d项为:", n);
    if (n == 0) return 0;
    else if (n == 1) printf("0");
    else {
        printf("0 1");
        array(0, 1);
    }
    return 0;
}