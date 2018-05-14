/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mod1.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnugroho <rnugroho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 20:04:07 by rnugroho          #+#    #+#             */
/*   Updated: 2018/05/14 21:20:46 by rnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Color.hpp"
#include <cstdio>

int
	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	Color *color = new Color(255 << 8);
	ft_printf("%s", color->toString());
	return (0);
}
	