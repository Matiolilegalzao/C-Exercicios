#include <stdio.h>

int main()
{
	double m[3][3] = {{1,2,3},{},{7,8,9}};
	int i, j;
	
	for(i = 0; i<3;i++)
	{
		printf("\n");
		for(j = 0; j<3;j++)
		{
			printf("%.1lf ", m[i][j]);
		}
	}
}
