/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 01:31:09 by dievarga          #+#    #+#             */
/*   Updated: 2025/09/25 02:11:25 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
	{
		write(1, &c, 1);
	}

void	ft_print_alphabet(void)
	{
		int	i;

		i = 'a';
		while(i <= 'z')
			{
				ft_putchar(i);
				i++;
			}
	}
	
/*
int	main(void)
	{
		ft_print_alphabet();
		return (0);
	}
*/
