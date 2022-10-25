#include <stdio.h>
#include <stdlib.h>



int main(int argc, char* argv[])
{       
        
        int arr[5]   = {2,4,5,6,7};

        char *name = argv[1];


        printf("number of command line arguments :%d\n",argc);
        printf("argv[0] : %s\n",argv[0]);
        printf("argv[1] : %d\n",atoi(name));
     


        for(int i=0;i<5;i++){
                printf("%d ",arr[i]);
        }

        
        
        
        
        return 0;
        
} 