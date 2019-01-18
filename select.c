#include <stdio.h>
#include "function.h"

void SelectSort(int a[], int size){

    for(int i = 0; i < size; i++){
        int index = i;
        for(int j = index + 1; j < size; j++){
            if(a[j] < a[index]){
                //最小値の位置をindexに格納
                index = j;
            }
        }
        swap(a+i, a+index);
    }
}

int main(void){
    int a[] = {3,1,4,7,2,6,9,5,8};
    int n = sizeof(a)/sizeof(a[0]);

    //選択ソート
    SelectSort(a, n);
    //結果表示
    print_array(a, n);

    return 0;
}
