NAME			=	PhoneBook

CC				=	c++

CFLAGS			=	-Wall -Wextra -Werror -I ${PHONE_INC} -I ${CONTACT_INC} -std=c++98

RM				= rm -rf

INC_FOLDER		=	./inc/

PHONE_INC		= 	${INC_FOLDER}PhoneBook.class.hpp

CONTACT_INC		=	${INC_FOLDER}Contact.class.hpp

SRC_PATH		=	src/

SRC_MAIN		=	main.cpp \

SRC_CONTACT		=	Contact/Contact.class.cpp \
						Contact/Contact.getter.cpp \
						Contact/Contact.setter.cpp \

SRC_PHONEBOOK	=	PhoneBook/PhoneBook.class.cpp \

OBJS_PATH		=	objs/

OBJS 			=	$(addprefix ${OBJS_PATH}, ${SRC_MAIN:.cpp=.o}) \
					$(addprefix ${OBJS_PATH}, ${SRC_CONTACT:.cpp=.o}) \
					$(addprefix ${OBJS_PATH}, ${SRC_PHONEBOOK:.cpp=.o}) \

all: ${NAME}

${NAME}: ${OBJS} ${INC}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}


${OBJS_PATH}%.o: ${SRC_PATH}%.cpp
	mkdir -p ${dir @}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
