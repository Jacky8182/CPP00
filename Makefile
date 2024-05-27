NAME			=	PhoneBook

CC				=	c++

CFLAGS			=	-Wall -Wextra -Werror -I ${INC} -std=c++98

RM				= rm -rf

PURPLE 			=	\033[10;95m

GREEN			=	\033[0;32m

COLOUR_END		=	\033[0m

SRC_PATH		=	src/

SRC_MAIN		=	main.cpp \

SRC_CONTACT		=	Contact/Contact.class.cpp \
						Contact/Contact.getter.cpp \
						Contact/Contact.setter.cpp \

SRC_PHONEBOOK	=	PhoneBook/PhoneBook.class.cpp \

OBJS_PATH		=	objs/

OBJ				=	$(addprefix ${OBJS_PATH}, ${SRC_MAIN:.cpp=.o}) \
					$(addprefix ${OBJS_PATH}, ${SRC_PHONEBOOK:.cpp=.o}) \
					$(addprefix ${OBJS_PATH}, ${SRC_CONTACT:.cpp=.o}) \

INC_FOLDER		=	./inc/

INC				= 	${INC_FOLDER}PhoneBook.class.hpp \
					${INC_FOLDER}Contact.class.hpp \

all: ${NAME}

${NAME}: ${OBJS} ${INC}
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME}
	@echo "${GREEN}\33[2K\nCPP01 compiled\n${COLOUR_END}"

${OBJS_PATH}%.o:	${SRC_PATH}%.cpp
	@mkdir -p ${dir $@}
	@${CC} ${CFLAGS} -c $< -o $@ && printf "\33[2K\rCompiling CPP01 : $@" 
	
clean:
	@${RM} ${OBJS_PATH}
	@echo "${GREEN}CPP01 cleaned\n${COLOUR_END}"

fclean: clean
	@${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
