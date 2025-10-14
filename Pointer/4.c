#include <stdio.h>
void swap(int *n1, int *n2) {
    int cache = *n2;
    *n2 = *n1;
    *n1 = cache;
    return ;
}
int main() {
    int a, b;
    printf("请输入整数a: ");
    scanf("%d", &a);
    printf("请输入整数b: ");
    scanf("%d", &b);
    printf("交换前: \n");
    printf("a: %d\nb: %d\n", a, b);
    swap(&a, &b);
    printf("交换后: \n");
    printf("a: %d\nb: %d\n", a, b);
    return 0;
}