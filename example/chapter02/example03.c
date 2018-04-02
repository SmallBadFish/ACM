/**
 * 猜想:对于任意大于1的自然数.若n为奇数,则将n变为3n+1,否则变为n的一半。
 * 经过若干次这样的变换，一定会使n变为1.例如，3-->10-->5-->16-->8-->4--2-->1
 * 输入n,输出变换的次数 n<=10^9
 * 样例输入：3
 * 样例输出：7
 */
#include <stdio.h>
#include <math.h>

int main() {
    long long a;
    int  count = 0;
    scanf("%d", &a);
    //判断n是否小于10^9
    if (a > pow(10, 9)) {
        return 0;
    }
    while (a > 1) {
        if (a % 2 == 1) {
            a = 3 * a + 1;
        } else {
            a = a / 2;
        }
        count++;
    }

    printf("%d\n", count);
    return 0;
}