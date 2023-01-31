      .data
_a:   .SPACE 5
_i:   .WORD 0
      .text
L2:   LOAD R1 _i
      SUBI R2 R1 #5        /* line 4 */
      STORE R1 _i
      SLT R2 0
      ANDB R2 R2 R2
      BEQ L3
      MOVA R2 _a           /* line 5 */
      LOAD R1 _i
      ADD R2 R2 R1
      ADD (R2) R0 R1
      ADDI R2 R1 #1        /* line 6 */
      ADD R1 R0 R2
      STORE R1 _i
      BT L2                /* line 7 */
L3:   ADDI R1 R0 #4        /* line 9 */
      ADDI R2 R0 #2
L4:   SUB R3 R1 R2
      SGE R3 0
      BEQ L5
      SUB R3 R1 R2
      MOVA R4 _a
      ADD R4 R4 R3
      ADD R3 R0 (R4)
      MOVA R4 _a
      ADD R4 R4 R1
      ADDI R3 R0 #10
      ADD (R4) R0 R3
      SUBI R1 R1 #1
      BT L4
L5:   SUBI R2 R1 #0
      SGE R2 0
      BEQ L6
      MOVA R2 _a
      ADD R2 R2 R1
      ADDI R4 R0 #0
      ADD (R2) R0 R4
      SUBI R1 R1 #1
      BT L5
L6:   MOVA R1 _a           /* line 10 */
      ADD R2 R0 (R1)
      WRITE R2 0
      MOVA R2 _a           /* line 11 */
      ADDI R2 R2 #1
      ADD R1 R0 (R2)
      WRITE R1 0
      MOVA R1 _a           /* line 12 */
      ADDI R1 R1 #2
      ADD R2 R0 (R1)
      WRITE R2 0
      MOVA R2 _a           /* line 13 */
      ADDI R2 R2 #3
      ADD R1 R0 (R2)
      WRITE R1 0
      MOVA R1 _a           /* line 14 */
      ADDI R1 R1 #4
      ADD R2 R0 (R1)
      WRITE R2 0
      MOVA R2 _a           /* line 15 */
      ADDI R2 R2 #5
      ADD R1 R0 (R2)
      WRITE R1 0
      HALT
