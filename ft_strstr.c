/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:58:22 by emihoubi          #+#    #+#             */
/*   Updated: 2015/11/30 14:00:14 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;
	char *ss1;
	char *ss2;

	i = 0;
	j = 0;
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	if (ss2[j] == '\0')
		return (ss1);
	while (ss1[i])
	{
		if (ss1[i] != ss2[j])
			i++;
		while (ss2[j] == ss1[i] && ss2[j] && ss1[i])
		{
			i++;
			j++;
			if (ss2[j] == '\0')
				return (&ss1[i - ft_strlen(ss2)]);
		}
		j = 0;
	}
	return (NULL);
}
