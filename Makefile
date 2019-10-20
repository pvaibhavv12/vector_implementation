a.out: client.o vec_imp.o
	gcc  client.o vec_imp.o
client.o: client.c
	gcc -c client.c
vec_imp.o: vec_imp.c
	gcc -c vec_imp.c