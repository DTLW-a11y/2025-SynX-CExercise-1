#include <stdio.h>
int main() {
    int a, s;
    double n = 0;
    printf("请输入学生人数: ");
    scanf("%d", &s);
    printf("\n请输入%d个学生的成绩:\n", s);
    for (int i = 1; i <= s; i ++)
    {
        printf("\n请输入第%d个学生的成绩: ", i);
        scanf("%d", &a);
        n += a;
    }
    printf("\n%d个学生的平均分是: %.2lf", s, n / (double)s);
    return 0;
}