/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_ten_power.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:07:57 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/25 11:07:59 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_ten_power(int n)
{
	int	res;

	res = 1;
	while (n-- > 0)
		res *= 10;
	return (res);
}