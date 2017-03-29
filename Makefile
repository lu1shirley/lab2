lab2_elo:main.o elo.o
   g++ -o lab2_elo main.o elo.o

main.o:main.cpp elo.h
   g++ -c main.cpp

elo.o:elo.cpp elo.h
   g++ -c elo.cpp

clean:
  rm lab2_elo.*o
