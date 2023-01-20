      .data
_a:   .WORD 0
_b:   .WORD 0
_c:   .WORD 0
_d:   .WORD 0
      .text
      ADDI R1 R0 #-100     /* line 3 */
      ADDI R2 R0 #5        /* line 4 */
      ADDI R3 R0 #100      /* line 5 */
      ADDI R4 R0 #-5       /* line 6 */
      ADDI R5 R0 #-20      /* line 9 */
      WRITE R5 0
      ADDI R5 R0 #-100     /* line 10 */
      DIV R6 R5 R2
      WRITE R6 0
      DIVI R6 R1 #5        /* line 11 */
      WRITE R6 0
      DIV R6 R1 R2         /* line 12 */
      WRITE R6 0
      ADDI R6 R0 #-20      /* line 14 */
      WRITE R6 0
      ADDI R6 R0 #100      /* line 15 */
      DIV R5 R6 R4
      WRITE R5 0
      DIVI R5 R3 #-5       /* line 16 */
      WRITE R5 0
      DIV R5 R3 R4         /* line 17 */
      STORE R4 _d
      STORE R3 _c
      WRITE R5 0
      ADDI R5 R0 #-4       /* line 20 */
      WRITE R5 0
      ADDI R5 R0 #-100     /* line 21 */
      SHR R3 R5 R2
      WRITE R3 0
      SHRI R3 R1 #5        /* line 22 */
      WRITE R3 0
      SHR R3 R1 R2         /* line 23 */
      WRITE R3 0
      ADDI R2 R0 #6        /* line 26 */
      ADDI R3 R0 #-2       /* line 27 */
      WRITE R3 0
      ADDI R3 R0 #-100     /* line 28 */
      SHR R5 R3 R2
      WRITE R5 0
      SHRI R5 R1 #6        /* line 29 */
      WRITE R5 0
      SHR R5 R1 R2         /* line 30 */
      WRITE R5 0
      ADDI R2 R0 #31       /* line 33 */
      ADDI R5 R0 #-1       /* line 34 */
      WRITE R5 0
      ADDI R5 R0 #-100     /* line 35 */
      SHR R3 R5 R2
      WRITE R3 0
      SHRI R3 R1 #31       /* line 36 */
      WRITE R3 0
      SHR R3 R1 R2         /* line 37 */
      WRITE R3 0
      ADDI R2 R0 #32       /* line 39 */
      ADDI R3 R0 #-1       /* line 40 */
      WRITE R3 0
      ADDI R3 R0 #-100     /* line 41 */
      SHR R5 R3 R2
      WRITE R5 0
      SHRI R5 R1 #32       /* line 42 */
      WRITE R5 0
      SHR R5 R1 R2         /* line 43 */
      WRITE R5 0
      ADDI R2 R0 #33       /* line 45 */
      ADDI R5 R0 #-1       /* line 46 */
      WRITE R5 0
      ADDI R5 R0 #-100     /* line 47 */
      SHR R3 R5 R2
      WRITE R3 0
      SHRI R3 R1 #33       /* line 48 */
      WRITE R3 0
      SHR R3 R1 R2         /* line 49 */
      STORE R2 _b
      STORE R1 _a
      WRITE R3 0
      HALT                 /* line 50 */
