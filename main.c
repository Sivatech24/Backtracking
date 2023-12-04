#include <stdio.h>

void backtrack(int elements[], int size, int current[], int used[], int currentSize) {
    if (size == 0) {
        // No more elements to consider, a valid permutation is found
        for (int i = 0; i < currentSize; i++) {
            printf("%d ", current[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 0; i < size; i++) {
        if (!used[i]) {
            // Choose
            int chosen = elements[i];
            current[currentSize - size] = chosen;
            used[i] = 1;

            // Explore
            backtrack(elements, size - 1, current, used, currentSize);

            // Backtrack
            used[i] = 0;
        }
    }
}

int main() {
    int elements[] = {1, 2, 3};
    int size = sizeof(elements) / sizeof(elements[0]);
    int current[size];
    int used[size];

    for (int i = 0; i < size; i++) {
        used[i] = 0;
    }

    backtrack(elements, size, current, used, size);

    return 0;
}
