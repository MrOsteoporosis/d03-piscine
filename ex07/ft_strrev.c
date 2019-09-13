/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/12 13:50:28 by averheij       #+#    #+#                */
/*   Updated: 2019/09/13 15:58:09 by averheij      ########   odam.nl         */
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
	char	*newstart;

	swap = 'z';
	newstart = &swap + sizeof(char);
	count = 0;
	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	printf("%s", "hi");
	while (count < length)
	{
		*(newstart + count) = str[length - 1 - count];
		count = count + 1;
	}
	str = newstart;
	return (str);
}
/*fend */

int		main(void)
{
	printf("%s", ft_strrev("hellomate"));
	return (0);
}
