/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 13:53:48 by emihoubi          #+#    #+#             */
/*   Updated: 2015/12/04 14:05:04 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	size_t i;

	str = (char*)malloc(sizeof((*str) * ft_strlen(s)) + 1);
	i = 0;

	while (i < ft_strlen(s) && s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
