CC = gcc
CFLAGS = -fno-stack-protector -m32 -Og -z execstack -no-pie -D_FORTIFY_SOURCE=0
FNAME = challenge

challenge: challenge.c
	$(CC) $(CFLAGS) -o $(FNAME) challenge.c
