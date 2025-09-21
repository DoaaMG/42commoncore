# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/26                                  #+#    #+#              #
#    Updated: 2025/08/26                                  ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# --- Binaries ---
CLIENT = client
SERVER = server

# --- Compiler ---
CC = cc
CFLAGS = -Wall -Wextra -Werror -Ilibft -Ift_printf

# --- Directories ---
LIBFT_DIR = libft
PRINTF_DIR = ft_printf

# --- Sources ---
SRC_CLIENT = client.c
SRC_SERVER = server.c

OBJ_CLIENT = $(SRC_CLIENT:.c=.o)
OBJ_SERVER = $(SRC_SERVER:.c=.o)

# --- Libraries ---
LIBFT = $(LIBFT_DIR)/libft.a
PRINTF_LIB = $(PRINTF_DIR)/libftprintf.a

# --- Colors ---
GREEN = \033[0;32m
CYAN = \033[0;36m
NC = \033[0m

# --- All ---
all: $(CLIENT) $(SERVER)

# --- Client ---
$(CLIENT): $(OBJ_CLIENT) $(LIBFT) $(PRINTF_LIB)
	@echo "🔻💜 Building $(CLIENT)"
	@$(CC) $(OBJ_CLIENT) -o $(CLIENT) $(LIBFT) $(PRINTF_LIB)

# --- Server ---
$(SERVER): $(OBJ_SERVER) $(LIBFT) $(PRINTF_LIB)
	@echo "🔻💜 Building $(SERVER)"
	@$(CC) $(OBJ_SERVER) -o $(SERVER) $(LIBFT) $(PRINTF_LIB)

# --- Libft ---
$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

# --- ft_printf ---
$(PRINTF_LIB):
	@$(MAKE) -C $(PRINTF_DIR)

# --- Compilation pattern ---
%.o: %.c
	@echo "🦋 Compiling$(GREEN) $<$(NC)"
	@$(CC) $(CFLAGS) -c $< -o $@

# --- Cleaning ---
clean:
	@$(MAKE) -C $(LIBFT_DIR) clean
	@$(MAKE) -C $(PRINTF_DIR) clean
	@echo "$(CYAN)🧹 Cleaning object files$(NC)"
	@rm -f $(OBJ_CLIENT) $(OBJ_SERVER)

fclean: clean
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@$(MAKE) -C $(PRINTF_DIR) fclean
	@echo "$(CYAN)🚮 Cleaning binaries$(NC)"
	@rm -f $(CLIENT) $(SERVER)

re: fclean all

.PHONY: all clean fclean re
