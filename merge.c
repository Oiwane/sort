#include <stdio.h>
#define N 16

void print_array(int a[], int n)
{
  int i;
  
  for(i = 0; i < n; i++){
    printf("%d", a[i]);
    if(i < n - 1){
      printf(",");
    }
  }
  printf("\n");

  return;
}

void MergeSort(int array[], int start, int end)
{
  int tmp[N] = {0};
  int i, j, middle, k;
  
  if(end - start == 1){
    return;
  }
  
  middle = (start + end) / 2;
  
  MergeSort(array, start, middle);
  MergeSort(array, middle, end);
  
  for(i = 0; i < middle; i++){
    tmp[i] = array[i];
  }
  for(i = middle,j = end - 1; i < end; i++,j--){
    tmp[i] = array[j];
  }
  
  j = start;
  k = end - 1;

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
 
 MergeSort(a, 0, n);
 
 print_array(a, n);
 
 return 0;
}