#CXX = g++
CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized -g

BINARIES=arrayToStringTest arrayToLinkedListTest \
	addIntToEndOfListTest \
	addIntToStartOfListTest \
	countLinkedListTest

all: ${BINARIES}

tests: ${BINARIES}
	./arrayToStringTest
	./arrayToLinkedListTest
	./addIntToEndOfListTest
	./addIntToStartOfListTest
	./countLinkedListTest

arrayToStringTest: arrayToStringTest.o linkedListFuncs.o tddFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

arrayToLinkedListTest: arrayToLinkedListTest.o linkedListFuncs.o tddFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

countLinkedListTest: countLinkedListTest.o linkedListFuncs.o tddFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

addIntToEndOfListTest: addIntToEndOfListTest.o linkedListFuncs.o tddFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

addIntToStartOfListTest: addIntToStartOfListTest.o linkedListFuncs.o tddFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
