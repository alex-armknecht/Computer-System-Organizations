            global      _findGCD
            extern      _printf         ;import C function
            extern      _scanf          ;import C function
            default     rel

            section     .text
_findGCD:                                  ; start program

begin: 
    ;xor     rax,rax                     ; sets value to all zeros
    ;xor     rcx,rcx                     ; sets value to all zeros
    mov     rax,         3113041662      ; move first number into rax register
    mov     rcx,         11570925        ; move second number into rbx register

gcd:
    ;cqo
    mov     rdx,         0               ; set up for div
    div     rcx                          ; divide rax by rcx
    mov     r10,         0
    cmp     rdx,         r10             ; check if remainder is zero, if so the GCD is found
    je      end                          ; if zero then jump to the end.
    mov     rax,         rcx             ; move last divisor to rax register
    mov     rcx,         rdx             ; move the remainder to rcx register
    jmp     gcd                          ; repeate loop

end:
    mov     rsi,         rcx  
    lea     rdi,         [output]    
    push    rsi
    call    _printf                     ; print the result (gcd) to port stdout

done:
    pop     rax
    ret     


            segment  .data
output:  db     0xA, "the gcd is: %d ", 0xA, 0