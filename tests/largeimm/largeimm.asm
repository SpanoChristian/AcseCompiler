      .data
_a:   .WORD 0
_b:   .WORD 0
_c:   .WORD 0
      .text
      ADDI R1 R0 #0        /* line 4 */
      WRITE R1 0
      ADDI R1 R0 #100      /* line 5 */
      WRITE R1 0
      ADDI R1 R0 #1000     /* line 6 */
      WRITE R1 0
      ADDI R1 R0 #32767    /* line 7 */
      WRITE R1 0
      ADDI R1 R0 #1        /* line 8 */
      SHLI R1 R1 #16
      ADDI R1 R1 #-32768
      WRITE R1 0
      ADDI R1 R0 #1        /* line 9 */
      SHLI R1 R1 #16
      ADDI R1 R1 #-15536
      WRITE R1 0
      ADDI R1 R0 #763      /* line 10 */
      SHLI R1 R1 #16
      ADDI R1 R1 #-3968
      WRITE R1 0
      ADDI R1 R0 #-32768   /* line 11 */
      SHLI R1 R1 #16
      ADDI R1 R1 #-1
      WRITE R1 0
      ADDI R1 R0 #-100     /* line 12 */
      WRITE R1 0
      ADDI R1 R0 #-1000    /* line 13 */
      WRITE R1 0
      ADDI R1 R0 #-32768   /* line 14 */
      WRITE R1 0
      ADDI R1 R0 #-1       /* line 15 */
      SHLI R1 R1 #16
      ADDI R1 R1 #32767
      WRITE R1 0
      ADDI R1 R0 #-1       /* line 16 */
      SHLI R1 R1 #16
      ADDI R1 R1 #15536
      WRITE R1 0
      ADDI R1 R0 #-763     /* line 17 */
      SHLI R1 R1 #16
      ADDI R1 R1 #3968
      WRITE R1 0
      ADDI R1 R0 #-32768   /* line 18 */
      SHLI R1 R1 #16
      WRITE R1 0
      ADDI R1 R0 #1        /* line 21 */
      ADDI R2 R0 #-32768   /* line 22 */
      SHLI R2 R2 #16
      ADDI R2 R2 #-1
      ADDI R3 R0 #0        /* line 23 */
      STORE R3 _c
      ADDI R3 R0 #-32768   /* line 24 */
      SHLI R3 R3 #16
      ADDI R3 R3 #-2
      ADD R4 R1 R3
      WRITE R4 0
      ADDI R4 R0 #-32768   /* line 25 */
      SHLI R4 R4 #16
      SUB R3 R1 R4
      WRITE R3 0
      ADDI R3 R0 #-32768   /* line 26 */
      SHLI R3 R3 #16
      ADDI R3 R3 #-1
      MUL R4 R1 R3
      WRITE R4 0
      ADDI R4 R0 #-32768   /* line 27 */
      SHLI R4 R4 #16
      ADDI R4 R4 #-1
      DIV R3 R2 R4
      WRITE R3 0
      ADDI R3 R0 #-32768   /* line 28 */
      SHLI R3 R3 #16
      ADDI R3 R3 #-1
      ANDL R4 R1 R3
      STORE R1 _a
      WRITE R4 0
      ADDI R2 R0 #763      /* line 29 */
      SHLI R2 R2 #16
      ADDI R2 R2 #-3968
      ADDI R4 R0 #-32768   /* line 30 */
      SHLI R4 R4 #16
      ADDI R4 R4 #-1
      ANDB R1 R2 R4
      WRITE R1 0
      ADDI R1 R0 #-32768   /* line 31 */
      SHLI R1 R1 #16
      ADDI R1 R1 #-1
      ORB R4 R2 R1
      STORE R2 _b
      WRITE R4 0
      HALT                 /* line 32 */
