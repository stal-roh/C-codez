#include <stdio.h>

int main() {
    int m, n, sum = 0, count = 0;
    float avg = 0.0;

    printf("Enter the value of m: ");
    scanf("%d", &m);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = m; i <= n; i++) {
        sum += i;
        count++;
    }

    avg = (float) sum / count;

    printf("The sum of numbers from %d to %d is: %d\n", m, n, sum);
    printf("The average of numbers from %d to %d is: %.2f", m, n, avg);

    return 0;
}
