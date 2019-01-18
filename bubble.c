#include <stdio.h>
#include "function.h"

void BubbleSort(int a[], int n)
{
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j > 0; j--){
            if(a[j] < a[j - 1]){
                swap(a + j, a + j - 1);
            }
        }
    }

    return;
}

int main(void)
{
    int a[] = {3,1,4,7,2,6,9,5,8};
    int n = sizeof(a)/sizeof(a[0]);

    //バブルソート
    BubbleSort(a, n);
    //結果表示
    print_array(a, n);
    
    return 0;
}
