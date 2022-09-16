extern _makeNBOC
extern _printf

section .data
    format db "%d", 10, 0

section.text
start:
    mov   rax, 0
    mov   rbp, 43215    ;bring in value 1
    call  makeNBOC      ;call function with (43215) (answer: CFA80000)
    push  rdi           ;bring in register to hold called value
    lea   rdi, [format] ;load address of format into register to be printed out
    call  printf        ;not sure if we need to do this or not 

    push  (38276)       ;bring in value 2
    call  makeNBOC      ;call function with (38276) (answer: 84950000)
    push  rdi           ;bring in register to hold called value
    lea   rdi, [format] ;load address of format into register to be printed out
    call  printf        ;not sure if we need to do this or not 

    push  (102030)      ;bring in value 3
    call  makeNBOC      ;call function with (102030)  (answer: 8E8E1000)
    push  rdi           ;bring in register to hold called value
    lea   rdi, [format] ;load address of format into register to be printed out
    call  printf        ;not sure if we need to do this or not 

    push  (585764338)   ;bring in value 4
    call  makeNBOC      ;call function with (585764338)  (answer: F20DEA22)
    push  rdi           ;bring in register to hold called value
    lea   rdi, [format] ;load address of format into register to be printed out
    call  printf        ;not sure if we need to do this or not 

    push  (987654321)   ;bring in value 5
    call  makeNBOC      ;call function with (987654321)  (answer: B168DE3A)
    push  rdi           ;bring in register to hold called value
    lea   rdi, [format] ;load address of format into register to be printed out
    call  printf        ;not sure if we need to do this or not 

    jmp   done          ;once value printed, jump to done section

done:
    pop   rax
    pop   rdi           ;undoes push command, removes register
