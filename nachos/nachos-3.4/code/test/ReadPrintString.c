#include "syscall.h"


int main(){
char buffer [256];
 	PrintString("Enter your string: ");
    	ReadString(buffer);

    	PrintString("\nEntered String: ");
    	PrintString(buffer);

Halt();

}
