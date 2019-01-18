#include <stdio.h>
#include "function.h"
#define N 16

void MergeSort(int array[], int start, int end)
{
  int tmp[N] = {0};
  int i, j, middle, k;
  
  //ソートの範囲が1なら意味がないのでreturn
  if(end - start == 1){
    return;
  }
  
  //中央の値を基準にする
  middle = (start + end) / 2;
  
  //再帰
  MergeSort(array, start, middle);
  MergeSort(array, middle, end);
  
  //前から見て昇順に格納
  for(i = 0; i < middle; i++){
    tmp[i] = array[i];
  }
  //後ろから見て昇順に格納
  for(i = middle,j = end - 1; i < end; i++,j--){
    tmp[i] = array[j];
  }
  
  j = start;
  k = end - 1;

  //jは前からの、kは後ろからの索引
  for(i = start; i < end; i++){
    if(tmp[j] < tmp[k]){
      array[i] = tmp[j++];
    }else{
      array[i] = tmp[k--];
    }
  }
  
  return;
}

int main(void)
{
 int a[] = {3,1,4,7,2,6,9,5,8};
 int n = sizeof(a)/sizeof(a[0]);
 
 //マージソート
 MergeSort(a, 0, n);
 //結果表示
 print_array(a, n);
 
 return 0;
}
