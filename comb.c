#include <stdio.h>
#include "function.h"

void CombSort(int a[], int size){
    int gap = size;

    while(1){
        int is_swap = 0;

        //gapを1/1.3倍
        gap = (gap * 10) / 13;
        if(gap == 0) gap = 1;

        //バブルソートに似た処理
        for(int i = 0; i + gap < size; i++){
            if(a[i] > a[i + gap]){
                swap(a + i, a + i + gap);
                is_swap = 1;
            }
        }
        if(gap == 1 && !is_swap) break;
    }
}

int main(void)
{
    int a[] = {3,1,4,7,2,6,9,5,8};
    int n = sizeof(a)/sizeof(a[0]);

    //コムソート
    CombSort(a, n);
    //結果表示
    print_array(a, n);

    return 0;
}