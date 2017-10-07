# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llefevre <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/07 20:31:18 by llefevre          #+#    #+#              #
#    Updated: 2017/10/02 20:45:43 by llefevre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all libfclean libclean fclean clean re

NAME = Wolf3D

FLAGS = -lmlx -L ./minilibx_macos2 -framework OpenGL -framework AppKit 

C_FOLDER = ./

H_FOLDER = ./

LIB_FOLD = ./libft/

LIB = libft/libft.a

SRC = main put_cub cube put_keycode calcul_distance p_player action bzero_du_bled put_mousse crea_map htoi parse_text texture_loading

C_FILE = $(addsuffix .c,$(addprefix $(C_FOLDER),$(SRC)))

O_FILE = $(addsuffix .o,$(SRC))

all: $(NAME)

$(NAME): $(LIB) $(O_FILE)
	@gcc -Wall -Werror -Wextra -O3 -o $@ $^ $(FLAGS) -L$(LIB_FOLD) -I$(LIB_FOLD) -lft
	@echo "\033[32mexecutable OK\033[0m"
	@echo "\033[36;40m.....................................................................................................................................................\n\
	..............................................................I.......................................................................................\n\
	............................................................oIIo......................................................................................\n\
	...........................................................oIIIo......................................................................................\n\
	..........................................................oIIOOo......................................................................................\n\
	..........................................................IIoOoo......................................................................................\n\
	........................................................oOIooooo......................................................................................\n\
	........................................................OIooOoooo.....................................................................................\n\
	.......................................................OOOoOoOoOo.....................................................................................\n\
	......................................................OOOoooooooo.....................................................................................\n\
	......................................................OoOooooooooo....................................................................................\n\
	.....................................................OOoOooooooooo......................................................oOoo..........................\n\
	.....................................................oooooooooooooo..................................................OOOooo...........................\n\
	....................................................ooooooooooooooo...............................................OIIOOooo............................\n\
	...................................................ooooooooooooooo.............................................OIIIIOOoo..............................\n\
	...................................................oooooooooooo..............................................OIIIIOOooo...............................\n\
	..................................................ooooooooooo.............................................OIIIIIIOOooo................................\n\
	..................................................ooooooooo............................................oIIIIIIIIOoooo.................................\n\
	..................................................ooooooooooooo.......................................IIIIIIIIIOoooo..................................\n\
	.................................................ooooooooooooooooooooo.............................oIIIIIIIIIOOoooo...................................\n\
	.................................................ooooooooooooooooooooo...........................oIIIIIIIIIIOOooooo...................................\n\
	................................................ooooooooooooooooooooooo.........................IOOIIIIIIIOOoooooo....................................\n\
	................................................ooooooooooooooooooooooo......................oOOOOIIOIOOOOoooooo......................................\n\
	................................................oooooooooooooooooooooo......................OOoOOIOOOOOOOOoooooo......................................\n\
	................................................oooooooooooooooooooo......................oOoOOOOOOOOooOooooooo.......................................\n\
	...............................................ooooooooooooooooooo.......................oOoOOOOoOOooooooooooo........................................\n\
	...............................................ooooooooooooooooo.......................ooOoOOOoOoOooOoooooooo.........................................\n\
	...............................................ooooooooooooooo........................ooOoOOoooOoOoooooooooo..........................................\n\
	..............................................ooooooooooooooooooooo.................ooooOooooooOooooooooooo...........................................\n\
	..............................................ooooooooooooooooooooooooooooo........oOooOoOoOoooooooooooooo............................................\n\
	..............................................ooooooooooooooooooooooooooooo.......oOoooooooOoooooooooooooo............................................\n\
	..............................................oooooooooooooooooooooooooooooo.....oOooooOooOoooooooooooooo.............................................\n\
	..............................................oooooooooooooooooooooooooooooo...oooOoooOoooOooooooooooooo..............................................\n\
	..............................................ooooooooooooooooooooooooooooooo.oooooooOoooooOooooooooooo...............................................\n\
	..............................................ooooooooooooooooooooooooo......oOoooooooooooooooooooooooo...............................................\n\
	..............................................ooooooooooooooo...ooooooooooo.ooOooooooooooooooooooooooo................................................\n\
	..............................................oooooooo..oooooooooooooooooo.oOooOooooooooooooooooooooo.................................................\n\
	..............................................oo..oooooooooooooo....oooooooooooooooOooooooooooooooooo.................................................\n\
	...............................................oooooooooooo..oooooooooooo.ooOoOooooooooooooooooooooo..................................................\n\
	..........................................IIIIIIIooooo..oooooOoooooooooo.ooOoOooooooooooooooooooooo.oo................................................\n\
	.......................................IIIIIIo.oooo.oooooooooooooooooooooOoooooooooooooooooooooooo.oo.IO..............................................\n\
	....................................lIIIO.ooooo.oOOOoOoooooOooooooooooo.ooooooooooooooooooooooooo.ooooOII.............................................\n\
	.................................Illo.oooooo.oOOOOOOOoOoooOoOooooooooo.ooooooooooooooooo.....oooooooo.IIIIo...........................................\n\
	...............................lo.oooooooo.OOOOOOOOOoOooooooooooooo.ooooooooooooooooooooooooooooooooo.IIIIIo..........................................\n\
	.............................oooooooooo.oOOOOOo...oOoOoooooooOoooooooooooooooooooooooooooooooooooooooOIIIIIII.........................................\n\
	..........................OIooooooooo..OOOOOOo.......OOoooooOooooooooooooooooooooooooooooooooooooooo.llllIOoIo........................................\n\
	........................Oll.ooooooo.oOOOOO...OOOo......ooooOooooooooooooooooooooooooooooooooooooooo.lllllllll.........................................\n\
	......................lMllOooooooo.OOOOOo....Oo.OOO......Oooooooooooooooooooooooooooooooooooooooo.llllllllllllI.......................................\n\
	....................oMMlll.ooooo.oOOOOOOOO.oOOoo..OOO.....ooooooooooooooooooooooooooooooooooooo.lllllllllllllllo......................................\n\
	..................OMMMllloooooo.OOOOo....OOOooMMMMoooo.....oooooooooooooooooooooooooooooooo.Illlllllllllllllllll......................................\n\
	.................oMMMlllIooooo.OOOO........OOOoMMoOO.oo.....ooooooooooooooooooooooooooooolllllllllllllllllllllllI.....................................\n\
	................O.MMlllI.oooo.OOOO...........ooo.O....ooooooooooooooooooooooooooooo.ollllllllllllllllllllllllllllo....................................\n\
	..............OOoolllll.oooo.oOOO.............ooo.oooooooooooooooooooooooooooo.oIllllllllllllllllllllllllllllllllI....................................\n\
	.............OOoOoOlll.oooooooOO...............oooooooooooooooooooooooooo.olllllllllllllllllllllllllllllllllllllll....................................\n\
	...........oOOOOoo.llOooooo.ooooo..........oooooooooooooooooooooooo.Olllllllllllllllllllllllllllllllllllllllllllll....................................\n\
	..........oOOOOoOooOloooooooooooooooooooooooooooooooooooooooo.oIlllllllllllllllllllllllllllllllllllllllllllllllll.....................................\n\
	.........OOOOOOoOoO..ooooOlllOoo.o......ooooo......ooOllllllllllllllllllllllllllllllllllllllllllllllllllllllllll......................................\n\
	........OOOOOOOOoOoOoolllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllo......................................\n\
	.......OOOOOOOOoOo.lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllI.......................................\n\
	......OOOOOOOOo.llllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll........................................\n\
	.....OOOOOOO.IlllllllllllllllllllllllllllllllllllllllllllllllllllllllllllIlIIIlllllllllllllllllllllllllllllll.........................................\n\
	....OIOIOoollllllllllllllllllllllllllllllllllllllllllllOOooo.oO.OOOOOOOOOOOOOOOIlllllllllllllllllllllllllllIOlI.......................................\n\
	...IIIIolllllllllllllllllllllllllllllllllllllOoOlMMll.oIMMMl.O.OOOOOOOOOIIIIIIolllllllllllllllllllllllllllOlllll......................................\n\
	..OIIOlllllllllllllllllllllllllllllllOoOIooooooMMMMllooo.IMIOOoOOIIIIIIIIIlIIoMllllllllllllllllllllllllllIllllll......................................\n\
	..IoMMMMMMMMllllllllllllllllllIoIMMMMMMMMl.ooooo.MMlIoOOOOO.O.IIIIIlI.oOIlII.MllllllllllllllllllllllllllIllllllI......................................\n\
	.IOMMMMMMMMMMMMMMMMMlMllllOOMllIIMMMMMMMMlIoooooooIMOOOOOOOOOolllllll.MMlllOMMlllllllllllllllllllllllllllllllllo.......OIIIo..........................\n\
	.oMMMMMMMMMMMMMMMMMMMMOlMMMMMMMlO.ooooIMMMlIooOOOOOo.OOOOOOOoOllllllllOMMlIMMllllllllllllllllllllllllllllllllll....olllllllllIIO......................\n\
	.........oOOIllllMMMMMMMOOMMMMMMlIlMMlllllooOll.OOOOOOOOOOOOoIllllIOOo.oIMMlllllllllllllllllllllllOllllllllllllllllllllllllllIIIIIIIo.................\n\
	...........................oo.IMMloMMMllll..MMlO.............IMMlloMMMMOMMMlllllllllllllllllllllOllllllllllllllllllllllllllllIIIIIIIIIIo..............\n\
	..........................Ooo........IMllo....OI............loMllllOMIlMMllllllllllllllllllllOOllllllllllllllllllllllllllllllIIIIIIIIIIIIIIO..........\n\
	.........................o..............l................ooOO.llllIO.MMMMlllllllllllllllllIolllllllllllllllllllllllllllllllllIIIIIIIIIIIIIIIIIIO......\n\
	..........................................................lMMlIlIIoMMMMlllllllllllllllO....oIllllllllllllllllllllllllllllllllIIIIIIIIIIIIIIIIIIIIIIO..\n\
	...........................................................Ooo.OoMMMMMMMMMMMMMMMlo.................oOlllllllllllllllllllllllIIIIIIIIIIIIIIIIIIIIIIIOo.\n\
	...........................................................oOo.MMMMMMMMMMMMO..................................OOlllllllllllIIIIIIIIIIIIIIOOo..........\n\
	............................................................MMMMMIOo..................................................................................\033[0m"

./%.o: ./%.c
	@gcc -c  $< -I$(LIB_FOLD) -o $@
	@echo "\033[32m$@\033[0m"

$(LIB):
	@$(MAKE) -C libft

libclean:
	@$(MAKE) -C libft clean

clean: libclean
	@/bin/rm -f $(O_FILE)
	@echo "\033[32mrm .o files\033[0m"

libfclean:
	@$(MAKE) -C libft fclean

fclean: clean libfclean
	@/bin/rm -f $(NAME)
	@echo "\033[32mrm $(NAME)\033[0m"

re: fclean all
