void io_hlt(void);
void write_mem8(int addr,int data);

void HariMain(void){
    int i;
    // 
    for(i=0xa0000;i<=0xaffff;i++){
        int x=i&0x0f;
        write_mem8(i,x);
        // 把每一个地址都写上15
    }
    for(;;){
        io_hlt();
    }
}