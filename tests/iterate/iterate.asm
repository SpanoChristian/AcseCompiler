      .data
_x:   .WORD 0
_y:   .WORD 0
      .text
      READ R1 0            /* line 3 */
      STORE R1 _x
      READ R2 0            /* line 4 */
      STORE R2 _y
      ADDI R3 R0 #0        /* line 6 */
      BT L2
L3:   LOAD R1 _x
      SUBI R5 R1 #1        /* line 7 */
      ADD R1 R0 R5
      STORE R1 _x
      LOAD R2 _y
      ADDI R5 R2 #1        /* line 8 */
      ADD R2 R0 R5
      STORE R2 _y
      ADDI R3 R3 #1        /* line 9 */
      BT L4
L2:   LOAD R2 _y
      ADDI R5 R2 #5        /* line 10 */
      STORE R2 _y
      ADD R4 R0 R5
L4:   LOAD R1 _x
      SUBI R5 R1 #0        /* line 11 */
      STORE R1 _x
      SLE R5 0
      SUBI R1 R5 #0
      SNE R1 0
      BNE L5
      SUB R1 R3 R4
      SLT R1 0
      BNE L3
L5:   LOAD R2 _y
      WRITE R2 0           /* line 13 */
      STORE R2 _y
      HALT
