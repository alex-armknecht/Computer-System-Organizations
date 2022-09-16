            global      _main
            extern      _printf         ;import C function
            default     rel

            section     .text
_main:                                      ; start program
     mov    rdx,        0x00                ; zero out value of rdx
     mov    rdx,        [value]             ; rdx holds value of bitstring 
     mov    rcx,        0x01                ; value that will be AND with bitstring
     mov    r8,         64                  ; 64 bits and will decrement to stop the loop
start_loop:
     dec    r8                              ; decrease by one
     jz     end                             ; exit loop because have gone through all bits
     pop    rax  
     AND    rax,        rcx                 ; and the two values to see if digit is one or zero
     cmp    rax         rcx
     je     count                           ; increase count if found a 1.
two:
    pop     rax                             ; remove bit that was just assesed. 
    shr     rax                             ; shift bit string over to work on next digit
    push    rax                             ; update bitstring 
    jmp     start_loop                      ; go back to loop
count:
    inc     rdx                             ; increase counter because found a one
    jmp     start_loop                      ; go back to loop
end:
    mov     rdx                             ; final number of ones.
    div     2                               ; divide by two to test if its even
    jz      done_even                       ; number is even so jump to done even.
    jnz     done_odd                        ; number is odd so jump to done odd.
done_even:
    lea     rdi,         [output_for_even]    
    push    rsi
    call    _printf                         ; print the result (parity bit) to port stdout
    pop     rdx
    ret  
done_odd:
    lea     rdi,         [output_for_odd]    
    push    rsi
    call    _printf                         ; print the result (parity bit) to port stdout
    pop     rdx
    ret  
    
                segment  .data
value:  db  0011001100001100110000110011000011001100001100110000110011001111    ; Ox330CC330CC330CCF 
output_for_even:  db     0xA, "the parity bit is: 0 ", 0xA, 
output_for_odd:  db     0xA, "the parity bit is: 0 ", 0xA, 0