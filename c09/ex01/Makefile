
SRC_PATH =	./srcs
FLAG =		-Wall -Wextra -Werror
OBJECTS =	$(SRC_PATH)/ft_putchar.o\
			$(SRC_PATH)/ft_putstr.o\
			$(SRC_PATH)/ft_strcmp.o\
			$(SRC_PATH)/ft_strlen.o\
			$(SRC_PATH)/ft_swap.o
HEADERS =	./includes/
FILES =		libft.a $(OBJECTS)

all:	libft.a

libft.a: $(OBJECTS)
	ar rcs $@ $^

srcs/%.o: srcs/%.c
	gcc $(FLAG) $< -c -o $@ -I $(HEADERS) 

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(FILES)

re:
	fclean all

.PHONY: clean all fclean re