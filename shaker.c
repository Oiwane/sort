#include <stdio.h>
#include "function.h"

void ShakerSort(int a[], int size){
    int left = 0;
    int right = size - 1;
    int tmp, shift;

    while(left < right){
        //左から右にソート
        for(int i = left; i < right; i++){
            if(a[i] > a[i+1]){
                swap(a+i, a+i+1);
                //変化のなかった右部分を無視するため
                shift = i;
            }
        }
        right = shift;

        //右から左にソート
        for(int i = right; i > left; i--){
            if(a[i] < a[i-1]){
                swap(a+i, a+i-1);
                //変化のなかった左部分を無視するため
                shift = i;
            }
        }
        left = shift;
    }
}

int main(void)
{
    int a[] = {3,1,4,7,2,6,9,5,8};
    int n = sizeof(a)/sizeof(a[0]);

    //シェーカーソート
    ShakerSort(a, n);
    //結果表示
    print_array(a, n);

    return 0;
}
