treeinator: sources/main.c sources/tree/treelin.c sources/tree/treeexp.c sources/tree/treelog.c
	gcc -o $@ $^ -Wall -Wpedantic -g -lm
clean:
	rm treeinator
