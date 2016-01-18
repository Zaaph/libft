/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:20:08 by emihoubi          #+#    #+#             */
/*   Updated: 2015/12/04 17:47:22 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int      nwords(char const *str, char c)
{
  int i;
  int count;

  i = 0;
  count = 0;
  while (str[i])
    {
      while (str[i] == c)
	i++;
      while (str[i] != c)
	{
	  i++;
	  if (str[i] == c)
	    count++;
	}
    }
  return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	char **tab;
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	if(!(tab = (char**)malloc(sizeof(**tab)*ft_strlen(s)+nwords(s, c))))
	     return (NULL);
	while (s[i])
	  {
	    k = 0;
	    if (s[i] == c)
	      i++;
	    while (s[i] != c)
	      {
		tab[j][k] = s[i];
		k++;
	      }
	    j++;
	  }
	return (tab);
}
