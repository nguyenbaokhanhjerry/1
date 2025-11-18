#include <stdio.h>

float average(int *arr, int n) {
    int *p = arr;
    int sum = 0;
	int i;
    for (i = 0; i < n; i++) {
        sum += *(p + i);
    }

    return (float)sum / n;
}

int main() {
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
	int i;
    int arr[n];

    printf("Nhap cac phan tu:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    float avg = average(arr, n);
    printf("Gia tri trung binh cua mang la: %.2f\n", avg);

    return 0;
}

