/**
 * 三位数反转
 *
 * 输入一个三位数,分离出它的百位,十位和个位,反转后输出
 * 样例输入:
 * 025
 * 样例输出:
 * 250
 */
#include <stdio.h>

int main() {
    int n,m;
    scanf("%d",&n);
    m = (n%10)*100 + (n/10%10)*10+n/100;
    printf("%d\n",m);
    return 0;
}