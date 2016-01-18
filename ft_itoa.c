/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:51:16 by emihoubi          #+#    #+#             */
/*   Updated: 2015/12/04 17:47:47 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_cnumbers(int n)
{
	int c;

	c = 2;
	if (n < 0)
		c++;
	while (n > 9)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char 	*str;
	int 	i;

	i = 0;
	if (!(str = (char*)malloc((sizeof(*str) * ft_cnumbers(n)) + 1)))
		return (NULL);
	if (n < 0)
	{
		if (n == -2147483648)
		{
			str = "-2147483648";
			return (str);
		}
		str[i] = '-';
		i++;
		n = -n;
	}
	if (n > 9)
	{
		ft_itoa(n / 10);
		ft_itoa(n % 10);
	}
	if (n < 10)
	{
		str[i] = n + '0';
		i++;
	}
	return (str);
}
