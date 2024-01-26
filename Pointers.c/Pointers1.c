#include <stdio.h>

void isPrime(int n, int i) {
    if (i * i > n) {
        printf("%d is a prime number.\n", n);
        return;
    }
    if (n % i == 0) {
        printf("%d is not a prime number.\n", n);
        return;
    }
    isPrime(n, i + 1);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    isPrime(num, 2);
    return 0;
}