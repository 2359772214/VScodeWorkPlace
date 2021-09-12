/*可变数组
1. Think about a set of funcations that provide a mechanism of resizable array
of int.
2. Growable
3. Get the current size
4. Access to the elements

The Interface
1. Array array_create(int init_size);
2. void array_free(Array *a);
3. int array_siza(const Array *a);
4. int* array_at(Array *a, int index);
5. void arry_inflate(Array *a, int more_size); =>长大
*/
#include "array.h"
#include <stdio.h>
#include <stdlib.h>
Array array_create(int init_size) {
    Array a;
    a.size = init_size;
    a.array = (int *)malloc(sizeof(int) * init_size);
    return a;
}

void array_free(Array *a) {
    free(a->array);
    a->array = NULL;
    a->size = 0;
}

//封装
int array_size(const Array *a) { return a->size; }

int *array_at(Array *a, int index) { return &(a->array[index]); }

void arry_inflate(Array *a, int more_size) {
    int *p = (int *)malloc(sizeof((int)(a->size + more_size)));
    int i;
    for (i = 0; i < a->size; i++) {
        p[i] = a->array[i];
    }
    free(a->array);
    a->array = p;
    a->size += more_size;
}

int main(int argc, char const *argv[]) {
    Array a = array_create(100);
    printf("%d\n", array_size(&a));
    *array_at(&a, 0) = 10;
    printf("%d\n", *array_at(&a, 0));
    array_free(&a);
    return 0;
}