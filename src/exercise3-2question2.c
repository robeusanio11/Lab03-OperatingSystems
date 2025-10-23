#include <stdio.h>

int main() {
    int var1 = 0;
    int var2 = 1;

    printf("Address of first variable on stack: %p\n", (void *)&var1);
    printf("Address of second variable on stack: %p\n", (void *)&var2);

    return 0;
}
