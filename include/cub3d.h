/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburgsta <rburgsta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:29:48 by jharrach          #+#    #+#             */
/*   Updated: 2023/03/24 20:20:21 by rburgsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdio.h>
# include "../libft/include/libft.h"
# include "../mlx42/include/MLX42/MLX42.h"
# include "math.h"

# define WIDTH 1600
# define HEIGHT 900
# define SCALE 100
# define FOV 60.0f

typedef struct p
{
	float x;
	float y;
} t_p;


typedef struct data
{
	mlx_t *mlx;
	mlx_image_t *image;
	float player_direction;
	int (*map)[7][8];
	t_p player_location;
	t_p forward;
	double time;
	mlx_texture_t *test;
	mlx_image_t *prev_text;
} t_data;

#endif