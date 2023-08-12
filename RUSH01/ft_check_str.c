/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 16:57:44 by bapmarti          #+#    #+#             */
/*   Updated: 2019/08/11 16:57:53 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_chars(char *s, int len)
{
	int i;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= '1' && s[i] <= '9') && (s[i] - 48 > len))
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_str(char *s)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == ' ')
			i++;
		if (!(s[i] >= '1' && s[i] <= '9') && s[i] != ' ')
			return (0);
		if ((s[i] >= 49 && s[i] <= 57)
				&& (s[i + 1] != ' ' && s[i + 1] != '\0'))
			return (0);
		if ((s[i] >= 49 && s[i] <= 57)
				&& (s[i + 1] == ' ' || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count / 4);
}
