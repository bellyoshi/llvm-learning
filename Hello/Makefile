run:	helloworld
	./helloworld
helloworld: helloworld.s
	clang helloworld.s -o helloworld
helloworld.s:	helloworld.ll
	llc helloworld.ll
helloworld.ll:	helloworld.c
	clang -S -emit-llvm -O3 helloworld.c

