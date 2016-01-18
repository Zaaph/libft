/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:08:55 by emihoubi          #+#    #+#             */
/*   Updated: 2015/12/07 13:10:44 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	  {
		if (s1[i] == s2[i])
		  i++;
		if (s1[i] != s2[i])
		  break ;
	  }
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main()
{
  printf("%d\n", ft_strncmp("abc", "abcde", 3));
  printf("%d", strncmp("abc", "abcde", 3));
}*/
