/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 11:48:27 by irhett            #+#    #+#             */
/*   Updated: 2017/09/25 15:24:57 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"

int		main(int argc, char **argv)
{
	check_initial_permutation(argv[1], argv[2]);
//	check_compression_permutation(argv[1], argv[2]);
	(void)argc;
	return (0);
}
