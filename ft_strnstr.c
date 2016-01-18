/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 17:19:54 by emihoubi          #+#    #+#             */
/*   Updated: 2015/12/02 18:49:14 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static void	ft_condition(char *ss1, char *ss2, size_t k)
{
	if (*ss1 != *ss2)
	{
		ss1++;
		k++;
	}
}

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	k;
	char	*ss1;
	char	*ss2;

	k = 0;
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	if (*ss2 == '\0')
		return (ss1);
	while (*ss1 && k < n)
	{
		ft_condition(ss1, ss2, k);
		while (*ss2 == *ss1 && *ss2 && *ss1 && k < n)
		{
			ss1++;
			ss2++;
			k++;
			if (*ss2 == '\0')
				return (ss1 - ft_strlen(s2));
		}
		ss2 = (char *)s2;
	}
	return (NULL);
}
