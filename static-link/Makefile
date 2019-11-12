include ../mk.rules

.DEFAULT_GOAL := main.bin

main.bin: func.o main.o
	$(Q)gcc -no-pie -m32 $^ -o $@

%.o.elf: %.o
	$(Q)readelf -a $< > $@

view-main.o.rel: main.o
	$(Q)dd if=main.o of=rel.text.bin bs=1 skip=$$((0x268)) count=$$((0x28))
	$(Q)echo "    OFFSET   TYPE SYM"
	$(Q)hexdump -ve '"%02_ax: " 1/4 "%08x " 2/1 " %02x " 2/1 " ." "\n"' rel.text.bin
