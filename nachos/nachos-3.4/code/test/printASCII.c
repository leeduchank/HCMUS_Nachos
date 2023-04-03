#include "syscall.h"

int main()
{
    int i = 33;

    PrintString("Dec     Char\n");
    for(; i < 127; ++i){
        PrintInt(i);
        PrintString("  ");
        PrintChar(i);
        PrintChar('\n');
    }
    
 
    
    Halt();
}
