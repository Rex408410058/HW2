all:main.c bubbleSortInt.o bubbleSortChar.o insertionSortInt.o insertionSortChar.o selectionSortInt.o selectionSortChar.o
	gcc main.c bubbleSortInt.o bubbleSortChar.o insertionSortInt.o insertionSortChar.o selectionSortInt.o selectionSortChar.o -o main

bubbleSortInt.o:bubbleSortInt.c bubbleSortInt.h
	gcc -c bubbleSortInt.c -o bubbleSortInt.o
bubbleSortChar.o:bubbleSortChar.c bubbleSortChar.h
	gcc -c bubbleSortChar.c -o bubbleSortChar.o
insertionSortInt.o:insertionSortInt.c insertionSortInt.h
	gcc -c insertionSortInt.c -o insertionSortInt.o
insertionSortChar.o:insertionSortChar.c insertionSortChar.h
	gcc -c insertionSortChar.c -o insertionSortChar.o
selectionSortInt.o:selectionSortInt.c selectionSortInt.h
	gcc -c selectionSortInt.c -o selectionSortInt.o
selectionSortChar.o:selectionSortChar.c selectionSortChar.h
	gcc -c selectionSortChar.c -o selectionSortChar.o

clean:
	rm -f main bubbleSortInt.o bubbleSortChar.o insertionSortInt.o insertionSortChar.o selectionSortInt.o selectionSortChar.o


