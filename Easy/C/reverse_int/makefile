CXX=g++
GCC=gcc
CXXFLAGS = -std=c++11

%.exe: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

%.exe: %.c
	$(GCC) $< -o $@

clean:
	rm -f *.exe