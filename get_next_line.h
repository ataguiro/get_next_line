/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataguiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 18:24:11 by ataguiro          #+#    #+#             */
/*   Updated: 2016/11/21 23:11:23 by ataguiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
# define BUFF_SIZE 32

int				get_next_line(const int fd, char **line);

#endif
