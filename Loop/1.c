#include <stdio.h>
int main() {
    printf("请输入一个非负整数: ");
    int i;
    long long ans = 1;
    scanf("%d", &i);
    printf("%d! = ", i);
    for (; i >= 1; i --) ans *= i;
    printf("%lld", ans);
    return 0;
}