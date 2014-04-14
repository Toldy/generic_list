##
## Makefile for  in /home/colin_g//projects/syst_unix/minitalk
##
## Made by julien colin
## Login   <colin_g@epitech.net>
##
## Started on  Mon Mar 11 17:01:35 2013 julien colin
## Last update lun. avril 14 06:05:50 2014 julien colin
##

DIR	= my_list code_for_test

all clean fclean re:
	@for dir in $(DIR); \
	do \
		echo -e "\033[43;30mDoing a make $@ in $$dir ... \033[0m"; \
		$(MAKE) -C "$$dir" $@; \
		echo; \
	done

.PHONY:	all clean fclean re
