/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/12 13:10:19 by averheij       #+#    #+#                */
/*   Updated: 2019/09/13 10:14:21 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*hend */

#include <unistd.h>

/*protome */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*fstart */
void	ft_putstr(char *str)
{
	int count;
	int length;

	count = 0;
	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	while (count < length)
	{
		ft_putchar(str[count]);
		count = count + 1;
	}
}
/*fend */

int		main(void)
{
	ft_putstr("hellomate");
	return (0);
}
