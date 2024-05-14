/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:11:22 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/05/14 15:50:58 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_put_char(char c, int *i)
{
    write(1, &c, 1);
    *i += 1;
}

static void ft_check(const char *content, va_list args, int *i)
{
    while(*content)
    {
        if (*content == '%')
        {
            content++;
            if (content == 'c')
                ft_put_char(va_arg(arg, int), id);
            if (content == 's')
                ft_put_str(va_arg(arg, char *), id)
        }
        else
            ft_put_char(*content, id);
        content++
    }
}

int ft_printf(const char *content, ...)
{
    va_list args;
    unsigned int i;

    i = 0;
    va_start(args, content);
    ft_check(content, args, &i);
    va_end(args);
    return(i);  
}
