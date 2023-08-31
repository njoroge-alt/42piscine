/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnjoroge <jnjoroge@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:43:01 by jnjoroge          #+#    #+#             */
/*   Updated: 2023/08/26 17:54:56 by jnjoroge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	j = 0;
	while (src[j] != 0 && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include<stdio.h>
int main()
{
	char dest[] = "A little";
	char src[] = "Too late";
	
    char *new = ft_strncat(dest, src,16);
	printf("%s\n", new);
	return 0;
}
*/
