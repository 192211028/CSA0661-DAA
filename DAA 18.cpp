#include <stdio.h>
#include <stdbool.h>

void sieve_of_eratosthenes(int n) {
    bool is_prime[n+1];
    for (int i = 2; i <= n; i++) {
        is_prime[i] = true;
    }
    for (int p = 2; p * p <= n; p++) {
        if (is_prime[p] == true) {
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
        }
    }
    printf("Prime numbers up to %d are: ", n);
    for (int p = 2; p <= n; p++) {
        if (is_prime[p]) {
            printf("%d ", p);
        }
    }
    printf("\n");
}
int main() {
    int limit;
    printf("Enter the limit to find all prime numbers up to: ");
    scanf("%d", &limit);
    sieve_of_eratosthenes(limit);
    
    return 0;
}

