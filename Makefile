INCS = expr.hpp parse.hpp Env.hpp cont.hpp value.hpp pointer.hpp step.hpp catch.hpp API.hpp

LIBOBJS = expr.o parse.o Env.o cont.o value.o step.o API.o
OBJS = main.o $(LIBOBJS)

CXX = clang++
CXXFLAGS = -std=c++17

all: msdscript libmsdscript.a

msdscript: $(OBJS)
		$(CXX) $(CXXFLAGS) -o msdscript $(OBJS)

libmsdscript.a: $(LIBOBJS)
		$(AR) $(ARFLAGS) libmsdscript.a $(LIBOBJS)

main.o: $(INCS)

expr.o: $(INCS)

parse.o: $(INCS)

Env.o: $(INCS)

cont.o: $(INCS)

value.o: $(INCS)

step.o: $(INCS)

API.o: $(INCS)