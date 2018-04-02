/**
 * 输入一些整数,求出它们的最小值、最大值和平均值(保留三位小数) 输入保证这些数都不超过1000的整数
 * 输入包含多组数据,每组数据第一行是整数个数n,第二行是n个整数，n=0为输入结束
 * 相邻两组数据之间应输出一个空行
 *
 * 样例输入：
 * 8
 * 2 8 3 5 1 7 3 6
 * 4
 * -4 6 10 0
 * 0
 * 样例输出：
 * Case 1:1 8 4.375
 * Case 2:-4 10 3.000
 */
#include <stdio.h>

#define INF 1000000

int main() {
    int x, n = 0, min = INF, max = -INF, kase = 0;
    while (scanf("%d", &n) == 1 && n) {
        int s = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            s += x;
            if (x < min) {
                min = x;
            }
            if (x > max) {
                max = x;
            }
        }
        if (kase) {
            printf("\n");
        }
        printf("Case %d:%d %d %.3f\n", ++kase, min, max, (double) s / n);
    }


    return 0;
}