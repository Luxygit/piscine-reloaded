/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 12:22:38 by dievarga          #+#    #+#             */
/*   Updated: 2025/09/25 14:33:59 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>
int	main(void)
{
	int	first;
	int	second;

	first = 1;
	second = 2;
	printf("first was %d and second was %d\n", first, second);
	ft_swap(&first, &second);
	printf("first is now %d and second is now %d\n", first, second);
	return (0);
}
