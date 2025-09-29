#to compile main with a library 
#-L looks for libraries in the current directory
#-lft links libft.a to delete its lib and a prefix/sufix

cc -Wall -Wextra -Werror -I includes main.c -L . -lft -o testprog

