      .data
_a:   .SPACE 10
_b:   .SPACE 10
_c:   .SPACE 10
_i:   .WORD 0
      .text
      ADDI R1 R0 #0        /* line 6 */
      STORE R1 _i
L4:   LOAD R1 _i
      SUBI R2 R1 #10       /* line 7 */
      STORE R1 _i
      SLT R2 0
      ANDB R2 R2 R2
      BEQ L5
      MOVA R2 _c           /* line 8 */
      LOAD R1 _i
      ADD R2 R2 R1
      ADDI R3 R0 #2
      SHLI R3 R3 #16
      ADDI R3 R3 #-31073
      ADD (R2) R0 R3
      MOVA R2 _a           /* line 9 */
      ADD R2 R2 R1
      ADD (R2) R0 R1
      SUBI R2 R1 #15       /* line 10 */
      NEG R2 R0 R2
      MOVA R3 _b
      ADD R3 R3 R1
      ADD (R3) R0 R2
      ADDI R2 R1 #1        /* line 11 */
      ADD R1 R0 R2
      STORE R1 _i
      BT L4                /* line 12 */
L5:   ADDI R2 R0 #0        /* line 23 */
L6:   SUBI R3 R2 #10
      SLT R3 0
      BEQ L7
      MOVA R3 _a
      ADD R3 R3 R2
      ADD R4 R0 (R3)
      MOVA R3 _b
      ADD R3 R3 R2
      ADD R5 R0 (R3)
      EORB R3 R4 R5
      MOVA R4 _c
      ADD R4 R4 R2
      ADD (R4) R0 R3
      ADDI R2 R2 #1
      BT L6
L7:   ADDI R1 R0 #0        /* line 32 */
      STORE R1 _i
L8:   LOAD R1 _i
      SUBI R2 R1 #10       /* line 33 */
      STORE R1 _i
      SLT R2 0
      ANDB R2 R2 R2
      BEQ L9
      MOVA R2 _c           /* line 34 */
      LOAD R1 _i
      ADD R2 R2 R1
      ADD R3 R0 (R2)
      WRITE R3 0
      ADDI R3 R1 #1        /* line 35 */
      ADD R1 R0 R3
      STORE R1 _i
      BT L8                /* line 36 */
L9:   HALT
