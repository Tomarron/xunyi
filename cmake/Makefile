TARGET = ../output/DJI_Onboard_API_Cmdline_Test

OBJECTS = main.o DJI_Pro_App.o DJI_Pro_Hw.o DJI_Pro_Link.o DJI_Pro_Sample.o DJI_Pro_Codec.o DJI_Pro_Rmu.o

CFLAGS = -Wall -O3 -Isrc/ -I/src/DJI_LIB

LDFLAGS = -lpthread

CXX = g++

$(TARGET) : $(OBJECTS)
	$(CXX) -o $(TARGET) $(OBJECTS) $(LDFLAGS)
	
main.o : ../src/main.c
	$(CXX) $(CFLAGS) -c ../src/main.c

DJI_Pro_App.o : ../src/DJI_LIB/DJI_Pro_App.c
	$(CXX) $(CFLAGS) -c ../src/DJI_LIB/DJI_Pro_App.c
	
DJI_Pro_Hw.o : ../src/DJI_LIB/DJI_Pro_Hw.c
	$(CXX) $(CFLAGS) -c ../src/DJI_LIB/DJI_Pro_Hw.c

DJI_Pro_Link.o : ../src/DJI_LIB/DJI_Pro_Link.c
	$(CXX) $(CFLAGS) -c ../src/DJI_LIB/DJI_Pro_Link.c

DJI_Pro_Sample.o : ../src/DJI_Pro_Sample.c
	$(CXX) $(CFLAGS) -c ../src/DJI_Pro_Sample.c
	
DJI_Pro_Codec.o : ../src/DJI_LIB/DJI_Pro_Codec.c
	$(CXX) $(CFLAGS) -c ../src/DJI_LIB/DJI_Pro_Codec.c

DJI_Pro_Rmu.o: ../src/DJI_LIB/DJI_Pro_Rmu.c
	$(CXX) $(CFLAGS) -c ../src/DJI_LIB/DJI_Pro_Rmu.c

	
clean:
	-rm *.o
	-rm $(TARGET)
