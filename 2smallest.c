#include <stdio.h>
int main()
{
  int n, i, small,next;
  printf("Enter the value : \n");
  scanf("%d", &n);
  if (n < 2)
  {
    printf("Invalid Input");
    return 0;
  }
int arr[n];
  printf("Enter the distance : ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < n; i++)
  {
    if (arr[i] < small)
