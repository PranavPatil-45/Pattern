#include <stdio.h>

void main() 
{
    int i, j, k = 5; 

    for (i = 1; i <= k; i++) 
	{
        for (j = 1; j <= k - i + 1; j++) 
		{
            if (j%2==0) 
			{
                printf("1 ");
            } 
			else
			{
                printf("0 ");
            }
        
        }
        printf("\n");
    }

   
}

