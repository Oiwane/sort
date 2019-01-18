#include <stdio.h>
#include "function.h"

void GnomeSort(int a[], int size){
    int i = 1;

    while(i < size){
        //入れ替えが起これば-1、起こらなかったら+1
        if(a[i-1] <= a[i]){
            i++;
        }else{
            swap(a+i-1, a+i);
            if(i > 1){
                i--;
            }
        }
    }
}

int main(void)
{
    int a[] = {3,1,4,7,2,6,9,5,8};
    int n = sizeof(a)/sizeof(a[0]);

    //ノームソート
    GnomeSort(a, n);
    //結果表示
    print_array(a, n);

    return 0;
}
