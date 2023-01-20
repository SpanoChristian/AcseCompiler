      .data
_a:   .WORD 0
_b:   .WORD 0
      .text
      READ R1 0            /* line 5 */
      READ R2 0            /* line 6 */
      ADDI R3 R0 #8        /* line 8 */
      SHLI R3 R3 #16
      ADDI R3 R3 #25713
      WRITE R3 0
      ADD R3 R1 R2         /* line 10 */
      WRITE R3 0
      SUB R3 R1 R2         /* line 11 */
      WRITE R3 0
      DIV R3 R1 R2         /* line 12 */
      WRITE R3 0
      MUL R3 R1 R2         /* line 13 */
      WRITE R3 0
      ANDB R3 R1 R2        /* line 14 */
      WRITE R3 0
      ORB R3 R1 R2         /* line 15 */
      WRITE R3 0
      ANDL R3 R1 R2        /* line 16 */
      WRITE R3 0
      ORL R3 R1 R2         /* line 17 */
      WRITE R3 0
      ADDI R3 R0 #8        /* line 19 */
      SHLI R3 R3 #16
      ADDI R3 R3 #25714
      WRITE R3 0
      ADDI R3 R1 #5        /* line 21 */
      WRITE R3 0
      SUBI R3 R1 #5        /* line 22 */
      WRITE R3 0
      DIVI R3 R1 #5        /* line 23 */
      WRITE R3 0
      MULI R3 R1 #5        /* line 24 */
      WRITE R3 0
      ANDBI R3 R1 #21930   /* line 25 */
      WRITE R3 0
      ORBI R3 R1 #21930    /* line 26 */
      WRITE R3 0
      ANDLI R3 R1 #0       /* line 27 */
      WRITE R3 0
      ORLI R3 R1 #0        /* line 28 */
      WRITE R3 0
      ANDLI R3 R1 #100     /* line 29 */
      WRITE R3 0
      ORLI R3 R1 #100      /* line 30 */
      STORE R1 _a
      WRITE R3 0
      ADDI R3 R0 #8        /* line 32 */
      SHLI R3 R3 #16
      ADDI R3 R3 #25715
      WRITE R3 0
      ADDI R3 R2 #5        /* line 34 */
      WRITE R3 0
      SUBI R3 R2 #5        /* line 35 */
      NEG R3 R0 R3
      WRITE R3 0
      ADDI R3 R0 #5        /* line 36 */
      DIV R1 R3 R2
      WRITE R1 0
      MULI R1 R2 #5        /* line 37 */
      WRITE R1 0
      ANDBI R1 R2 #21930   /* line 38 */
      WRITE R1 0
      ORBI R1 R2 #21930    /* line 39 */
      WRITE R1 0
      ANDLI R1 R2 #0       /* line 40 */
      WRITE R1 0
      ORLI R1 R2 #0        /* line 41 */
      WRITE R1 0
      ANDLI R1 R2 #100     /* line 42 */
      WRITE R1 0
      ORLI R1 R2 #100      /* line 43 */
      STORE R2 _b
      WRITE R1 0
      ADDI R1 R0 #8        /* line 45 */
      SHLI R1 R1 #16
      ADDI R1 R1 #25716
      WRITE R1 0
      ADDI R1 R0 #15       /* line 47 */
      WRITE R1 0
      ADDI R1 R0 #5        /* line 48 */
      WRITE R1 0
      ADDI R1 R0 #2        /* line 49 */
      WRITE R1 0
      ADDI R1 R0 #50       /* line 50 */
      WRITE R1 0
      ADDI R1 R0 #20490    /* line 51 */
      WRITE R1 0
      ADDI R1 R0 #24570    /* line 52 */
      WRITE R1 0
      ADDI R1 R0 #0        /* line 53 */
      WRITE R1 0
      ADDI R1 R0 #0        /* line 54 */
      WRITE R1 0
      ADDI R1 R0 #0        /* line 55 */
      WRITE R1 0
      ADDI R1 R0 #1        /* line 56 */
      WRITE R1 0
      ADDI R1 R0 #0        /* line 57 */
      WRITE R1 0
      ADDI R1 R0 #1        /* line 58 */
      WRITE R1 0
      ADDI R1 R0 #1        /* line 59 */
      WRITE R1 0
      ADDI R1 R0 #1        /* line 60 */
      WRITE R1 0
      HALT                 /* line 61 */
