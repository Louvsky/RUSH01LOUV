/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_new_arr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 11:33:31 by bapmarti          #+#    #+#             */
/*   Updated: 2019/08/11 16:51:51 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_print_arr(int **a, int l);

int		ft_row_right_test(int **a, int *t, int l, int s)
{
	int x;
	int y;
	int mem;
	int count;

	x = 0;
	while (x < l)
	{
		y = s - 1;
		mem = a[x][s];
		count = 1;
		while (y >= 0)
		{
			if (a[x][y] > mem)
			{
				count++;
				mem = a[x][y];
			}
			y--;
		}
		if (count != t[x])
			return (0);
		x++;
	}
	return (1);
}

int		ft_row_left_test(int **a, int *t, int l, int s)
{
	int x;
	int y;
	int mem;
	int count;

	x = 0;
	while (x < l)
	{
		y = s;
		mem = a[x][s - 1];
		count = 1;
		while (y < l)
		{
			if (a[x][y] > mem)
			{
				count++;
				mem = a[x][y];
			}
			y++;
		}
		if (count != t[x])
			return (0);
		x++;
	}
	return (1);
}

int		ft_col_up_test(int **a, int *t, int l, int s)
{
	int x;
	int y;
	int mem;
	int count;

	x = 0;
	while (x < l)
	{
		y = s;
		mem = a[s - 1][x];
		count = 1;
		while (y < l)
		{
			if (a[y][x] > mem)
			{
				count++;
				mem = a[y][x];
			}
			y++;
		}
		if (count != t[x])
			return (0);
		x++;
	}
	return (1);
}

int		ft_col_down_test(int **a, int *t, int l, int s)
{
	int x;
	int y;
	int mem;
	int count;

	x = 0;
	while (x < l)
	{
		y = s - 1;
		mem = a[s][x];
		count = 1;
		while (y >= 0)
		{
			if (a[y][x] > mem)
			{
				count++;
				mem = a[y][x];
			}
			y--;
		}
		if (count != t[x])
			return (0);
		x++;
	}
	return (1);
}

int		ft_check_new_arr(int **a, int **t, int l)
{
	if (ft_col_up_test(a, t[0], l, 1))
		if (ft_col_down_test(a, t[1], l, l - 1))
			if (ft_row_left_test(a, t[1], l, 1))
				if (ft_row_right_test(a, t[1], l, l - 1))
					return (1);
	return (0);
}
