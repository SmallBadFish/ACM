/**
 *
 * 输出所有形如aabb的4位完全平方数
 */
#include <stdio.h>
#include <math.h>

int main() {
    for (int i = 1; i < 100; i++) {
        int n = i * i;
        if (n < 1000) {
            continue;
        }
        if (n > 9999) {
            break;
        }
        //第一位数字
        int hi = n/1000;
        //第四位数字
        int low = n%10;
        //判断1 == 2 && 3==4 (数字位数)
        if(hi == (n/100 - hi*10) && low == (n%100)/10){
            printf("%d\n",n);
        }
    }
    return 0;
}