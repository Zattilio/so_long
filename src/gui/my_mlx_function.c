/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_function.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:47:16 by jlanza            #+#    #+#             */
/*   Updated: 2023/02/04 19:13:31 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	square_put_tmp(t_data *data, int x, int y, int color)
{
	int	i;
	int	j;

	i = 0;
	while (i < 28)
	{
		j = 0;
		while (j < 28)
		{
			pixel_put_tmp_layer(data, x + j, y + i, color);
			j++;
		}
		i++;
	}
}
