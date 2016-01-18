/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:06:03 by emihoubi          #+#    #+#             */
/*   Updated: 2015/12/04 17:45:35 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	size_t i;

	str = (char*)malloc(sizeof(((*str) * ft_strlen(s)) + 1));
	i = 0;

	while (i < ft_strlen(s) && s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
