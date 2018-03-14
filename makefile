MAIN_TARGET = main

.PHONY: all display compile_run

all: compile_run

display:
	@echo MAIN_TARGET = $(MAIN_TARGET)

compile_run: ${MAIN_TARGET}.py
	python3 $<