#target
xcool: lexer.h parser.h error.h auxiliary.o lexer.o AstTree.o parser.o semant.o SymbolTab.o codegen.o main.cpp
	g++ auxiliary.o lexer.o AstTree.o parser.o semant.o SymbolTab.o codegen.o main.cpp -o xcool  -g -std=c++11 

#auxiliary function
auxiliary.o : auxiliary.h auxiliary.cpp
	g++ auxiliary.cpp -c -std=c++11

#error handle
error.h: auxiliary.h

#lexer module
lexer.o : lexer.h error.h lexer.cpp
	g++ lexer.cpp -c -std=c++11

#Abstract syntax tree definition
AstTree.o: AstTree.h AstTree.cpp
	g++ AstTree.cpp -c -std=c++11

#parser module
parser.h: AstTree.h 
parser.o : parser.h error.h auxiliary.h parser.cpp
	g++ parser.cpp -c -std=c++11

#symbol table module
SymbolTab.o: SymbolTab.h SymbolTab.cpp
	g++ SymbolTab.cpp -c -std=c++11

#semant checker module
semant.h: AstTree.h SymbolTab.h
semant.o: semant.h error.h semant.cpp auxiliary.h 
	g++ semant.cpp -c -std=c++11

#code generator module
codegen.h: semant.h
codegen.o: codegen.h codegen.cpp SymbolTab.h auxiliary.h
	g++ codegen.cpp -c -std=c++11
clean:
	rm *.o xcool

