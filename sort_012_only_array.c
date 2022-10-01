#include <stdio.h>
void swap(int *x, int *y) 
{
  int temp = *x;
  *x = *y;
  *y = temp;
}
void sorting012Array(int a[], int n) {
  int i = 0, j = 0, k = n - 1;
  while (j <= k) {
    if (a[j] == 0) {
      swap( &a[j], &a[i]);
      i++;
      j++;
    } else if (a[j] == 1)
      j++;
    else if (a[j] == 2) {
      swap( &a[j], &a[k]);
      k--;
    }
  }
}

int main() {
  int arr[] = {1, 1, 0, 2, 0, 1, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  sorting012Array(arr, n);
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  return 0;
}