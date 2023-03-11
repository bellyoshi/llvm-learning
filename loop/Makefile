evince: loop.eps
	evince loop.eps
loop.eps:.loop.dot
	dot -Teps .loop.dot -o loop.eps
.loop.dot:loop.ll
	opt -S loop.ll -dot-cfg

loop.ll:loop.c
	clang -emit-llvm -S -o loop.ll loop.c
loop_reg.ll:loop.ll
	opt -S -mem2reg loop.ll -o loop_reg.ll
