# Makefile
target: start main.o HinhChuNhat.o
	@echo Linking
	g++ -o main main.o HinhChuNhat.o
	@echo Completed

start:
	@echo Compling

main.o: main.cpp HinhChuNhat.h
	g++ -c main.cpp

HinhChuNhat.o: HinhChuNhat.cpp HinhChuNhat.h
	g++ -c HinhChuNhat.cpp

clean:
	@echo Clean
	rm main main.o HinhChuNhat.o

rebuild: clean target
