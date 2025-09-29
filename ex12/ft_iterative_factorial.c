/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 20:14:29 by dievarga          #+#    #+#             */
/*   Updated: 2025/09/29 20:18:25 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
		return (0);
	result = 1;
	i = 1;
	while (i <= nb)
	{
		if (result > INT_MAX / i)
			return (0);
		result = result * i;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d",ft_iterative_factorial(12));
}*/
