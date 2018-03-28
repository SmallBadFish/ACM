/**
 * 输入三个整数,从小到大排序
 * 样例输入:
 * 20 7 33
 * 样例输出:
 * 7 20 33
 */
#include <stdio.h>

int main() {
    int a, b, c, t;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) {
        t = a;
        a = b;
        b = t;
    }
    if (a > c) {
        t = a;
        a = c;
        c = a;
    }
    if (b > c) {
        t = b;
        b = c;
        c = t;
    }
    printf("%d %d %d", a, b, c);
}