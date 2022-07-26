void io_hlt(void);
void write_mem8(int addr,int data);

void HariMain(void){
    int i;
    // 这里，我们可以使用指针的方式 进行赋值
    char *p;
    for(i=0xa0000;i<=0xaffff;i++){
        int x=i&0x0f;
        p=i;
        *p=i&0x0f;
        // write_mem8(i,x);
        // 把每一个地址都写上15
    }
    for(;;){
        io_hlt();
    }
}