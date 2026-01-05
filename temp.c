

#include <stdio.h>

void spiral(int a[][4], int n) {
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {

        // 1. Left → Right
        for (int i = left; i <= right; i++)
            printf("%d ", a[top][i]);
        top++;

        // 2. Top → Bottom
        for (int i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;

        // 3. Right → Left
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                printf("%d ", a[bottom][i]);
            bottom--;
        }

        // 4. Bottom → Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", a[i][left]);
            left++;
        }
    }
}

int main() {
    // 3×3 matrix (if 4×4 replace values accordingly)
    int a[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10,11,12},
        {13,14,15,16}
    };

    int n = 4;  // change to 3 for 3x3 matrix

    printf("Spiral Order:\n");
    spiral(a, n);

    return 0;
}
