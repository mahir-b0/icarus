FROM ubuntu:20.04
RUN dpkg --add-architecture i386
RUN apt-get update && apt-get install -y libc6:i386 build-essential socat gcc-multilib

RUN useradd -ms /bin/bash user
COPY ./challenge /challenge
WORKDIR /challenge

RUN make
RUN chmod +x challenge

EXPOSE 1337
USER user
CMD socat tcp-l:1337,reuseaddr,fork exec:./challenge,pty,echo=0,raw,iexten=0
