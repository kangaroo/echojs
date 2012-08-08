TOPDIR=$(shell pwd)/..
NODE_PATH=$(TOPDIR)/node-llvm/build/default:$(TOPDIR)/lib/coffee:$(TOPDIR)/lib:$(TOPDIR)/esprima:$(TOPDIR)/escodegen

check: check-llvm test-foo test-hello
	./hello.js.exe
	./foo.js.exe

check-llvm:
	@coffee -c terminal.coffee
	@coffee -c echo-assert.coffee
	@NODE_PATH=$(NODE_PATH):. coffee llvm-test.coffee

test-foo:
	@echo [ejs] foo.js.exe
	@NODE_PATH=$(NODE_PATH) $(TOPDIR)/ejs foo.js

test-hello:
	@echo [ejs] hello.js.exe
	@NODE_PATH=$(NODE_PATH) $(TOPDIR)/ejs hello.js

test-hello2:
	@echo [ejs] hello2.js.exe
	@NODE_PATH=$(NODE_PATH) $(TOPDIR)/ejs hello2.js

test-set:
	NODE_PATH=$(NODE_PATH) coffee ../lib/set.coffee

run-node:
	NODE_PATH=$(NODE_PATH) node

clean:
	rm -f *.o *.exe
