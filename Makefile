CXX = g++
CXXFLAGS = -std=c++11 -Wall
LDFLAGS =

SRCDIR = src
TESTDIR = tests
OBJDIR = obj
INCDIR = include

MAIN = main
TEST = test_cipher

OBJS = $(OBJDIR)/Cipher.o
TESTOBJS = $(OBJDIR)/test_cipher.o

all: $(MAIN)

$(MAIN): $(OBJS) $(MAIN).cpp
    $(CXX) $(CXXFLAGS) -I$(INCDIR) $^ -o $@

test: $(OBJS) $(TESTDIR)/$(TEST).cpp
    $(CXX) $(CXXFLAGS) -I$(INCDIR) $^ -o $(TEST)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
    mkdir -p $(OBJDIR)
    $(CXX) $(CXXFLAGS) -I$(INCDIR) -c $< -o $@

clean:
    rm -rf $(OBJDIR) $(MAIN) $(TEST)

