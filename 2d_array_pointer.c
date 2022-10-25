// 


#include <stdio.h>
// int array_2d[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {10, 11, 12, 13}};
// typedef int int_4[4];
int main(void)
{
 //    int_4 *p = array_2d;
 //    for (int i = 0; i < 3; i++) {
	// 	for (int j = 0; j < 4; j++)	{
	// 		printf("%d ", p[i][j]);
	// 	}
	// 	printf("\n");
	// }


	int array_2d[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {10, 11, 12, 13}};

	int (*p)[4] = array_2d;
	

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)	{
			printf("%d ", ((*p)[j]+i*j));
		}
		//p++;
		printf("\n");
	}


}