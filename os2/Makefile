default :
	make.exe img

ipl.bin: ipl.nas Makefile
	nask.exe ipl.nas ipl.bin ipl.lst
# 同级就是进行检查是不是没有材料
helloos.img : ipl.bin Makefile
	edimg.exe   imgin:fdimg0at.tek \
		wbinimg src:ipl.bin len:512 from:0 to:0   imgout:helloos.img

asm :
	make.exe -r ipl.bin

img :
	make.exe -r helloos.img

run :
	make.exe img
	copy helloos.img qemu\fdimage0.bin
	/make.exe -C qemu

install :
	make.exe img
	../z_tools/imgtol.com w a: helloos.img

clean :
	-del ipl.bin
	-del ipl.lst

src_only :
	make.exe clean
	-del helloos.img