/**
 * 圆柱体的表面积 表面积=2*底面积+侧面积
 * 输入地面半径r和高h,输出圆柱体的表面积,保留三位小数
 * 样例输入:
 * 3.5 9
 * 样例输出:
 * Area = 274.889
 */
#include <stdio.h>
#include <math.h>

int main() {
    const double pi = acos(-1.0);
    double r, h, s1, s2, s;
    scanf("%lf%lf", &r, &h);
    s1 = pi * r * r;
    s2 = 2*pi*r*h;
    s = 2 * s1 + s2;
    printf("Area = %.3f\n", s);
    return 0;
}