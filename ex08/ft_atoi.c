/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/12 14:07:11 by averheij       #+#    #+#                */
/*   Updated: 2019/09/13 11:26:21 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*hend */

/*fstart */
int		ft_atoi(char *str)
{
	int converted;
	int length;
	int factor;
	int temp;

	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	factor = 1;
	temp = 0;
	while (temp < length)
	{
		factor = factor * 10;
		temp = temp + 1;
	}
	while (temp > -1)
	{
		converted = converted + ((str[length - temp] - '0') * factor);
		factor = factor / 10;
		temp = temp - 1;
	}
	return (converted);
}
/*fend */

int		main(void)
{
	ft_putstr("hellomate");
	return (0);
}
