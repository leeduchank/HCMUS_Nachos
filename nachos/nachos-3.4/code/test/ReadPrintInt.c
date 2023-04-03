#include "syscall.h"

int main(){
int a ;
PrintString("Enter the number: ");
a = ReadInt();
PrintString("Entered the number: ");
PrintInt(a);

Halt();
}
