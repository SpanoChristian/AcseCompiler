      .data
_a:   .WORD 10
_b:   .WORD 20
      .text
      LOAD R1 _a
      ANDB R1 R1 R1        /* line 3 */
      STORE R1 _a
      BEQ L2
      ADDI R2 R0 #1001     /* line 4 */
      WRITE R2 0
      BT L3                /* line 5 */
L2:   ADDI R2 R0 #1002     /* line 6 */
      WRITE R2 0
L3:   LOAD R1 _a
      WRITE R1 0           /* line 9 */
      LOAD R2 _b
      WRITE R2 0           /* line 10 */
      ADDI R1 R0 #9        /* line 11 */
      WRITE R1 0           /* line 12 */
      STORE R1 _a
      WRITE R2 0           /* line 13 */
      STORE R2 _b
      HALT                 /* line 14 */
