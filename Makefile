SHELL=/bin/bash
CC?=gcc-10
CFLAGS=-g -z lazy
CLIB=-lm

all: caesar_cipher caesar_cipher_decoder

caesar_cipher: ./caesar_cipher.c
	${CC} ${CFLAGS} caesar_cipher.c -o caesar_cipher ${CLIB}

caesar_cipher_decoder: ./caesar_cipher_decoder.c
	${CC} ${CFLAGS} caesar_cipher_decoder.c -o caesar_cipher_decoder ${CLIB}

clean:
	rm caesar_cipher caesar_cipher_decoder
