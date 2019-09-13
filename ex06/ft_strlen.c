/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/12 13:46:14 by averheij       #+#    #+#                */
/*   Updated: 2019/09/13 14:45:30 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*hend */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*fstart */
int	ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	return (length);
}
/*fend */

int	main(void)
{
	char *name;

	name = malloc(sizeof(char) * 6);
	memcpy(name, "david", sizeof("david"));
	printf("%d\n", ft_strlen(name));
	return (0);
}
