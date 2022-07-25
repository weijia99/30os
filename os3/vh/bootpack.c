void io_hlt(void);
// 申明使用的函数名称，这是汇编的函数
void HariMain(void){
    fin:
    io_hlt();//执行函数
    goto fin;
}