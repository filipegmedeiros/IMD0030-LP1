# -------------------------------
# Author: filipegmedeiros
# Date  : 19/02/19
# -------------------------------

include make/help.mk

PROG = imd0030-lp1


CC      = g++
CFLAGS  = -Wall -std=c++11 -I include
DEBUG   = -g -O0

LINKER   = g++
LFLAGS   = -Wall -std=c++11

SRCDIR   = src
OBJDIR   = build
INCDIR   = include
BINDIR   = bin
DEBUGDIR = debug

rm       = rm -f

SOURCES   := $(wildcard $(SRCDIR)/*.cpp)
INCLUDES  := $(wildcard $(INCDIR)/*.h)
OBJECTS   := $(wildcard $(OBJDIR)/*.o)

DEBUGOBJECTS := $(wildcard $(DEBUGDIR)/$(OBJDIR)/*.o)



compile: $(SOURCES) $(INCLUDES) ##@A-Compilar Compila o programa sem gerar o executável.
	$(CC) $(CFLAGS) -c $^
	@mv *.o $(OBJDIR)

c-debug: $(SOURCES) ##@A-Compilar Compila com as diretrivas -O0 e -g.
	$(CC) $(CFLAGS) $(DEBUG) -c $^
	@mv *.o $(DEBUGDIR)/$(OBJDIR)

link: $(OBJECTS) ##@B-Linkar Linka o programa, gerando um binário executável em ./bin/
	$(CC) $(LFLAGS) -o $(PROG) $^
	@mv $(PROG) $(BINDIR)

l-debug: $(DEBUGOBJECTS) ##@B-Linkar Linka o programa, gerando um binário executável em ./debug/bin/
	$(CC) $(CFLAGS) -o $(PROG) $^
	@mv $(PROG) $(DEBUGDIR)/$(BINDIR)

run: ##@C-Executar Executa os programa em ./bin
	@./$(BINDIR)/$(PROG)

r-debug: ##@C-Executar Executa os programa em ./debug/bin
	@./$(DEBUGDIR)/$(BINDIR)/$(PROG)

all: ##@E-Under-Construction Em construção, use Make Compile, Make Link e Make Run separadamentes.

clean: ##@D-Limpar Use para limpar as pastas bin e build (também do debug).
	$(RM) $(BINDIR)/* $(OBJDIR)/* $(DEBUGDIR)/$(BINDIR)/* $(DEBUGDIR)/$(OBJDIR)/*

.PHONY: clean all
