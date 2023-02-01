/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_random.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:58:38 by jlanza            #+#    #+#             */
/*   Updated: 2023/02/01 19:33:27 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static const int rng = {1 , 2, 3}

int	get_random(void)
{
	static int	n = 0;
	const int	t[] = {93, 48, 87, 90, 53, 79, 25, 92, 74, 92, 61, 37,
		87, 78, 32, 46, 91, 74, 40, 26, 82, 78, 49, 3, 35, 94, 96, 83, 81, 38,
		12, 16, 81, 86, 8, 42, 24, 28, 28, 77, 16, 95, 64, 94, 79, 10, 85, 54,
		63, 88, 81, 12, 91, 17, 58, 40, 52, 39, 30, 41, 51, 46, 22, 90, 55, 16,
		35, 97, 43, 51, 44, 7, 45, 24, 70, 82, 30, 73, 45, 18, 54, 9, 62, 23,
		54, 76, 59, 84, 17, 63, 83, 91, 5, 90, 59, 71, 25, 56, 66, 76, 1, 25,
		77, 95, 55, 7, 68, 52, 77, 75, 61, 91, 98, 81, 97, 26, 41, 34, 95, 56,
		38, 61, 59, 98, 84, 84, 54, 50, 12, 7, 75, 85, 36, 23, 92, 43, 43, 44,
		18, 5, 16, 69, 87, 14, 47, 80, 0, 95, 88, 17, 33, 49, 76, 31, 85, 12,
		87, 24, 97, 14, 61, 34, 37, 53, 29, 81, 97, 2, 51, 54, 71, 20, 41, 37,
		73, 37, 63, 61, 54, 48, 62, 82, 32, 47, 46, 70, 34, 70, 19, 49, 83, 53,
		36, 83, 19, 33, 37, 71, 87, 60, 43, 81, 97, 63, 6, 34, 78, 68, 40, 27,
		91, 9, 66, 81, 50, 96, 10, 82, 72, 57, 2, 6, 82, 50, 27, 53, 61, 16, 3,
		27, 32, 64, 37, 87, 22, 71, 37, 50, 76, 50, 18, 80, 64, 0, 44, 41, 4,
		93, 89, 28, 33, 66, 12, 33, 61, 30, 36, 53, 9, 20, 70, 98, 7, 92, 70,
		21, 47, 24, 42, 17, 22, 1, 62, 44, 50, 56, 43, 48, 21, 21, 63, 86, 96,
		69, 10, 74, 84, 82, 74, 64, 67, 12, 58, 81, 85, 6, 5, 27, 23, 80, 81,
		83, 94, 67, 83, 67, 89, 98, 5, 85, 17, 12, 6, 80, 39, 90, 62, 65, 7, 29,
		65, 63, 63, 71, 68, 42, 47, 0, 75, 84, 25, 58, 78, 44, 94, 97, 33, 92,
		10, 67, 29, 42, 6, 71, 56, 71, 78, 38, 1, 96, 1, 64, 19, 21, 58, 66};

	if (n++ > sizeof(t))
		n = 0;
	return (t[n]);
}