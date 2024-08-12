#include<stdio.h>
#include<conio.h>

void main() 
{
    int i, j;
    char ch;

    for (i = 0; i < 5; i++) 
	{ 
        ch = 'A'; 
        for (j = 0; j <= i; j++) 
		{ 
            printf("%c ", ch);
            ch++; 
        }
        printf("\n");
    }

  
}

