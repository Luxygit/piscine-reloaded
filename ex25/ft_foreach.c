/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 14:49:42 by dievarga          #+#    #+#             */
/*   Updated: 2025/09/29 17:43:32 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
#include <stdio.h>
void    print_square(int n)
{
    printf("Square of %d is %d\n", n, n * n);
}

#include <stdlib.h>
int	main(int argc, char* argv[])
{
	int	i;
	int	len;
	int	arr[100];

	i = 0;
	len = argc - 1;                 // number of ints passed
    while (i < len)
    {
        arr[i] = atoi(argv[i + 1]); // convert each argument to int
        i++;
    }

    printf("Applying function to each number:\n");
    ft_foreach(arr, len, print_square);
}
*/
