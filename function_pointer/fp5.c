#include <stdio.h>
#include <stdlib.h>

int compare (const void *a, const void *b)
{
  return ( *(int*)b - *(int*)a );
}


int main(int argc, char *argv[])
{
  int arr[] = {10, 5, 15, 12, 90, 80};
  int n = sizeof(arr)/sizeof(arr[0]), i;

  qsort(arr, n, sizeof(int), compare);

  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  printf("\n");
  
  return 0;
}

