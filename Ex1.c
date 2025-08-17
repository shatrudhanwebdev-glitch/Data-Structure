#include<stdio.h>

void main() {
    int a[5] = {2, 4, 5, 8, 10};

    int i, key = 6;

    for(i = 0; i < 5; i++) {
        if(key == a[i]) {
            printf("Element found at index %d", a[i], i);

        }
    }
    printf("The element not found %d");
}