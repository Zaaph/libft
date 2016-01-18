/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:19:33 by emihoubi          #+#    #+#             */
/*   Updated: 2015/12/04 17:47:04 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
  char *str;
  size_t i;
  int j;
  size_t k;

  i = 0;
  j = 0;
  k = ft_strlen(s);
  if (!(str = (char*)malloc(sizeof((*str) * ft_strlen(s)) + 1)))
    return (NULL);
  while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')      
    i++;
  while (s[k] == ' ' || s[k] == '\t' || s[i] == '\n')
    k--;
  while (i <= k)
    {
      str[j] = s[i];
      i++;
      j++;
    }
  return (str);
}
