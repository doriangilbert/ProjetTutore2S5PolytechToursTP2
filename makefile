tp2_lex:tp2_lex.c
	gcc -g tp2_lex.c -o tp2_lex

test:tp2_lex.c
	gcc -g tp2_lex.c -o tp2_lex
	valgrind ./tp2_lex --leak-check=full
