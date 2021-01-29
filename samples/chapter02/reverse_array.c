/**
 * @author HuangKai
 */

#include <stdio.h>
#include "inplace_swap.c"

void reverse_array(int a[], int cnt) {
    int first, last;
    for (first = 0, last = cnt - 1; first < last; first++, last--) {
        inplace_swap(&a[first], &a[last]);
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    reverse_array(a, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d\t", a[i]);
    }
    return 0;
}