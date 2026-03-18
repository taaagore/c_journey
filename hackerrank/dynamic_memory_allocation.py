#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int *arr, n;
    scanf("%d", &n);
    arr = malloc(n*sizeof(int));
    for(int i=0; i<n; i++) {
        scanf("%d", (arr+i));
    }
    int sum =0;
    for(int i=0; i<n; i++)
        sum = sum + *(arr+i);
        
    printf("%d", sum);
    return 0;
}
