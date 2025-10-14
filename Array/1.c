#include <stdio.h>
int main() {
    int a;
    double n = 0;
    printf("请输入5个学生的成绩:\n");
    for (int i = 1; i <= 5; i ++)
    {
        printf("\n请输入第%d个学生的成绩: ", i);
        scanf("%d", &a);
        n += a;
    }
    printf("\n5个学生的平均分是: %.2lf", n / 5.0f);
    return 0;
}