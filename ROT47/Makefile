CXX = g++
CXXFLAGS = -c -g -std=c++11

PROG = ROTME
HDRS =
SRCS = ROT47.cpp
OBJS = $(SRCS:.cpp=.o)

$(PROG) : $(OBJS)
	$(CXX)  $(OBJS) -o $(PROG)


ROT.o:ROT47.cpp
		$(CXX) $(CXXFLAGS) ROT47.cpp

clean :
		rm -f core $(PROG) *.o
