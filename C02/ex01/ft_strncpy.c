/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnjoroge <jnjoroge@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:39:48 by jnjoroge          #+#    #+#             */
/*   Updated: 2023/08/16 20:04:29 by jnjoroge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{	
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char src[] = "Hello World!";

	char dest[15] = {0};

	ft_strncpy(dest, src, 15);

	printf("Copied string: %s\n", dest);

	return 0;

}
*/
