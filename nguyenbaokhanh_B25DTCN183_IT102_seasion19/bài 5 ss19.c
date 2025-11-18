#include <stdio.h>

int compareArrays(int *a, int *b, int n) {
	int i;
    for (i = 0; i < n; i++) {
        if (*(a + i) != *(b + i))
            return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
	int i;
    int a[n], b[n];

    printf("Nhap cac phan tu mang a:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Nhap cac phan tu mang b:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int result = compareArrays(a, b, n);

    if (result == 1)
        printf("Hai mang giong nhau\n");
    else
        printf("Hai mang khac nhau\n");

    return 0;
}

