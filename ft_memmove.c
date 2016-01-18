/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:34:22 by emihoubi          #+#    #+#             */
/*   Updated: 2015/11/30 13:40:28 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst2;
	char	*src2;
	char *ptr;

	ptr = (char *)src;
	src2 = (char *)malloc(sizeof(char) * len + 1);
	dst2 = dst;
	i = 0;
	
	while (i < len)
	  {
	    src2[i] = ptr[i];
	    i++;
	  }
	i = 0;
	while (i < len)
	  {
	    dst2[i] = src2[i];
	    i++;
	  }
	//	src2[i] = '\0';
	return (dst);	
	/*	i = 0;
	src2 = (char *)src;
	dst2 = (char *)dst;
	while (i < len)
	{
	  dst2[i] = src2[i];
	  i++;
	}
	return (dst);*/
}
