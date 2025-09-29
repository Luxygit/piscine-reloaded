/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 12:41:01 by dievarga          #+#    #+#             */
/*   Updated: 2025/09/26 14:18:22 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 13)
		return (0);
	else if (nb == 0)
		result = 1;
	else
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char* argv[])
{
	if (argc == 2)
		printf("the result is %d\n", ft_recursive_factorial(atoi(argv[1])));
}
*/
