#!/bin/sh

count=0
for i in 0 14 16 22 23 24 25 27 28 29; do
  dd if=hello.bin of=shdr.bin bs=1 \
    skip=$((5976+$i*40)) \
    seek=$(($count*40)) \
    count=$((40));
  count=$(($count+1))
done
# hexdump -v -e '5/4 "%08x " " "' -e '20/1 "%_p" "\n"' shdr.bin
hexdump -v -e '20/1 "" "00*40: "' -e '5/4 "%08x " "\n"' shdr.bin
