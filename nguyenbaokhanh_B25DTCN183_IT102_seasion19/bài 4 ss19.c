#include <stdio.h>

int countValue(int *arr, int n, int x) {
    int count = 0;
    int *p = arr;
	int i;
    for (i = 0; i < n; i++) {
        if (*(p + i) == x)
            count++;
    }

    return count;
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

    int x;
    printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);

    int result = countValue(arr, n, x);

    printf("So lan xuat hien cua %d la: %d\n", x, result);

    return 0;
}

