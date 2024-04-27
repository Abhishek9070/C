// WAP to print the given series 1!/1+2!/2+3!/3+.........+n!/n
#include <stdio.h>

float fact(int n) {
    if (n == 1) return 1;
    return n * fact(n - 1);
}

int main() {
    int n;
    printf("Enter your number:");
    scanf("%d", &n);
    float sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += 1.0f / fact(i);
    }
    printf("%f", sum);
    return 0;
}
