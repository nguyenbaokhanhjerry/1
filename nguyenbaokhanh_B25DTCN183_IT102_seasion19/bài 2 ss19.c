#include <stdio.h>

void countEvenOdd(int *arr, int n, int *even, int *odd) {
    *even = 0;
    *odd = 0;

    int *p = arr;
	int i;
    for (i = 0; i < n; i++) {
        if (*(p + i) % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}

int main() {
    int n;
	int i;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int evenCount, oddCount;

    countEvenOdd(arr, n, &evenCount, &oddCount);

    printf("So phan tu chan: %d\n", evenCount);
    printf("So phan tu le: %d\n", oddCount);

    return 0;
}

