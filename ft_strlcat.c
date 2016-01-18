/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:53:01 by emihoubi          #+#    #+#             */
/*   Updated: 2015/12/04 17:44:46 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;
	size_t j;
	int k;

	i = ft_strlen(dst) + 1;
	j = 0;
	while (j <= size && dst[i])
	{
		if (src[i] == '\0')
			k = 1;
		dst[i] = src[j];
		j++;
		i++;
	}
	if (k == 1)
	  {
	    dst[i] = '\0';
	    return (ft_strlen(dst) + ft_strlen(src));
	  }
	else
	  {
	    dst[i] = '\0';
	    return (size);
	  }
}
