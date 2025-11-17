#include <stdio.h>

int sumofnaturalnums(int n) {
    if (n == 1)               // base case
        return 1;
    else
        return n + sumofnaturalnums(n-1) ;  // direct recursive call
}

int main() {
    int num = 5;
    printf("sum of natural number till %d = %d\n", num, sumofnaturalnums(num));
    return 0;
}
