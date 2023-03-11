CC = clang
run: hoge.bc
	lli -force-interpreter hoge.bc
hoge: hoge.o
	$(CC) -o hoge hoge.o
hoge.o:	hoge.il
	llc -filetype=obj -o hoge.o hoge.il
#	$(CC) -c hoge.c -o hoge.o
hoge.il: hoge.c
	$(CC) -S -emit-llvm -c hoge.c -o hoge.il

hoge.bc: hoge.il
	opt -O3 -o hoge.bc hoge.il
#	llvm-as -o hoge.bc hoge.il
#	$(CC) -emit-llvm -c hoge.c -o hoge.bc
hoge.s: hoge.bc
	llc -o hoge.s hoge.bc
dump: hoge.o
	llvm-objdump -d hoge.o
