/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:11:28 by jlanza            #+#    #+#             */
/*   Updated: 2023/01/25 02:25:10 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	get_number_of_lines(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

char	**dup_map(char **map)
{
	char	**map_copy;
	int		i;

	map_copy = ft_calloc(get_number_of_lines(map) + 1, sizeof(*map));
	i = 0;
	while (map[i])
	{
		map_copy[i] = ft_strdup(map[i]);
		i++;
	}
	return (map_copy);
}

char	make_water_flow_on_tile(char **map, int i, int j)
{
	if (map[i][j] == '0' || map[i][j] == 'E' || map[i][j] == 'C')
	{
		map[i][j] = 'W';
		return (1);
	}
	return (0);
}

char	spread_water_from_tile(char **map, int i, int j)
{
	char	b_has_spread;

	b_has_spread = 0;
	b_has_spread += make_water_flow_on_tile(map, i + 1, j);
	b_has_spread += make_water_flow_on_tile(map, i - 1, j);
	b_has_spread += make_water_flow_on_tile(map, i, j + 1);
	b_has_spread += make_water_flow_on_tile(map, i, j - 1);
	return (b_has_spread);
}

char	flood_map(char **map)
{
	int		i;
	int		j;
	char	b_has_spread;

	b_has_spread = 0;
	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P' || map[i][j] == 'W')
			{
				b_has_spread += spread_water_from_tile(map, i, j);
			}
			j++;
		}
		i++;
	}
	return (b_has_spread);
}

int	check_flooded_map(char **map)
{
	return (count_char_in_map(map, 'C') + count_char_in_map(map, 'E'));
}

// this version of the flood check consider that you can walk on E
void	flood_check(char **map)
{
	char	**map_copy;
	char	bool;

	map_copy = dup_map(map);
	bool = 1;
	while (bool)
		bool = flood_map(map_copy);
	if (check_flooded_map(map_copy))
	{
		free_map(map_copy);
		verif_map_error(11, map);
	}
	free_map(map_copy);
}
