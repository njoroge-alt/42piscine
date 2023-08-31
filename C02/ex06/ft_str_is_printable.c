/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnjoroge <jnjoroge@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:41:00 by jnjoroge          #+#    #+#             */
/*   Updated: 2023/08/17 12:59:26 by jnjoroge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
		if (str[i] >= 32 && str[i] <= 126)
			i++;
	else
		return (0);
	return (1);
}
/*
int	main()
{
	char src[] = "15454644h64";

	 int a = ft_str_is_printable(src);
	

	printf("%d\n", a );
	return 0;

}
*/
