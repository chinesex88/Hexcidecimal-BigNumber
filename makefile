demo: demo.o BigNumber.o
	g++ demo.o BigNumber.o -o demo
	./demo
demo.o: demo.cpp BigNumber.h
	g++ -c demo.cpp -o demo.o
BigNumber.o: BigNumber.cpp BigNumber.h
	g++ -c BigNumber.cpp -o BigNumber.o
clean:
	rm *.o demo
run:
	./demo