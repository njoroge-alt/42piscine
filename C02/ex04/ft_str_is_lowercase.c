/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str-is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnjoroge <jnjoroge@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:32:43 by jnjoroge          #+#    #+#             */
/*   Updated: 2023/08/17 12:49:46 by jnjoroge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
	else
		return (0);
	return (1);
}
/*
int	main()
{
	char src[] = "LJGDGDUG";

	 int a = ft_str_is_lowercase(src);

	

	printf("%d\n", a );
	return 0;

}
*/
