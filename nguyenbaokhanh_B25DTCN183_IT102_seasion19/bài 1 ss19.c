#include <stdio.h>

int findMax(int *arr, int n) {
    int max = *arr;   
    int *p = arr;      
	int i;
    for (i = 0; i < n; i++) {
        if (*(p + i) > max) {
            max = *(p + i);
        }
    }
    return max;
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

    int maxValue = findMax(arr, n);

    printf("Phan tu lon nhat la: %d\n", maxValue);

    return 0;
}

