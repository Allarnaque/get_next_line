/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:26:33 by allan             #+#    #+#             */
/*   Updated: 2023/12/05 15:32:30 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*ft_strdup(char *s);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char const *s2);
int		ft_strchr(const char *s, int c);
char	*get_current_line(int fd, char *stash);
char	*stash_to_display(char *stash);
char	*stash_reset(char *stash);
char	*get_next_line(int fd);

#endif