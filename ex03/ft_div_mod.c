/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/12 13:02:42 by averheij       #+#    #+#                */
/*   Updated: 2019/09/13 14:27:24 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*hend */
#include <stdio.h>

/*fstart */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*fend */

int		main(void)
{
	int number;
	int number2;
	int div;
	int mod;

	number = 45;
	number2 = 20;
	printf("%d\n", number);
	printf("%d\n", number2);
	ft_div_mod(number, number2, &div, &mod);
	printf("%d\n", div);
	printf("%d\n", mod);
	return (0);
}
