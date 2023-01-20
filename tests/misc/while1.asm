      .data
_a:   .SPACE 10
_x:   .WORD 0
_k:   .WORD 0
      .text
L3:   LOAD R1 _k
      SUBI R2 R1 #10       /* line 5 */
      STORE R1 _k
      SLT R2 0
      ANDB R2 R2 R2
      BEQ L4
      READ R2 0            /* line 6 */
      MOVA R3 _a           /* line 7 */
      LOAD R1 _k
      ADD R3 R3 R1
      ADD (R3) R0 R2
      STORE R2 _x
      ADDI R3 R1 #1        /* line 8 */
      ADD R1 R0 R3
      STORE R1 _k
      BT L3                /* line 9 */
L4:   MOVA R3 _a           /* line 10 */
      ADDI R3 R3 #9
      ADD R4 R0 (R3)
      ADD R2 R0 R4
      STORE R2 _x
      ADDI R1 R0 #0        /* line 13 */
      STORE R1 _k
L5:   ADDI R4 R0 #1        /* line 14 */
      BEQ L6
      MOVA R4 _a           /* line 17 */
      LOAD R1 _k
      ADD R4 R4 R1
      STORE R1 _k
      ADD R3 R0 (R4)
      LOAD R2 _x
      SUB R4 R2 R3
      STORE R2 _x
      SEQ R4 0
      ANDB R4 R4 R4
      BEQ L7
      LOAD R1 _k
      WRITE R1 0           /* line 18 */
      STORE R1 _k
      HALT                 /* line 19 */
L7:   LOAD R1 _k
      ADDI R4 R1 #1        /* line 21 */
      ADD R1 R0 R4
      STORE R1 _k
      BT L5                /* line 22 */
L6:   HALT                 /* line 23 */
