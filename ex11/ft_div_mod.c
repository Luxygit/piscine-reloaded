/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:03:51 by dievarga          #+#    #+#             */
/*   Updated: 2025/09/25 20:16:03 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int	c = 4;
	int	d = 2;
	int	resulte;
	int	resultf;
	
	ft_div_mod(c, d, &resulte, &resultf);
	printf("la division es %d y el reminder es %d\n", resulte, resultf);
}*/
