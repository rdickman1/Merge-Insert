run: mergeInsert.o sortFuncts.o
	g++ mergeInsert.o sortFuncts.o -o run

sortFuncts.o: sortFuncts.cpp sortFuncts.h
	g++ -c sortFuncts.cpp

mergeInserrt.o: mergeInsert.cpp
	g++ -c mergeInert.cpp

clean:
	rm *.o run	
