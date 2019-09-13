/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/12 13:05:26 by averheij       #+#    #+#                */
/*   Updated: 2019/09/13 14:28:17 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*hend */
#include <stdio.h>

/*fstart */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*fend */

int		main(void)
{
	int number;
	int number2;

	number = 45;
	number2 = 20;
	printf("%d\n", number);
	printf("%d\n", number2);
	ft_ultimate_div_mod(&number, &number2);
	printf("%d\n", number);
	printf("%d\n", number2);
	return (0);
}
