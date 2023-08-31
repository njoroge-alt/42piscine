/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnjoroge <jnjoroge@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:21:46 by jnjoroge          #+#    #+#             */
/*   Updated: 2023/08/16 19:56:08 by jnjoroge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<unistd.h>
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
		dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char src[] = "Hello World!";

	char dest[] = {0};

	ft_strcpy(dest, src);

	printf("Copired string: %s\n", dest);

	return 0;
		
}
*/
