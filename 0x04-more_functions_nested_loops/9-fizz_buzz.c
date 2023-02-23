#tdio.h>

/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 3 & 5 multiples print FizzBuzz instead of the number
 * Return: Always 0 (Success)
 */
int main(void)
{
  int I;

  for (I = 1; I <= 100; i++)
    {
      if (I % 3 == 0 && I % 5 != 0)
	{
	  printf ("Fizz");
	}
      else if (I % 5 ==0 && I % 3 != 0)
	{
	  printf("Buzz");
	}
      else if (I % 3 == 0 && I % 5 == 0)
	{
	  (printf("FizzBuzz");
	   }
	  else if (I == 1)
	    {
	      print("%d", I);
	    }
	  else
	    {
	      printf("%d ", i);
	}
	}
	printf("\n");
	return (0);
}
