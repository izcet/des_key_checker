/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 11:48:27 by irhett            #+#    #+#             */
/*   Updated: 2017/09/25 12:57:13 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"

int		main(int argc, char **argv)
{
	int		i;
	int		table[16] = {0, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1};

	i = 2;
	while (i < 18)
	{
		printf("CHECKING %i (offset %i)\n", i - 1, table[i - 2]);
		check_right_rotate(argv[i], argv[i - 1], table[i - 2]);
		i++;
	}
	//check_initial_permutation(argv[1], argv[2]);
	(void)argc;
	return (0);
}
