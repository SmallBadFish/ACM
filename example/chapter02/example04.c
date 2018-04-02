#include <stdio.h>
#include <math.h>

int main() {
    double sum = 0;
    for (int i = 0;; i++) {
        double term = 1.0 / (i * 2 + 1);
        sum = sum + pow(-1, i) * term;
        if (term < 1e-6) {
            break;
        }
    }
    printf("%.6f %.6f\n", sum, 3.14125 / 4);
    return 0;
}