evince:branch.eps
	evince branch.eps
branch.ll:branch.c
	clang -emit-llvm -S -o branch.ll branch.c
cfg.main.dot:branch.ll
	opt -S branch.ll -dot-cfg
branch.eps:.main.dot
	dot -Teps .main.dot -o branch.eps


