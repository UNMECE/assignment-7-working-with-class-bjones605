CXX = g++

CXXFLAGS = -Wall -std=c++11

TARGET = main

OBJS = e_field.o m_field.o main.o

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

e_field.o: e_field.cpp e_field.h
	$(CXX) $(CXXFLAGS) -c e_field.cpp

m_field.o: m_field.cpp m_field.h
	$(CXX) $(CXXFLAGS) -c m_field.cpp

main.o: main.cpp e_field.h m_field.h
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm -f $(TARGET) $(OBJS)
