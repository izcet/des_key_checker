/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 12:27:09 by irhett            #+#    #+#             */
/*   Updated: 2017/09/25 12:54:34 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"

void		check_left_rotate(char *key, char *last, int offset)
{
	int		i;

	printf("%s\n", last);
	printf("%s\n", key);
	i = 0;
	while (i < 28)
	{
		if (key[i] != last[(i + offset) % 28])
			printf("key[%i] != last[%i]\n", i, (i + offset) % 28);
		i++;
	}
	while (i < 56)
	{
		if (key[i] != last[((i + offset) % 28) + 28])
			printf("key[%i] != last[%i]\n", i, ((i + offset) % 28) + 28);
		i++;
	}
	printf("CHECKED\n");
}

void		check_right_rotate(char *key, char *last, int offset)
{
	int		i;

	i = 0;
	while (i < 28)
	{
		if (key[i] != last[(28 + i - offset) % 28])
			printf("key[%i] != last[%i]\n", i, (28 + i - offset) % 28);
		i++;
	}
	while (i < 56)
	{
		if (key[i] != last[((28 + i - offset) % 28) + 28])
			printf("key[%i] != last[%i\n", i, ((28 + i - offset) % 28) + 28);
		i++;
	}
	printf("CHECKED\n");
}
