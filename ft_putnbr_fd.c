#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
  char c;

  if (n > 2147483647 || n < -2147483648)
    return ;
  if (n < 0)
    {
      ft_putchar_fd('-', fd);
      if (n == -2147483648)
	{
	ft_putstr_fd("2147483648", fd);
	return ;
	}
      n = -n;
    }
  if (n > 9)
    {
      ft_putnbr_fd(n / 10, fd);
      ft_putnbr_fd(n % 10, fd);
    }
  if (n < 10)
    {
      c = n + '0';
      ft_putchar_fd(c, fd);
    }
}
