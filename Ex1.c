#include<stdio.h>

void main() {
    int a[5] = {2, 4, 5, 8, 10};

    int i, key = 8;
    int found;
    for(i = 0; i < 5; i++) {
        if(key == a[i]) {
            printf("Element %d found at index %d", a[i], i);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("The element not found \n");
    }
    
}