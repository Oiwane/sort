#include <stdio.h>
#include "function.h"

void InsertionSort(int a[], int size){

    for(int i = 0; i < size; i++){
        int tmp = a[i];

        int j;
        for(j = i; j > 0; j--){
            if(tmp < a[j-1]) a[j] = a[j-1];
            else break;
        }
        a[j] = tmp;
    }
}

int main(void)
{
    int a[] = {3,1,4,7,2,6,9,5,8};
    int n = sizeof(a)/sizeof(a[0]);

    //挿入ソート
    InsertionSort(a, n);
    //結果表示
    print_array(a, n);

    return 0;
}