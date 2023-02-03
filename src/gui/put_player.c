/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_player.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 00:29:00 by jlanza            #+#    #+#             */
/*   Updated: 2023/02/04 00:29:25 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	put_player(t_data *d, t_coord coord, t_sprite p, int frame)
{
	if (d->way.up != d->way.down || d->way.right != d->way.left)
	{
		if (frame < MINI_LOOP / 4)
			put_img_to_tmp(d, &(p.run_0), coord.x, coord.y);
		else if (frame < MINI_LOOP / 2)
			put_img_to_tmp(d, &(p.run_1), coord.x, coord.y);
		else if (frame < MINI_LOOP * 3 / 4)
			put_img_to_tmp(d, &(p.run_2), coord.x, coord.y);
		else
			put_img_to_tmp(d, &(p.run_3), coord.x, coord.y);
	}
	else
	{
		if (d->long_frame < LONG_LOOP / 4)
			put_img_to_tmp(d, &(p.idle_0), coord.x, coord.y);
		else if (d->long_frame < LONG_LOOP / 2)
			put_img_to_tmp(d, &(p.idle_1), coord.x, coord.y);
		else if (d->long_frame < LONG_LOOP * 3 / 4)
			put_img_to_tmp(d, &(p.idle_2), coord.x, coord.y);
		else
			put_img_to_tmp(d, &(p.idle_3), coord.x, coord.y);
	}
}
