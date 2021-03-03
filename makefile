run: mergeInsert.o sortFuncts.o
	g++ -Wall mergeInsert.o sortFuncts.o -o run

sortFuncts.o: sortFuncts.cpp sortFuncts.h
	g++ -Wall -c sortFuncts.cpp

mergeInserrt.o: mergeInsert.cpp
	g++ -Wall -c mergeInert.cpp

clean:
	rm *.o run	
