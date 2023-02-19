#iinclude <stdio.h>
/**
 * main - prints all possible combinations of single digit numbers.
(*
* Return: 0 on success
*/
int main(void)
{
  int I = '0';

  while (I <= '9')
    {
      putchar(i);
      if (I != '9')
	{
	  putchar(',');
	  putchar(' ');
	}
      ++I;
    }
  putchar(
