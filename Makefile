NAME = push_swap
SRC = lst/ft_add_list.c lst/ft_list_size.c lst/ft_lstlast.c lst/ft_list_new.c lst/ft_lstadd_back.c \
	  cmd/push.c cmd/reverse_rotate.c cmd/rotate.c cmd/swap.c \
	  utils/check_arg.c utils/check_doubles.c utils/is_sorted.c utils/isnum.c utils/utils.c utils/utils2.c \
	  src/compare_stack.c src/index_search.c src/push_swap.c src/sort_simple.c src/sort_stack.c src/radix_sort.c src/sort_tri.c
OBJ = $(SRC:.c=.o)
LIBFT_DIR = libft/
LIBFT_A = libft.a
LIBFT = $(addprefix $(LIBFT_DIR), $(LIBFT_A))
FLAGS = -Wall -Wextra -Werror

NONE = '\033[0m'
GREEN = '\033[32m'
RED = '\033[31m'
GRAY = '\033[2;37m'
CURSIVE = '\033[3m'

all: $(NAME)

$(NAME): $(OBJ)
	@echo $(CURSIVE)$(GRAY) " --Making Libft-- "$(NONE)
	@make -C $(LIBFT_DIR)
	@echo $(CURSIVE)$(GRAY) " --Making push_swap-- "$(NONE)
	gcc $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@echo "$(NAME): $(GREEN) $(NAME) was created !$(NONE)"

clean:
	@echo $(CURSIVE)$(GRAY) " --Deleting objects-- "$(NONE)
	@rm -rf $(OBJ)
	@echo "$(RED) objects was deleted $(NONE)"
	@make -C $(LIBFT_DIR) clean

fclean: clean
	@echo $(CURSIVE)$(GRAY) " --Deleting $(NAME) -- "$(NONE)
	@rm -rf $(NAME)
	@echo "$(RED) $(NAME) was deleted ! $(NONE)"
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re


   	


