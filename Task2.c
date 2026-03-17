#include <stdio.h>

int toggleBit(int num, int position) {
    return num ^ (1 << position);
}

int main() {
    int num, position;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter bit position to toggle (0-based): ");
    scanf("%d", &position);

    int result = toggleBit(num, position);

    printf("Result after toggling bit %d: %d\n", position, result);

    return 0;
}
