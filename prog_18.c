#include <stdio.h>

int main() {
    int rows = 5;
    int count = 1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}
