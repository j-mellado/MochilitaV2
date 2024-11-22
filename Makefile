# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/12 16:12:47 by jmellado          #+#    #+#              #
#    Updated: 2024/11/22 14:34:22 by jmellado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Definir el compilador y las flags de compilacion
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
AR = ar rcs
RM = rm -f
#Archivos fuentes de las funciones principales
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
    ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
    ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
    ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
    ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
    ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c \
    ft_putnbr_fd.c ft_putstr_fd.c
#Archivos fuentes de las funciones bonus
BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c  ft_lstadd_back.c \
    ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstclear.c
#Archivos objeto de funciones principales Y BONUS para convertir todos los .c en archivos .o (archivos objeto)
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)
#Regla principal que se llama por defecto
all: $(NAME)
#Regla para crear la biblioteca estática
$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)
#Regla para compilar los bonus
bonus: $(OBJ) $(BONUS_OBJ)
	$(AR) $(NAME) $(BONUS_OBJ)
#Regla para compilar cada archivo .c en su correspondiente archivo .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
#Regla para limpiar los archivos de objeto
clean:
	$(RM) $(OBJ) $(BONUS_OBJ)
#Regla para limpiar todo
fclean: clean
	$(RM) $(NAME)
#Recompilar todo
re: fclean all
#Añadimos el phony para aquellas reglas que no generan archivos directamente y asin librarnos de conflictos
.PHONY: all bonus clean fclean re
