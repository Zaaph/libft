#include "libft.h"

void	ft_putnbr(int n)
{
  char c;

  if (n > 2147483647 || n < -2147483648)
    return ;
  if (n < 0)
    {
      ft_putchar('-');
      if (n == -2147483648)
	{
	  ft_putstr("2147483648");
	  return ;
	}
      n = -n;
    }
  if (n > 9)
    {
      ft_putnbr(n / 10);
      ft_putnbr(n % 10);
    }
  if (n < 10)
    {
      c = n + '0';
      ft_putchar(c);
    }
}
