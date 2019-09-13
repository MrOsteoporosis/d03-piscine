/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/12 13:50:28 by averheij       #+#    #+#                */
/*   Updated: 2019/09/12 14:05:34 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int count;
	int length;
	char swap;

	count = 0;
	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	while (count < (((length - 1) / 2) + 1))
	{
		swap = str[count];
		str[count] = str[length - 1 - count];
		str[length - 1 - count] = swap;
		count = count + 1;
	}
	return (str);
}

int		main(void)
{
	ft_putstr("hellomate");
	return (0);
}
