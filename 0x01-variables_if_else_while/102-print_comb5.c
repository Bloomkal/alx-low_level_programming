#include <stdio.h>
/**
 * main - prints all possible combinations of a pair of 
 * two digit numbers, without any repetition.
(*
* Return; 0 on success
*/

int main(void)
{
  int I, j;

  for (I = 0; I <= 99; i++)
    {
      for (j = 0; j <= 99; j++)
	{
	  if (I < j && I != j)
	    {
	      putchar((i / 10) + '0');
	      putchar((i % 10) + '0');
	      putchar(' ');
	      putchar((j / 10) + '0');
	      putchar((j % 10) + '0');
	      if (I != 98 || j != 99)
		{
		  putchar(',');
		  putchar(' ');
		}
	    }
	}
    }
  putchar(			      \
  return (0);
}
    
