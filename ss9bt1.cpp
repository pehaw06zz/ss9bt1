#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE];
    int currentLength = 0;
    int n;
    printf("Nhap so phan tu ban dau (toi da %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n > MAX_SIZE || n < 0) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    currentLength = n;
    int value, addIndex;
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vi tri muon them (0-%d): ", MAX_SIZE - 1);
    scanf("%d", &addIndex);
    if (addIndex < 0 || addIndex >= MAX_SIZE) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    if (addIndex >= currentLength) {
        arr[addIndex] = value;
        currentLength = addIndex + 1;
    } else {
        for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = value;
        currentLength++;
    }
    printf("Mang sau khi them:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

