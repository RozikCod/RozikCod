#include <stdio.h>

int fun(int array[], int n) {
     int search;
    for (int c = 1; c < n; c++) {
        if (array[c] == search) {
            return c; 
        }
    }
    return search;
}
int main() {
    int array2[100], search2, n2;

    printf("Enter the number of elements in array\n");
    scanf("%d", &n2);

    printf("Enter %d integer(s)\n", n2);

    for (int c = 0; c < n2; c++) {
        scanf("%d", &array2[c]);
    }

    printf("Enter the number to search\n");
    scanf("%d", &search2);
    int a = fun(array2, n2);
    if (a != -1) {  
        printf("your num is %d and location is %d\n", search2, a);
    }
    else {
        printf("your number  is not here\n");
    }

    
    return 0;
}
