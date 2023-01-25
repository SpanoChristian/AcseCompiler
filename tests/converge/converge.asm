      .data
_a:   .WORD 0
_b:   .WORD 0
      .text
      ADDI R1 R0 #31       /* line 2 */
      STORE R1 _a
L2:   LOAD R1 _a
      ADD R2 R0 R1         /* line 4 */
      DIVI R3 R1 #3        /* line 5 */
      ADD R1 R0 R3
      WRITE R1 0           /* line 6 */
      SUB R0 R1 R2         /* line 7 */
      STORE R1 _a
      BNE L2
L3:   LOAD R1 _a
      ADD R2 R0 R1         /* line 9 */
      WRITE R1 0           /* line 10 */
      SUB R0 R1 R2         /* line 11 */
      STORE R1 _a
      BNE L3
      HALT                 /* line 12 */
