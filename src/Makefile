all: build

build:
	cmake -S ./ -B ./build
	cmake --build ./build

rebuild: clean build

install: build
	cp -rf ./build/Forex-analisys.app $(HOME)/Applications/

uninstall:
	rm -rf $(HOME)/Applications/Forex-analisys.app

dvi:
	open -a "Google Chrome" ../README.md

dist: clean
	tar -czf Forex-analisys.tgz ./*

clean:
	find ./ -name "build" -type d -exec rm -rf {} +

cppcheck: build
	@cd build/; make cppcheck

clang-format: build
	@cd build/; make clang-format

.PHONY: all build rebuild unistall clean cppcheck clang-format
