      .data
_a:   .WORD 0
_b:   .WORD 0
      .text
      READ R1 0            /* line 3 */
      ADDI R2 R0 #0        /* line 5 */
      SUBI R3 R1 #10       /* line 6 */
      STORE R1 _b
      SGT R3 0
      ANDB R3 R3 R3
      BEQ L3
      LOAD R1 _b
      MULI R3 R1 #2        /* line 7 */
      STORE R1 _b
      SUBI R4 R3 #10
      ADD R2 R0 R4
      BT L2
L3:   LOAD R1 _b
      SUBI R4 R1 #0        /* line 8 */
      STORE R1 _b
      SGT R4 0
      ANDB R4 R4 R4
      BEQ L4
      LOAD R1 _b
      ADD R2 R0 R1         /* line 9 */
      STORE R1 _b
      BT L2
L4:   ADDI R2 R0 #0        /* line 10 */
      BT L2
L2:   MULI R1 R2 #2        /* line 11 */
      ADD R2 R0 R1
      WRITE R2 0           /* line 13 */
      STORE R2 _a
      HALT
