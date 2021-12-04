FROM ubuntu:21.04

RUN apt-get update && apt-get install -y gcc
RUN apt-get install wget -y

RUN wget https://project-downloads.drogon.net/wiringpi-latest.deb
RUN sudo dpkg -i wiringpi-latest.deb

RUN apt-get install git -y
RUN git clone https://github.com/thatdjay/projet4

RUN gcc -Wall -o gpio -Iprojet4/rpio-gpio-wpi.c -lwiringPi

