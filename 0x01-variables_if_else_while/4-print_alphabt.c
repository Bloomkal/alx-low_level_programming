#include <stdio.h>
/**
 * main - prints the alphabet except the letters q and e.
(*
* Return: 0 on success
*/
int main(void)
{
  char c = 'a';

  while (c <= 'Z')
    {
      if (c != 'q' && c != 'e')
	{
	  putchar(c);
	}
      c++;
    }
  putchar('\n');
  return (0);
}
