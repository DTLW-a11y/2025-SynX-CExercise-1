#include <stdio.h>
#include <stdlib.h>
int n;
int main() {
    printf("请输入打印项数:");
    scanf("%d", &n);
    printf("斐波那契数列前%d项为:", n);
    int i = 2;
    long long int *arr = (long long int*)malloc(n * sizeof(long long int));
    if (arr == NULL) return 1;
    arr[0] = 0;
    arr[1] = 1;
    switch (n)
    {
        case 0:
            break;
        case 1:
            printf("0");
            break;
        default:
            printf("0 1");
            n --;
            while(i <= n)
            {
                arr[i] = arr[i - 1] + arr[i - 2];
                printf(" %lld", arr[i]);
               i ++;
            }
    }
    return 0;
}