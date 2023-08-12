/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 11:53:44 by bapmarti          #+#    #+#             */
/*   Updated: 2019/08/11 16:59:38 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_backtrack(int **t, int l, int v);
int		ft_check_chars(char *s, int len);
int		ft_check_str(char *s);

int		ft_malloc_arr(int **a, char *s, int l)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	while (i < l)
	{
		a[i] = (int *)malloc(sizeof(int) * count + 1);
		count = 0;
		while (count < l)
		{
			if (s[j] >= 49 && s[j] <= 57)
			{
				a[i][count] = s[j] - 48;
				count++;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		main(int ac, char **av)
{
	int **t;
	int count;
	int v;

	count = 0;
	v = 1;
	if (ac == 2)
	{
		count = ft_check_str(av[1]);
		if (count != 0 && count % 4 == 0 && ft_check_chars(av[1], count))
		{
			t = (int **)malloc(sizeof(int) * count + 1);
			if (ft_malloc_arr(t, av[1], count))
			{
				ft_backtrack(t, count, v);
				free(t);
			}
		}
	}
	if (ac != 2 || count == 0 || count % 4 != 0
			|| !(ft_check_chars(av[1], count)))
		write(1, "Error\n", 6);
	return (0);
}
