/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 02:14:52 by dievarga          #+#    #+#             */
/*   Updated: 2025/09/25 02:22:49 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
	{
		write(1, &c, 1);
	}

void	ft_print_numbers(void)
	{
		int	i;

		i = '0';
		while(i <= '9')
		{
			ft_putchar(i);
			i++;
		}
	}
/*
int	main(void)
	{
		ft_print_numbers();
		return (0);
	}
*/
