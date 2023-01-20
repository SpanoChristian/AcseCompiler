      .data
_x:   .WORD 0
      .text
      READ R1 0            /* line 3 */
      STORE R1 _x
L1:   ADDI R2 R0 #0        /* line 5 */
      BEQ L2
      ADDI R2 R0 #0        /* line 6 */
      WRITE R2 0
      BT L1                /* line 7 */
L2:   LOAD R1 _x
      WRITE R1 0           /* line 9 */
      STORE R1 _x
      HALT                 /* line 10 */
