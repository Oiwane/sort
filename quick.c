#include <stdio.h>
#include "function.h"

#define N 16

void QuickSort(int a[], int n)
{
  int b1[N] = {0};
  int b2[N] = {0};
  int n1 = 0, n2 = 0;
  int i, pivot;
  
  //nが1だったら分割できないのでreturn
  if(n == 1){
    return;
  }
  
  //分割基準となる数を決定
  if(a[0] > a[1]){
    pivot = a[0];
  }else{
    pivot = a[1];
  }

  //pivotの値で仕分け
  for(i = 0; i < n; i++){
    if(a[i] < pivot){
      b1[n1] = a[i];
      n1++;
    }else{
      b2[n2] = a[i];
      n2++;
    }
  }
  
  //再帰
  QuickSort(b1, n1);
  QuickSort(b2, n2);
  
  //b1の値がb2の値よりも小さいので先にaへ入れる
  for(i = 0; i < n1; i++){
    a[i] = b1[i];
  }
  for(i = 0; i < n2; i++){
    a[n1 + i] = b2[i];
  }
  
  return;
}

int main(void)
{
  int a[] = {3,1,4,7,2,6,9,5,8};
  int n = sizeof(a)/sizeof(a[0]);
  
  //クイックソート
  QuickSort(a, n);
  //結果表示
  print_array(a, n);
  
  return 0;
}
