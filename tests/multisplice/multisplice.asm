      .data
_x:   .WORD 524280
      .text
      ADDI R1 R0 #1016     /* line 3 */
      SHLI R1 R1 #16
      ADDI R1 R1 #7
      LOAD R2 _x
      ANDB R3 R2 R1
      WRITE R3 0
      ANDBI R3 R2 #2040    /* line 4 */
      WRITE R3 0
      ADDI R3 R0 #8        /* line 5 */
      SHLI R3 R3 #16
      ADDI R3 R3 #-8192
      ANDB R1 R2 R3
      WRITE R1 0
      ADDI R1 R0 #8        /* line 6 */
      SHLI R1 R1 #16
      ADDI R1 R1 #-6152
      ANDB R3 R2 R1
      STORE R2 _x
      WRITE R3 0
      HALT
