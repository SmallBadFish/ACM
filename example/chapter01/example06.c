/**
 * 三位数反转
 *
 * 输入一个三位数,分离出它的百位,十位和个位,反转后输出
 * 样例输入:
 * 127
 * 样例输出:
 * 721
 */
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    printf("%d%d%d\n",n%10,n/10%10,n/100);
    return 0;
}