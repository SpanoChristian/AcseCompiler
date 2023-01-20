      .data
_a:   .WORD 0
_b:   .WORD 0
      .text
      ADDI R1 R0 #-1       /* line 4 */
      ADDI R2 R0 #31       /* line 5 */
      ADDI R3 R0 #-1       /* line 6 */
      WRITE R3 0
      ADDI R3 R0 #-1       /* line 7 */
      SHR R4 R3 R2
      WRITE R4 0
      SHRI R4 R1 #31       /* line 8 */
      WRITE R4 0
      SHR R4 R1 R2         /* line 9 */
      WRITE R4 0
      ADDI R2 R0 #32       /* line 11 */
      ADDI R4 R0 #-1       /* line 12 */
      WRITE R4 0
      ADDI R4 R0 #-1       /* line 13 */
      SHR R3 R4 R2
      WRITE R3 0
      SHRI R3 R1 #32       /* line 14 */
      WRITE R3 0
      SHR R3 R1 R2         /* line 15 */
      WRITE R3 0
      ADDI R2 R0 #33       /* line 17 */
      ADDI R3 R0 #-1       /* line 18 */
      WRITE R3 0
      ADDI R3 R0 #-1       /* line 19 */
      SHR R4 R3 R2
      WRITE R4 0
      SHRI R4 R1 #33       /* line 20 */
      WRITE R4 0
      SHR R4 R1 R2         /* line 21 */
      WRITE R4 0
      ADDI R1 R0 #16384    /* line 24 */
      SHLI R1 R1 #16
      ADDI R2 R0 #31       /* line 25 */
      ADDI R4 R0 #0        /* line 26 */
      WRITE R4 0
      ADDI R4 R0 #16384    /* line 27 */
      SHLI R4 R4 #16
      SHR R3 R4 R2
      WRITE R3 0
      SHRI R3 R1 #31       /* line 28 */
      WRITE R3 0
      SHR R3 R1 R2         /* line 29 */
      WRITE R3 0
      ADDI R2 R0 #32       /* line 31 */
      ADDI R3 R0 #0        /* line 32 */
      WRITE R3 0
      ADDI R3 R0 #16384    /* line 33 */
      SHLI R3 R3 #16
      SHR R4 R3 R2
      WRITE R4 0
      SHRI R4 R1 #32       /* line 34 */
      WRITE R4 0
      SHR R4 R1 R2         /* line 35 */
      WRITE R4 0
      ADDI R2 R0 #33       /* line 37 */
      ADDI R4 R0 #0        /* line 38 */
      WRITE R4 0
      ADDI R4 R0 #16384    /* line 39 */
      SHLI R4 R4 #16
      SHR R3 R4 R2
      WRITE R3 0
      SHRI R3 R1 #33       /* line 40 */
      WRITE R3 0
      SHR R3 R1 R2         /* line 41 */
      WRITE R3 0
      ADDI R1 R0 #-1       /* line 44 */
      ADDI R2 R0 #31       /* line 45 */
      ADDI R3 R0 #-32768   /* line 46 */
      SHLI R3 R3 #16
      WRITE R3 0
      ADDI R3 R0 #-1       /* line 47 */
      SHL R4 R3 R2
      WRITE R4 0
      SHLI R4 R1 #31       /* line 48 */
      WRITE R4 0
      SHL R4 R1 R2         /* line 49 */
      WRITE R4 0
      ADDI R2 R0 #32       /* line 52 */
      ADDI R4 R0 #0        /* line 53 */
      WRITE R4 0
      ADDI R4 R0 #-1       /* line 54 */
      SHL R3 R4 R2
      WRITE R3 0
      SHLI R3 R1 #32       /* line 55 */
      WRITE R3 0
      SHL R3 R1 R2         /* line 56 */
      WRITE R3 0
      ADDI R2 R0 #33       /* line 58 */
      ADDI R3 R0 #0        /* line 59 */
      WRITE R3 0
      ADDI R3 R0 #-1       /* line 60 */
      SHL R4 R3 R2
      WRITE R4 0
      SHLI R4 R1 #33       /* line 61 */
      WRITE R4 0
      SHL R4 R1 R2         /* line 62 */
      WRITE R4 0
      ADDI R1 R0 #1        /* line 65 */
      ADDI R2 R0 #31       /* line 66 */
      ADDI R4 R0 #-32768   /* line 67 */
      SHLI R4 R4 #16
      WRITE R4 0
      ADDI R4 R0 #1        /* line 68 */
      SHL R3 R4 R2
      WRITE R3 0
      SHLI R3 R1 #31       /* line 69 */
      WRITE R3 0
      SHL R3 R1 R2         /* line 70 */
      WRITE R3 0
      ADDI R2 R0 #32       /* line 73 */
      ADDI R3 R0 #0        /* line 74 */
      WRITE R3 0
      ADDI R3 R0 #1        /* line 75 */
      SHL R4 R3 R2
      WRITE R4 0
      SHLI R4 R1 #32       /* line 76 */
      WRITE R4 0
      SHL R4 R1 R2         /* line 77 */
      WRITE R4 0
      ADDI R2 R0 #33       /* line 79 */
      ADDI R4 R0 #0        /* line 80 */
      WRITE R4 0
      ADDI R4 R0 #1        /* line 81 */
      SHL R3 R4 R2
      WRITE R3 0
      SHLI R3 R1 #33       /* line 82 */
      WRITE R3 0
      SHL R3 R1 R2         /* line 83 */
      STORE R2 _b
      STORE R1 _a
      WRITE R3 0
      HALT                 /* line 84 */
