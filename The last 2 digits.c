//The last 2 digits
#include <stdio.h>

int main() {
    unsigned long long A, B, C, D, result;
  
    scanf("%llu %llu %llu %llu", &A, &B, &C, &D);
    
    
    result = (A % 100) * (B % 100) % 100;
    result = (result * (C % 100)) % 100;
    result = (result * (D % 100)) % 100;
    
    printf("%02llu\n", result);
    
    return 0;
}
