#include <stdio.h>
#include <stdlib.h>

int test(int **arr, int r, int c)
{
	int i, j;
	for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         printf("%d ", arr[i][j]);
	return 1;
}

int main()
{
	int r = 3, c = 4, i, j, count;
	int **arr = (int **)malloc(r * sizeof(int *));
	for (i = 0; i < r; i++)
	{
		arr[i] = (int *)malloc(c * sizeof(int)); 
	}

	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			arr[i][j] = ++count;
		}
	}

	test(arr, r, c);
	return 0;
}