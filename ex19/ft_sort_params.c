/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:53:22 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/09 11:05:17 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_str(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	ft_print_args(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		print_str(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	if (argc >= 2)
	{
		while (i < argc - 1)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					aux = argv[i];
					argv[i] = argv[j];
					argv[j] = aux;
				}
				j++;
			}
			i++;
		}
		ft_print_args(argc, argv);
	}
	return (0);
}
