array_smallest_and_largest:array_smallest_and_largest.o
	gcc array_smallest_and_largest.o -o array_smallest_and_largest

array_smallest_and_largest.o:array_smallest_and_largest.c
	gcc -c array_smallest_and_largest.c
clean:
	rm *.o array_smallest_and_largest
