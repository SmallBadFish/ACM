/**
 *
 * 输出所有形如aabb的4位完全平方数
 * 不直接判断sqrt(m)==floor(sqrt(m))是否为整数的原因,浮点数计算存在误差.整数1可能变成0.9999999999
 */
#include <stdio.h>
#include <math.h>

int main() {
    for (int i = 1; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            int m = i * 1100 + j * 11;
            int n = floor(sqrt(m) + 0.5);
            if (n * n == m) {
                printf("%d\n", m);
            }
        }
    }
    return 0;
}