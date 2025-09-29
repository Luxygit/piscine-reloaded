/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 14:19:22 by dievarga          #+#    #+#             */
/*   Updated: 2025/09/29 20:18:57 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	guess;

	if (nb < 0)
		return (0);
	guess = 1;
	while (guess * guess <= nb)
	{
		if (guess * guess == nb)
			return (guess);
		guess++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char* argv[])
{
	if (argc == 2)
		printf("sqr root of %d is %d\n", atoi(argv[1]), ft_sqrt(atoi(argv[1])));
}
*/
