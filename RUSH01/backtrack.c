/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 22:20:33 by bapmarti          #+#    #+#             */
/*   Updated: 2019/08/11 17:09:07 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_check_new_arr(int **a, int **t, int l);
void	ft_print_arr(int **a, int l);

int		ft_create_arr(int **a, int l, int v)
{
	int i;
	int j;
	int test;

	i = 0;
	while (i < l)
	{
		a[i] = (int *)malloc(sizeof(int) * l + 1);
		j = 0;
		test = i + v;
		while (j < l)
		{
			if (test == 5)
			{
				test = 1;
				a[i][j] = test;
			}
			else
				a[i][j] = test;
			test++;
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_backtrack(int **t, int l, int v)
{
	int **a;

	a = (int **)malloc(sizeof(int) * l + 1);
	if (ft_create_arr(a, l, v))
		if (ft_check_new_arr(a, t, l) == 0)
			return (ft_backtrack(t, l, v + 1));
	ft_print_arr(a, l);
	return (1);
}
