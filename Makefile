object = rearrang.o

range: $(object)
	gcc $(object) -Wall -Werror -std=c99

rearrang.o: rearrang.c

.PHONY:
clean:
	rm $(object)
