Registro:	seres.o marina.o piratas.o revolucionarios.o fruta_diablo.o paramecia.o zoan.o logia.o main.o
	g++ seres.o marina.o piratas.o revolucionarios.o fruta_diablo.o paramecia.o zoan.o logia.o main.o -o ejecutable

main.o:	seres.h marina.h piratas.h revolucionarios.h fruta_diablo.h paramecia.h zoan.h logia.h main.cpp
	g++ -c main.cpp

seres.o:	seres.h seres.cpp
	g++ -c seres.cpp

marina.o:	seres.h marina.h marina.cpp
	g++ -c marina.cpp

piratas.o:	seres.h piratas.h piratas.cpp
	g++ -c piratas.cpp

revolucionarios.o:	seres.h revolucionarios.h revolucionarios.cpp
	g++ -c revolucionarios.cpp

fruta_diablo.o: fruta_diablo.h fruta_diablo.cpp
	g++ -c fruta_diablo.cpp

zoan.o:	fruta_diablo.h zoan.h zoan.cpp
	g++ -c zoan.cpp

paramecia.o: fruta_diablo.h paramecia.h paramecia.cpp
	g++ -c paramecia.cpp

logia.o:	fruta_diablo.h logia.h logia.cpp
	g++ -c logia.cpp
