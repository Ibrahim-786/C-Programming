#include <stdio.h>
#include <stdlib.h>



int main(int argc, char* argv[])
{       

        int arr[5]= {1,2,3,5,6};

        for(int i=0;i<5;i++)
        {
                printf("address %p value %d\n",&arr[i],arr[i]);
                printf("address %p value %d\n",(arr+i),*(arr+i));
                
        }

        printf("\n\n");
        int *ptr_1;

        ptr_1 = &arr[0];

        printf("sizeof interger pointer :%lu\n",sizeof(ptr_1));

        for(int i=0;i<5;i++)
        {
                printf("address %p value %d\n",(ptr_1+i),ptr_1[i]);
                printf("address %p value %d\n",(ptr_1+i),*(ptr_1+i));

        }

        for(int i=0;i<5;i++)
        {
                printf("address %p value %d\n",ptr_1,*ptr_1);

                ++ptr_1;
        }

          
        return 0;
        
} 