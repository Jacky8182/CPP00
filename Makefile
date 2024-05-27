NAME			=	phonebook

CC				=	c++

CFLAGS			=	-Wall -Wextra -Werror -I ${INCLD_DIR} -g -std=c++98

RM 				=	rm -rf

# **************************************************************************** #
#                                                                              #
#                                  COLORS                                      #
#                                                                              #
# **************************************************************************** #

PURPLE 			=	\033[10;95m

GREEN			=	\033[0;32m

COLOUR_END		=	\033[0m


# **************************************************************************** #
#                                                                              #
#                                  SOURCES                                     #
#                                                                              #
# **************************************************************************** #

SRC_PATH		= src/

SRC_MAIN		=	main.cpp \

SRC_PHONEBOOK	=	PhoneBook/PhoneBook.class.cpp \

SRC_CONTACT		=	Contact/Contact.class.cpp \
					Contact/Contact.getter.cpp \
					Contact/Contact.setter.cpp \
					Contact/Contact.utils.cpp \

# **************************************************************************** #
#                                                                              #
#                                  OBJECTS                                     #
#                                                                              #
# **************************************************************************** #

OBJ_PATH		=	objs/

OBJ				=	$(addprefix ${OBJ_PATH}, ${SRC_MAIN:.cpp=.o}) \
					$(addprefix ${OBJ_PATH}, ${SRC_PHONEBOOK:.cpp=.o}) \
					$(addprefix ${OBJ_PATH}, ${SRC_CONTACT:.cpp=.o}) \



# **************************************************************************** #
#                                                                              #
#                                  INCLUDES                                    #
#                                                                              #
# **************************************************************************** #

INCLD_DIR		=	./inc/

INCLD			=	$(INCLD_DIR)Contact.class.hpp \
					${INCLD_DIR}PhoneBook.class.hpp \


# **************************************************************************** #
#                                                                              #
#                                  RULES                                       #
#                                                                              #
# **************************************************************************** #

all: ${NAME}

${NAME}: ${OBJ} ${INCLD}
	@${CC} ${CFLAGS} ${OBJ} -o ${NAME}
	@echo "${GREEN}\33[2K\nCPP01 compiled\n${COLOUR_END}"

${OBJ_PATH}%.o:	${SRC_PATH}%.cpp
	@mkdir -p ${dir $@}
	@${CC} ${CFLAGS} -c $< -o $@ && printf "\33[2K\rCompiling CPP01 : $@" 
	
clean:
	@${RM} ${OBJ_PATH}
	@echo "${GREEN}CPP01 cleaned\n${COLOUR_END}"

fclean: clean
	@${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
