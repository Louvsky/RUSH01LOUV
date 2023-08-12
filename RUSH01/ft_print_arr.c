/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 22:01:40 by bapmarti          #+#    #+#             */
/*   Updated: 2019/08/11 15:53:47 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_arr(int **a, int l)
{
	int i;
	int j;

	i = 0;
	while (i < l)
	{
		j = 0;
		while (j < l)
		{
			ft_putchar(a[i][j] + 48);
			if (j + 1 != l)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
