      .data
_x:   .WORD 0
      .text
      READ R1 0            /* line 2 */
      STORE R1 _x
L1:   LOAD R1 _x
      SUBI R2 R1 #0        /* line 4 */
      STORE R1 _x
      SGT R2 0
      ANDB R2 R2 R2
      BEQ L2
      LOAD R1 _x
      SUBI R2 R1 #20       /* line 5 */
      STORE R1 _x
      SEQ R2 0
      ANDB R2 R2 R2
      BEQ L3
      BT L2                /* line 6 */
L3:   LOAD R1 _x
      SUBI R2 R1 #1        /* line 8 */
      ADD R1 R0 R2
      STORE R1 _x
      BT L1                /* line 9 */
L2:   LOAD R1 _x
      WRITE R1 0           /* line 11 */
      STORE R1 _x
      HALT
