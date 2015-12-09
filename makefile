LabAss3: driver.o memoryFunc.o
	g++ driver.o memoryFunc.o -o LabAss3

memoryFunc.o: memory memoryFunc.cpp
	g++ -std=c++11 -c memoryFunc.cpp

driver.o: memory driver.cpp
	g++ -std=c++11 -c driver.cpp

clean:
	rm *.o LabAss3
