/**
 * 输入一些整数,求出它们的最小值、最大值和平均值(保留三位小数) 输入保证这些数都不超过1000的整数
 * 样例输入：2 8 3 5 1 7 3 6
 * 样例输出：1 8 4.375
 */
#include <stdio.h>

#define INF 1000000

int main() {
    FILE *fin, *fout;
    fin = fopen("E:\\ACM\\example\\chapter02\\in.txt", "rb");
    fout = fopen("E:\\ACM\\example\\chapter02\\out.txt", "wb");
    int x, n = 0, min = INF, max = -INF, s = 0;
    while (fscanf(fin,"%d", &x) == 1) {
        s += x;
        if (x < min) {
            min = x;
        }
        if (x > max) {
            max = x;
        }
        n++;
    }
    fprintf(fout, "%d %d %.3f\n", min, max, (double) s / n);
    fclose(fin);
    fclose(fout);
    return 0;
}