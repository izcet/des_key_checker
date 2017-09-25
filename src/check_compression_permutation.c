/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_compression_permutation.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 13:05:02 by irhett            #+#    #+#             */
/*   Updated: 2017/09/25 13:07:27 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"

void		check_compression_permutation(char *key, char *subkey)
{
	int		i;

	i = 0;
	while (i < 48)
	{
		if (subkey[i] != key[keycomp[i] - 1])
			printf("ERROR: subkey[%i] (key[%i]\n", i, keyperm[i]);
		i++;
	}
	printf("DONE");

}
