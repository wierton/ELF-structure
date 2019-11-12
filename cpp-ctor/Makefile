include ../mk.rules

.DEFAULT_GOAL := cpp-nontrival-init.cxx.bin

%.o: %.cc
	$(Q)g++ -c -no-pie $^ -o $@

%.cxx.bin: %.o
	$(Q)g++ -no-pie $^ -o $@
