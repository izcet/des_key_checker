/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_initial_permutation.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 11:44:06 by irhett            #+#    #+#             */
/*   Updated: 2017/09/25 11:47:50 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"

void		check_initial_permutation(char *full, char *compressed)
{
	int		i;

	i = 0;
	while (i < 56)
	{
		if (compressed[i] != full[keyperm[i] - 1])
			printf("ERROR: key[%i] (full[%i])\n", i, keyperm[i]);
		i++;
	}
	printf("DONE\n");
}
