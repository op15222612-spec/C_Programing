/*Name:Om Patil 
Branch:civil
Uin:251C01*/
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;  
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }
    printf("Array in reverse order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }

    printf("\n");
    return 0;
}
