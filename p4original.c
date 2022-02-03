#include <stdio.h>

int input_array_size()
{
  int a;
  printf("Enter a value: \n");
  scanf("%d",&a);
  return a;
}

void input_array(int n, int a[n])
{
  printf("Enter your values: \n");
  for(int i=0; i<n; i++)
   scanf("%d",&a[i]);
}

int sum_n_arrays(int n, int a[n])
{
  int sum = 0;
  for(int i = 0; i < n; i++)
   sum += a[i];
  return sum;
}

void out_put(int sum)
{
  printf("%d\n",sum);
}

int main()
{
  int n;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  int sum = sum_n_arrays(n,a);
  out_put(sum);
  return 0;
}