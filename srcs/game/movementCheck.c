/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movementCheck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:46:09 by jtaravel          #+#    #+#             */
/*   Updated: 2022/10/19 12:46:46 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	check_next_pos_W(t_g *g, double angle)
{
	if ((int)(g->c.y - (cos(angle) * (WD_SPEED))) / SIZE != (int)g->c.y / SIZE && (int)(g->c.x + (sin(angle) * (WD_SPEED))) / SIZE != (int)g->c.x / SIZE)
	{
		if (angle >= 0 * PI / 180 && angle <= 90 * PI / 180)
		{
			if (g->m.map[(int)(g->c.y - (cos(angle) * (WD_SPEED))) / SIZE + 1][(int)(g->c.x + (sin(angle) * (WD_SPEED))) / SIZE] == '1' && (g->m.map[(int)(g->c.y - (cos(angle) * (WD_SPEED))) / SIZE][(int)(g->c.x + (sin(angle) * (WD_SPEED))) / SIZE - 1] == '1'))
				return (0);
		}
		else if (angle > 90 * PI / 180 && angle <= 180 * PI * 180)
		{
			if (g->m.map[(int)(g->c.y - (cos(angle) * (WD_SPEED))) / SIZE + 1][(int)(g->c.x + (sin(angle) * (WD_SPEED))) / SIZE] == '1' && (g->m.map[(int)(g->c.y - (cos(angle) * (WD_SPEED))) / SIZE][(int)(g->c.x + (sin(angle) * (WD_SPEED))) / SIZE + 1] == '1'))
				return (0);
		}
		else if (angle > 180 * PI / 180 && angle <= 270 * PI / 180)
		{
			if (g->m.map[(int)(g->c.y - (cos(angle) * (WD_SPEED))) / SIZE - 1][(int)(g->c.x + (sin(angle) * (WD_SPEED))) / SIZE] == '1' && (g->m.map[(int)(g->c.y - (cos(angle) * (WD_SPEED))) / SIZE][(int)(g->c.x + (sin(angle) * (WD_SPEED))) / SIZE + 1] == '1'))
				return (0);
		}
		else if (angle > 270 * PI / 180 && angle <= 360 * PI / 180)
		{
			if (g->m.map[(int)(g->c.y - (cos(angle) * (WD_SPEED))) / SIZE - 1][(int)(g->c.x + (sin(angle) * (WD_SPEED))) / SIZE] == '1' && (g->m.map[(int)(g->c.y - (cos(angle) * (WD_SPEED))) / SIZE][(int)(g->c.x + (sin(angle) * (WD_SPEED))) / SIZE - 1] == '1'))
				return (0);
		}
	}
	if (g->m.map[(int)(g->c.y - (cos(angle) * (C_SPEED))) / SIZE][(int)(g->c.x + (sin(angle) * (C_SPEED))) / SIZE] == '1')
		return (0);
	if (g->m.map[(int)(g->c.y - (cos(angle) * (C_SPEED))) / SIZE][(int)(g->c.x + (sin(angle) * (C_SPEED))) / SIZE] == 'P' && !g->activateButton)
		return (0);
	if (g->m.map[(int)(g->c.y - (cos(angle) * (C_SPEED))) / SIZE][(int)(g->c.x + (sin(angle) * (C_SPEED))) / SIZE] == 'B')
		return (0);
	if (g->m.map[(int)(g->c.y - (cos(angle) * (C_SPEED))) / SIZE][(int)(g->c.x + (sin(angle) * (C_SPEED))) / SIZE] == 'H')
		return (0);
	if (g->m.map[(int)(g->c.y - (cos(angle) * (C_SPEED))) / SIZE][(int)(g->c.x + (sin(angle) * (C_SPEED))) / SIZE] == 'G')
		return (0);
	if (g->m.map[(int)(g->c.y - (cos(angle) * (C_SPEED))) / SIZE][(int)(g->c.x + (sin(angle) * (C_SPEED))) / SIZE] == 'M')
		return (0);
	return (1);
}

int	check_next_pos_A(t_g *g, double angle)
{
	if ((int)(g->c.y - (cos(angle) * (WD_SPEED))) / SIZE != (int)g->c.y / SIZE && (int)(g->c.x - (cos(angle) * (WD_SPEED))) / SIZE != (int)g->c.x / SIZE)
	{
		if (angle >= 0 * PI / 180 && angle <= 90 * PI / 180)
		{
			if (g->m.map[(int)(g->c.y - (cos(angle) * (WD_SPEED))) / SIZE + 1][(int)(g->c.x - (cos(angle) * (WD_SPEED))) / SIZE] == '1' && (g->m.map[(int)(g->c.y - (cos(angle) * (WD_SPEED))) / SIZE][(int)(g->c.x - (cos(angle) * (WD_SPEED))) / SIZE - 1] == '1'))
				return (0);
		}
		else if (angle > 90 * PI / 180 && angle <= 180 * PI * 180)
		{
			if (g->m.map[(int)(g->c.y - (cos(angle) * (WD_SPEED))) / SIZE + 1][(int)(g->c.x - (cos(angle) * (WD_SPEED))) / SIZE] == '1' && (g->m.map[(int)(g->c.y - (cos(angle) * (WD_SPEED))) / SIZE][(int)(g->c.x - (cos(angle) * (WD_SPEED))) / SIZE + 1] == '1'))
				return (0);
		}
		else if (angle > 180 * PI / 180 && angle <= 270 * PI / 180)
		{
			if (g->m.map[(int)(g->c.y - (cos(angle) * (WD_SPEED))) / SIZE - 1][(int)(g->c.x - (cos(angle) * (WD_SPEED))) / SIZE] == '1' && (g->m.map[(int)(g->c.y - (cos(angle) * (WD_SPEED))) / SIZE][(int)(g->c.x - (cos(angle) * (WD_SPEED))) / SIZE + 1] == '1'))
				return (0);
		}
		else if (angle > 270 * PI / 180 && angle <= 360 * PI / 180)
		{
			if (g->m.map[(int)(g->c.y - (cos(angle) * (WD_SPEED))) / SIZE - 1][(int)(g->c.x - (cos(angle) * (WD_SPEED))) / SIZE] == '1' && (g->m.map[(int)(g->c.y - (cos(angle) * (WD_SPEED))) / SIZE][(int)(g->c.x - (cos(angle) * (WD_SPEED))) / SIZE + 1] == '1'))
				return (0);
		}
	}
	if (g->m.map[(int)(g->c.y - (int)(sin(angle) * C_SPEED)) / SIZE][(int)(g->c.x - (int)(cos(angle) * C_SPEED)) / SIZE] == '1')
		return (0);
	if (g->m.map[(int)(g->c.y - (int)(sin(angle) * C_SPEED)) / SIZE][(int)(g->c.x - (int)(cos(angle) * C_SPEED)) / SIZE] == 'P' && !g->activateButton)
		return (0);
	if (g->m.map[(int)(g->c.y - (int)(sin(angle) * C_SPEED)) / SIZE][(int)(g->c.x - (int)(cos(angle) * C_SPEED)) / SIZE] == 'B')
		return (0);
	if (g->m.map[(int)(g->c.y - (int)(sin(angle) * C_SPEED)) / SIZE][(int)(g->c.x - (int)(cos(angle) * C_SPEED)) / SIZE] == 'H')
		return (0);
	if (g->m.map[(int)(g->c.y - (int)(sin(angle) * C_SPEED)) / SIZE][(int)(g->c.x - (int)(cos(angle) * C_SPEED)) / SIZE] == 'G')
		return (0);
	if (g->m.map[(int)(g->c.y - (int)(sin(angle) * C_SPEED)) / SIZE][(int)(g->c.x - (int)(cos(angle) * C_SPEED)) / SIZE] == 'M')
		return (0);
	return (1);
}

int	check_next_pos_S(t_g *g, double angle)
{
	if ((int)(g->c.y + (cos(angle) * (WD_SPEED))) / SIZE != (int)g->c.y / SIZE && (int)(g->c.x - (sin(angle) * (WD_SPEED))) / SIZE != (int)g->c.x / SIZE)
	{
		if (angle >= 0 * PI / 180 && angle <= 90 * PI / 180)
		{
			if (g->m.map[(int)(g->c.y + (cos(angle) * (WD_SPEED))) / SIZE + 1][(int)(g->c.x - (sin(angle) * (WD_SPEED))) / SIZE] == '1' && (g->m.map[(int)(g->c.y + (cos(angle) * (WD_SPEED))) / SIZE][(int)(g->c.x - (sin(angle) * (WD_SPEED))) / SIZE - 1] == '1'))
				return (0);
		}
		else if (angle > 90 * PI / 180 && angle <= 180 * PI * 180)
		{
			if (g->m.map[(int)(g->c.y + (cos(angle) * (WD_SPEED))) / SIZE + 1][(int)(g->c.x - (sin(angle) * (WD_SPEED))) / SIZE] == '1' && (g->m.map[(int)(g->c.y + (cos(angle) * (WD_SPEED))) / SIZE][(int)(g->c.x - (sin(angle) * (WD_SPEED))) / SIZE + 1] == '1'))
				return (0);
		}
		else if (angle > 180 * PI / 180 && angle <= 270 * PI / 180)
		{
			if (g->m.map[(int)(g->c.y + (cos(angle) * (WD_SPEED))) / SIZE - 1][(int)(g->c.x - (sin(angle) * (WD_SPEED))) / SIZE] == '1' && (g->m.map[(int)(g->c.y + (cos(angle) * (WD_SPEED))) / SIZE][(int)(g->c.x - (sin(angle) * (WD_SPEED))) / SIZE + 1] == '1'))
				return (0);
		}
		else if (angle > 270 * PI / 180 && angle <= 360 * PI / 180)
		{
			if (g->m.map[(int)(g->c.y + (cos(angle) * (WD_SPEED))) / SIZE - 1][(int)(g->c.x - (sin(angle) * (WD_SPEED))) / SIZE] == '1' && (g->m.map[(int)(g->c.y + (cos(angle) * (WD_SPEED))) / SIZE][(int)(g->c.x - (sin(angle) * (WD_SPEED))) / SIZE - 1] == '1'))
				return (0);
		}
	}
	if (g->m.map[(int)(g->c.y + (int)(cos(angle) * C_SPEED)) / SIZE][(int)(g->c.x - (int)(sin(angle) * C_SPEED)) / SIZE] == '1')
		return (0);
	if (g->m.map[(int)(g->c.y + (int)(cos(angle) * C_SPEED)) / SIZE][(int)(g->c.x - (int)(sin(angle) * C_SPEED)) / SIZE] == 'P' && !g->activateButton)
		return (0);
	if (g->m.map[(int)(g->c.y + (int)(cos(angle) * C_SPEED)) / SIZE][(int)(g->c.x - (int)(sin(angle) * C_SPEED)) / SIZE] == 'B')
		return (0);
	if (g->m.map[(int)(g->c.y + (int)(cos(angle) * C_SPEED)) / SIZE][(int)(g->c.x - (int)(sin(angle) * C_SPEED)) / SIZE] == 'H')
		return (0);
	if (g->m.map[(int)(g->c.y + (int)(cos(angle) * C_SPEED)) / SIZE][(int)(g->c.x - (int)(sin(angle) * C_SPEED)) / SIZE] == 'G')
		return (0);
	if (g->m.map[(int)(g->c.y + (int)(cos(angle) * C_SPEED)) / SIZE][(int)(g->c.x - (int)(sin(angle) * C_SPEED)) / SIZE] == 'M')
		return (0);
	return (1);
}

int	check_next_pos_D(t_g *g, double angle)
{
	if ((int)(g->c.y + (sin(angle) * (WD_SPEED))) / SIZE != (int)g->c.y / SIZE && (int)(g->c.x + (cos(angle) * (WD_SPEED))) / SIZE != (int)g->c.x / SIZE)
	{
		if (angle >= 0 * PI / 180 && angle <= 90 * PI / 180)
		{
			if (g->m.map[(int)(g->c.y + (sin(angle) * (WD_SPEED))) / SIZE + 1][(int)(g->c.x + (cos(angle) * (WD_SPEED))) / SIZE] == '1' && (g->m.map[(int)(g->c.y + (sin(angle) * (WD_SPEED))) / SIZE][(int)(g->c.x + (cos(angle) * (WD_SPEED))) / SIZE - 1] == '1'))
				return (0);
		}
		else if (angle > 90 * PI / 180 && angle <= 180 * PI * 180)
		{
			if (g->m.map[(int)(g->c.y + (sin(angle) * (WD_SPEED))) / SIZE + 1][(int)(g->c.x + (cos(angle) * (WD_SPEED))) / SIZE] == '1' && (g->m.map[(int)(g->c.y + (sin(angle) * (WD_SPEED))) / SIZE][(int)(g->c.x + (cos(angle) * (WD_SPEED))) / SIZE + 1] == '1'))
				return (0);
		}
		else if (angle > 180 * PI / 180 && angle <= 270 * PI / 180)
		{
			if (g->m.map[(int)(g->c.y + (sin(angle) * (WD_SPEED))) / SIZE - 1][(int)(g->c.x + (cos(angle) * (WD_SPEED))) / SIZE] == '1' && (g->m.map[(int)(g->c.y + (sin(angle) * (WD_SPEED))) / SIZE][(int)(g->c.x + (cos(angle) * (WD_SPEED))) / SIZE + 1] == '1'))
				return (0);
		}
		else if (angle > 270 * PI / 180 && angle <= 360 * PI / 180)
		{
			if (g->m.map[(int)(g->c.y + (sin(angle) * (WD_SPEED))) / SIZE - 1][(int)(g->c.x + (cos(angle) * (WD_SPEED))) / SIZE] == '1' && (g->m.map[(int)(g->c.y + (sin(angle) * (WD_SPEED))) / SIZE][(int)(g->c.x + (cos(angle) * (WD_SPEED))) / SIZE - 1] == '1'))
				return (0);
		}
	}
	if (g->m.map[(int)(g->c.y + (int)(sin(angle) * C_SPEED)) / SIZE][(int)(g->c.x + (int)(cos(angle) * C_SPEED)) / SIZE] == '1')
		return (0);
	if (g->m.map[(int)(g->c.y + (int)(sin(angle) * C_SPEED)) / SIZE][(int)(g->c.x + (int)(cos(angle) * C_SPEED)) / SIZE] == 'P' && !g->activateButton)
		return (0);
	if (g->m.map[(int)(g->c.y + (int)(sin(angle) * C_SPEED)) / SIZE][(int)(g->c.x + (int)(cos(angle) * C_SPEED)) / SIZE] == 'H')
		return (0);
	if (g->m.map[(int)(g->c.y + (int)(sin(angle) * C_SPEED)) / SIZE][(int)(g->c.x + (int)(cos(angle) * C_SPEED)) / SIZE] == 'B')
		return (0);
	if (g->m.map[(int)(g->c.y + (int)(sin(angle) * C_SPEED)) / SIZE][(int)(g->c.x + (int)(cos(angle) * C_SPEED)) / SIZE] == 'G')
		return (0);
	if (g->m.map[(int)(g->c.y + (int)(sin(angle) * C_SPEED)) / SIZE][(int)(g->c.x + (int)(cos(angle) * C_SPEED)) / SIZE] == 'M')
		return (0);
	return (1);
}
