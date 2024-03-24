//concept of code embedding
#include <stdio.h>

int main() {

  asm("movl %ebx, %eax"); /* moves the contents of ebx register to eax */
__asm__("movb %ch, (%ebx)"); /* moves the byte from ch to the memory pointed by ebx */

  
    /* Add 10 and 20 and store result into register %eax */
    __asm__ ( "movl $10, %eax;"
                "movl $20, %ebx;"
                "addl %ebx, %eax;"
    );

    /* Subtract 20 from 10 and store result into register %eax */
    __asm__ ( "movl $10, %eax;"
                    "movl $20, %ebx;"
                    "subl %ebx, %eax;"
    );

    /* Multiply 10 and 20 and store result into register %eax */
    __asm__ ( "movl $10, %eax;"
                    "movl $20, %ebx;"
                    "imull %ebx, %eax;"
    );

    return 0 ;
}
