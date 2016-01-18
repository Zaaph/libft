/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:33:28 by emihoubi          #+#    #+#             */
/*   Updated: 2015/11/30 13:30:42 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (ft_strchr(src, c) != NULL)
		{
			return (&dst[i]);
		}
		((char*)dst)[i] = ((char*)src)[i];
		i++;
	}
	return (NULL);
}
