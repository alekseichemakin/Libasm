NAME	= libasm.a
NA		= nasm

NFLAGS	= -f macho64
SRCS	= ft_strlen.s \
          ft_strcpy.s \
          ft_strcmp.s \
          ft_write.s \
          ft_read.s \
          ft_strdup.s

OBJS	= $(SRCS:.s=.o)
all:	  $(NAME)

$(NAME):  $(OBJS)
		  ar rc $(NAME) $?

%.o: %.s libasm.h
	$(NA) $(NFLAGS) $(@:.o=.s)

clean:
	rm -f $(OBJS)

fclean:	 clean
	rm -f $(NAME)

re: fclean all