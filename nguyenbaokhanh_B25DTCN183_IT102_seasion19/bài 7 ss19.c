#include <stdio.h>

int main() {
    int n = 0;
    int arr[100];
    int *p = arr;
    int choice;
    int i;

    do {
        printf("**********MENU**********\n");
        printf("1. Nhap so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("0. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu n: ");
                scanf("%d", &n);
                printf("Nhap tung phan tu:\n");
                for (i = 0; i < n; i++)
                    scanf("%d", (p + i));
                break;

            case 2:
                printf("Cac phan tu: ");
                for (i = 0; i < n; i++)
                    printf("%d ", *(p + i));
                printf("\n");
                break;

            case 3:
                printf("Do dai mang: %d\n", n);
                break;

            case 4:
                {
                    int sum = 0;
                    for (i = 0; i < n; i++)
                        sum += *(p + i);
                    printf("Tong cac phan tu: %d\n", sum);
                }
                break;

            case 5:
                {
                    int max = *p;
                    for (i = 0; i < n; i++)
                        if (*(p + i) > max)
                            max = *(p + i);
                    printf("Phan tu lon nhat: %d\n", max);
                }
                break;

            case 0:
                break;

            default:
                printf("Lua chon khong hop le\n");
        }

    } while (choice != 0);

    return 0;
}

