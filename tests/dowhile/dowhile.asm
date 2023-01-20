      .data
_a:   .WORD 0
_b:   .WORD 0
      .text
      ADDI R1 R0 #0        /* line 3 */
      STORE R1 _a
      READ R2 0            /* line 4 */
      STORE R2 _b
L2:   LOAD R1 _a
      ADDI R3 R1 #1        /* line 8 */
      ADD R1 R0 R3
      STORE R1 _a
      LOAD R2 _b
      SUBI R3 R2 #1        /* line 9 */
      ADD R2 R0 R3
      SUBI R3 R2 #0        /* line 10 */
      STORE R2 _b
      SGT R3 0
      ANDB R3 R3 R3
      BNE L2
      LOAD R1 _a
      WRITE R1 0           /* line 12 */
      STORE R1 _a
      HALT                 /* line 13 */
