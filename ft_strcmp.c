/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:36:14 by emihoubi          #+#    #+#             */
/*   Updated: 2015/11/30 13:47:18 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	if (!(s1[i]) || !(s2[i]))
	  return (0);
	while (s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i])
	  return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
