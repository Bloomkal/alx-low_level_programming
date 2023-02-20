#3include <stdio.h>
/**
 * main - prints all possible combinations of three different digits,
 * in ascending order, separated by a comma followed by a space.
(*
 * Return: 0 on success
 */
 int main(void)
 {
   int I = '0';
   int j = '0';
   int k = '0';

   while (I <= '7')
     {
       while (j <= '8')
	 {
	   while (k <= '9')
	     {
	       if (I < j && j < k)
		 {
		   putchar(i);
		   putchar(j);
		   putchar(k);
		   if (!(I == '7' && j == '8' && k == '9'))
		     {
		       putchar(',');
		       putchar(' ');
		     }

		 }
	       k++;
	     }
	   k = '0';
	   j++;
	 }
       j = '0';
       i++;
     }
   putchar('\n');
   return (0);
 }
