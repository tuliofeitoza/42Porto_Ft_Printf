/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:11:22 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/05/13 23:43:26 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void check(va_list args, const char *content, int *i)
{
    
}

int ft_printf(const char *content, ...)
{
    va_list args;
    unsigned int iprint;

    iprint = 0; 
    va_start(args, content);
    
    while (content[iprint])
    {
        if (content[iprint] == '%')
        {
            iprint++;
            
        }
        else
            iprint = iprint + put_char(content[iprint]);
        iprint++;
    }     
}
