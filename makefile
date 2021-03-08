
# all trargets in the makefile
all: lab2.zip encryption decryption baddecryption


lab2.zip: makefile readme encryption.c decryption.c baddecryption.c testfile secondfile secondfilesolution
	zip lab2.zip makefile readme encryption.c decryption.c baddecryption.c testfile secondfile secondfilesolution

encryption: encryption.o
	gcc encryption.o -o encryption

encyryption.o: encryption.c
	gcc -ansi -pedantic -g -c encryption.c

decryption: decryption.o
	gcc decryption.o -o decryption

decryption.o: decryption.c
	gcc -ansi -pedantic -g -c decryption.c

baddecryption: baddecryption.o
	gcc decryption.o -o baddecryption

baddecryption.o: baddecryption.c
	gcc -ansi -pedantic -g -c baddecryption.c
