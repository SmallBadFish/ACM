/**
 * 交换变量
 * 输入两个整数a和b,交换二者的值,然后输出
 * 样例输入:
 * 824 16
 * 样例输出
 * 16 824
 */
#include <stdio.h>

int main() {
    int m,n;
    scanf("%d%d",&m,&n);
    m=m+n;
    n=m-n;
    m=m-n;
    printf("%d %d\n",m,n);
}