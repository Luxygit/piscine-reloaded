/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 20:27:41 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/09 10:30:40 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H

# define FT_ABS_H

# define ABS(Value) ((Value) < 0 ? -(Value) : (Value))

#endif

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char* argv[])
{
	int	x;

	x = atoi(argv[1]);
	if (argc == 2)
	{
		printf("el absoluto de %d es %d\n", atoi(argv[1]), ABS(atoi(argv[1])));
		return (0);
	}
}*/
