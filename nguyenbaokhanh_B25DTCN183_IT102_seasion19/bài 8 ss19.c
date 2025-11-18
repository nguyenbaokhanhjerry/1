#include <stdio.h>

int isPrime(int x) {
    if (x < 2) return 0;
    int k;
    for (k = 2; k * k <= x; k++)
        if (x % k == 0)
            return 0;
    return 1;
}

int main() {
    int n = 0;
    int arr[100];
    int *p = arr;
    int choice, subChoice, x;
    int i;

    do {
        printf("**********MENU**********\n");
        printf("1. Nhap so phan tu va tung phan tu\n");
        printf("2. In cac phan tu chan\n");
        printf("3. In cac phan tu nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Tim kiem phan tu\n");
        printf("0. Thoat\n");
        printf("Lua chon cua ban: ");
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
                printf("Cac phan tu chan: ");
                for (i = 0; i < n; i++)
                    if (*(p + i) % 2 == 0)
                        printf("%d ", *(p + i));
                printf("\n");
                break;

            case 3:
                printf("Cac phan tu nguyen to: ");
                for (i = 0; i < n; i++)
                    if (isPrime(*(p + i)))
                        printf("%d ", *(p + i));
                printf("\n");
                break;

            case 4:
                for (i = 0; i < n / 2; i++) {
                    int temp = *(p + i);
                    *(p + i) = *(p + n - 1 - i);
                    *(p + n - 1 - i) = temp;
                }
                printf("Mang da duoc dao nguoc\n");
                break;

            case 5:
                printf("*****SAP XEP*****\n");
                printf("1. Tang dan\n");
                printf("2. Giam dan\n");
                printf("Lua chon: ");
                scanf("%d", &subChoice);

                if (subChoice == 1) {
                	int j;
                    for (i = 0; i < n - 1; i++)
                        for (j = i + 1; j < n; j++)
                            if (*(p + i) > *(p + j)) {
                                int temp = *(p + i);
                                *(p + i) = *(p + j);
                                *(p + j) = temp;
                            }
                    printf("Da sap xep tang dan\n");
                }

                else if (subChoice == 2) {
                	int j;
                    for (i = 0; i < n - 1; i++)
                        for (j = i + 1; j < n; j++)
                            if (*(p + i) < *(p + j)) {
                                int temp = *(p + i);
                                *(p + i) = *(p + j);
                                *(p + j) = temp;
                            }
                    printf("Da sap xep giam dan\n");
                }

                break;

            case 6:
                printf("Nhap gia tri can tim: ");
                scanf("%d", &x);

                for (i = 0; i < n; i++)
                    if (*(p + i) == x) {
                        printf("Tim thay %d tai vi tri %d\n", x, i);
                        break;
                    }

                if (i == n)
                    printf("Khong tim thay %d trong mang\n", x);

                break;

            case 0:
                break;

            default:
                printf("Lua chon khong hop le\n");
        }

    } while (choice != 0);

    return 0;
}

