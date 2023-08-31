/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnjoroge <jnjoroge@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:23:11 by jnjoroge          #+#    #+#             */
/*   Updated: 2023/08/31 01:03:41 by jnjoroge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	j = 0;
	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		k;

	s = malloc(sizeof(strs));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[k++] = sep[j++];
		}
		i++;
	}
	s[k] = '\0';
	return (s);
}

#include <stdio.h>
int	main(void)
{
	char strs[][20] = { "stssring1", "strsaing2", "striadasdng3", "strasda" };
	char *sep = "_sep_";
	int	size = 4;
	char *strs_ptr[size];
	int	i = 0;
	while (i < size)
	{
		strs_ptr[i] = strs[i];
		++i;
	}
	printf("%s", ft_strjoin(size, strs_ptr, sep));
	return (0);
}