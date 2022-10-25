#include <stdio.h>
#include <stdlib.h>



int main(int argc, char* argv[])
{  

	int array_2d[3][4] = {{1,2,3,4},{5,6,7,8},{10,11,12,13}};

	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("address %p data is %d ",&array_2d[i][j], array_2d[i][j]);
		}
		printf("\n");
	}

	// for(int i=0;i<3;i++){
	// 	for(int j=0;j<4;j++){
	// 		array_2d[i][j]= 0;
	// 	}
	// }

	// for(int i=0;i<3;i++){
	// 	for(int j=0;j<4;j++){
	// 		printf("address %p data is %d ",&array_2d[i][j], array_2d[i][j]);
	// 	}
	// 	printf("\n");
	// }

	printf("*******printing array diffrent way***********\n");



	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("address %p data is %d ",(array_2d[i]+j), *(array_2d[i]+j));
		}
		printf("\n");
	}


	int *ptr_single;

	int x= 10;
	ptr_single = &x;

	

	printf(" address of x: %p and value %d\n",&x,x);

	printf("address of *ptr_single %p \n",&ptr_single);

	printf("value in ptr_single %p \n",ptr_single);

	printf("value @ ptr_single %d \n",*ptr_single);

	int **ptr_double;
	ptr_double = &ptr_single;

	printf("address of ptr_double %p \n",&ptr_double);

	printf("value in ptr_double %p \n",ptr_double);

	printf("value @ *ptr_double %p \n",*ptr_double);

	printf("value of x using double pointer %d \n",**ptr_double);


	return 0;
        
} 