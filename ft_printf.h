/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:04:09 by pcampos-          #+#    #+#             */
/*   Updated: 2021/11/23 13:52:49 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int ft_printf(const char *str, ...);
int ft_putchar(char c);
int ft_putstr(char *s);
int ft_putnbr(int n);
int ft_putunbr(unsigned int n);
int ft_putnbr_hexa(unsigned int n, int a);
void ft_strcpy(char *dst, const char *src, int n);
int ft_putp (unsigned long n);

#endif