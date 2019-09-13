/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/12 13:50:28 by averheij       #+#    #+#                */
/*   Updated: 2019/09/13 16:43:36 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*hend */
#include <stdio.h>

/*fstart */

char	*ft_strrev(char *str)
{
	int		count;
	int		length;
	char	swap;

	count = 0;
	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	while (count < (length / 2))
	{
		swap = str[count];
		str[count] = str[length - 1 - count];
		str[length - 1 - count] = swap;
		count = count + 1;
	}
	return (str);
}
/*fend */

int		main(void)
{
	char test[] = "test";
	printf("%s", ft_strrev(test));
	return (0);
}
