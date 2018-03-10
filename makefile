MAIN_TARGET = main
ALL_CPP = $(wildcard *.cpp)

.PHONY: all display run clean

all: compile run

display:
	@echo MAIN_TARGET = $(MAIN_TARGET)
	@echo ALL_CPP = $(ALL_CPP)
	
${MAIN_TARGET}.out: ${ALL_CPP}
	g++ -std=c++11 $^ -o $@
	
compile: ${MAIN_TARGET}.out

run: ${MAIN_TARGET}.out
	./$<

clean:
	rm -f $(MAIN_TARGET).out