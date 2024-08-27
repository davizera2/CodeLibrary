#include <stdio.h>
 
int main() {
 
    int i, j, t;
    long long int fib[60], n;
    
    scanf("%d", &t);

    for(i = 0; i < t ; i++){
        scanf("%lld", &n);
            
            fib[0] = 0;
            fib[1] = 1;
            
            for(j = 2; j < 61; j++){
                fib[j] = fib[j-1] + fib[j-2];
            }
            printf("Fib(%lld) = %lld\n", n, fib[n]);
    }
    return 0;
}
