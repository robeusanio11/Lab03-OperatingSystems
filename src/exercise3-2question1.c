#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        arr[i] = i * 5;
    }

    printf("Addresses array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("Index = %d, Address = %p\n", i, (void *)&arr[i]);
    }

    free(arr);
    return 0;
}
