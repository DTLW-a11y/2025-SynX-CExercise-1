#include <stdio.h>
int n, a;
int main() {
    double s = 0;
    int c[101];
    for(int i = 0; i <= 100; i ++) c[i] = 0;
    printf("请输入学生人数: ");
    scanf("%d", &n);
    printf("请输入5个学生的成绩:\n");
    printf("请输入5个学生的成绩(0-100分):\n");
    for (int i = 1; i <= n; i ++)
    {
        printf("请输入第%d个学生的成绩: ", i);
        scanf("%d", &a);
        s += a;
        c[a] ++;
    }
    printf("\n%d个学生的平均分是: %.2lf\n", n, s / (double)n);
    printf("\n分数分布统计:");
    printf("\n分数    人数");
    printf("\n============");
    for (int i = 0; i <= 100; i ++)
        if (c[i] > 0) printf("\n%d      %d", i, c[i]);
    return 0;
}