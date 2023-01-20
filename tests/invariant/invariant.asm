      .data
_a:   .WORD 1
_c:   .SPACE 5
_i:   .WORD 0
      .text
      MOVA R1 _c           /* line 5 */
      ADDI R2 R0 #0
      ADD (R1) R0 R2
      MOVA R1 _c           /* line 6 */
      ADDI R1 R1 #1
      ADDI R2 R0 #1
      ADD (R1) R0 R2
      MOVA R1 _c           /* line 7 */
      ADDI R1 R1 #2
      ADDI R2 R0 #2
      ADD (R1) R0 R2
      MOVA R1 _c           /* line 8 */
      ADDI R1 R1 #3
      ADDI R2 R0 #3
      ADD (R1) R0 R2
      MOVA R1 _c           /* line 9 */
      ADDI R1 R1 #4
      ADDI R2 R0 #4
      ADD (R1) R0 R2
      BT L3                /* line 11 */
L4:   LOAD R1 _i
      DIVI R4 R1 #2
      MULI R5 R4 #2
      SUB R4 R5 R1
      STORE R1 _i
      SEQ R4 0
      BT L5
L3:   ADDI R2 R0 #1
      ADDI R3 R0 #0
L6:   SUBI R5 R3 #5
      SLT R5 0
      BEQ L7
      MOVA R5 _c
      ADD R5 R5 R3
      ADD R6 R0 (R5)
      ADD R1 R0 R6
      STORE R1 _i
      BT L4
L5:   ANDB R4 R4 R4
      BNE L8
      ADD R2 R0 R0
      BT L7
L8:   ADDI R3 R3 #1
      BT L6
L7:   WRITE R2 0
      BT L9                /* line 12 */
L10:  LOAD R1 _i
      LOAD R4 _a
      ADD R6 R1 R4
      STORE R4 _a
      STORE R1 _i
      SUBI R4 R6 #0
      SGT R4 0
      BT L11
L9:   ADDI R2 R0 #1
      ADDI R3 R0 #0
L12:  SUBI R6 R3 #5
      SLT R6 0
      BEQ L13
      MOVA R6 _c
      ADD R6 R6 R3
      ADD R5 R0 (R6)
      ADD R1 R0 R5
      STORE R1 _i
      BT L10
L11:  ANDB R4 R4 R4
      BNE L14
      ADD R2 R0 R0
      BT L13
L14:  ADDI R3 R3 #1
      BT L12
L13:  WRITE R2 0
      BT L15               /* line 13 */
L16:  LOAD R1 _i
      SUBI R4 R1 #3
      STORE R1 _i
      SLT R4 0
      BT L17
L15:  ADDI R2 R0 #1
      ADDI R3 R0 #0
L18:  SUBI R5 R3 #5
      SLT R5 0
      BEQ L19
      MOVA R5 _c
      ADD R5 R5 R3
      ADD R6 R0 (R5)
      ADD R1 R0 R6
      STORE R1 _i
      BT L16
L17:  ANDB R4 R4 R4
      BNE L20
      ADD R2 R0 R0
      BT L19
L20:  ADDI R3 R3 #1
      BT L18
L19:  WRITE R2 0
      HALT
