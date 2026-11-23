ABC.exe: big3.o fact. 
  gcc -o ABC.exe big3.o fact.o
main.o: main.c
  gcc -c main.c
big3.o: big3.c
  gcc -c big3.c
fact.o: fact.c
  gcc -c fact.c
 
