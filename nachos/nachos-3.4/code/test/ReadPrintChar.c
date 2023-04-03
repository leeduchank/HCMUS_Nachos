#include "syscall.h"

int main()
{

char a ;
PrintString("Enter the character: ");
a = ReadChar();
PrintString("Entered the character: ");
PrintChar(a);
Halt();
}
