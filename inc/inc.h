/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inc.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 11:25:37 by irhett            #+#    #+#             */
/*   Updated: 2017/09/25 11:42:27 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DES_KEY_CHECKER_H
# define DES_KEY_CHECKER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

static unsigned int		keyperm[56] = {	
	57,	49,	41,	33,	25,	17,	9,	1,	
	58,	50,	42,	34,	26,	18,	10,	2,	
	59,	51,	43,	35,	27,	19,	11,	3,	
	60,	52,	44,	36,	63,	55,	47,	39,
	31,	23,	15,	7,	62,	54,	46,	38,
	30,	22,	14,	6,	61,	53,	45,	37,
	29,	21,	13,	5,	28,	20,	12,	4};

static unsigned int		keycomp[48] = {
	14,	17,	11,	24,	1,	5,	3,	28,
	15,	6,	21,	10,	23,	19,	12,	4,
	26,	8,	16,	7,	27,	20,	13,	2,
	41,	52,	31,	37,	47,	55,	30,	40,
	51,	45,	33,	48,	44,	49,	39,	56,
	34,	53,	46,	42,	50,	36,	29,	32};

void					check_left_rotate_1(char *subkey);
void					check_right_rotate_1(char *subkey);
void					check_left_rotate_2(char *subkey);
void					check_right_rotate_2(char *subkey);

void					check_initial_permutation(char *fullkey, char *comp);
void					check_compression_permutation(char *key, char *subkey);


#endif
