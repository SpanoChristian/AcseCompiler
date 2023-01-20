      .data
_s:   .WORD 0
_x:   .WORD 0
      .text
      READ R1 0            /* line 4 */
      SUBI R2 R1 #0        /* line 6 */
      STORE R1 _x
      SGE R2 0
      ANDB R2 R2 R2
      BEQ L2
L3:   LOAD R1 _x
      ANDB R1 R1 R1        /* line 7 */
      STORE R1 _x
      BEQ L4
      LOAD R2 _s
      LOAD R1 _x
      ADD R3 R2 R1         /* line 8 */
      ADD R2 R0 R3
      STORE R2 _s
      SUBI R3 R1 #1        /* line 9 */
      ADD R1 R0 R3
      STORE R1 _x
      BT L3                /* line 10 */
L4:   LOAD R2 _s
      WRITE R2 0           /* line 11 */
      STORE R2 _s
      BT L5                /* line 12 */
L2:   ADDI R2 R0 #1        /* line 13 */
      WRITE R2 0
L5:   HALT                 /* line 15 */
