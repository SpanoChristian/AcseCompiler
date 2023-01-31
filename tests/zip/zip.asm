      .data
_a:   .SPACE 5
_b:   .SPACE 6
_c:   .SPACE 12
_i:   .WORD 0
      .text
      ADDI R1 R0 #0        /* line 4 */
      STORE R1 _i
L4:   LOAD R1 _i
      SUBI R2 R1 #5        /* line 5 */
      STORE R1 _i
      SLT R2 0
      ANDB R2 R2 R2
      BEQ L5
      LOAD R1 _i
      ADDI R2 R1 #1        /* line 6 */
      MOVA R3 _a
      ADD R3 R3 R1
      ADD (R3) R0 R2
      ADDI R2 R1 #1        /* line 7 */
      ADD R1 R0 R2
      STORE R1 _i
      BT L4                /* line 8 */
L5:   ADDI R1 R0 #0        /* line 9 */
      STORE R1 _i
L6:   LOAD R1 _i
      SUBI R2 R1 #6        /* line 10 */
      STORE R1 _i
      SLT R2 0
      ANDB R2 R2 R2
      BEQ L7
      LOAD R1 _i
      ADDI R2 R1 #1        /* line 11 */
      MULI R3 R2 #10
      MOVA R2 _b
      ADD R2 R2 R1
      ADD (R2) R0 R3
      ADDI R3 R1 #1        /* line 12 */
      ADD R1 R0 R3
      STORE R1 _i
      BT L6                /* line 13 */
L7:   ADDI R1 R0 #0        /* line 14 */
      STORE R1 _i
L8:   LOAD R1 _i
      SUBI R3 R1 #12       /* line 15 */
      STORE R1 _i
      SLT R3 0
      ANDB R3 R3 R3
      BEQ L9
      MOVA R3 _c           /* line 16 */
      LOAD R1 _i
      ADD R3 R3 R1
      ADDI R2 R0 #0
      ADD (R3) R0 R2
      ADDI R3 R1 #1        /* line 17 */
      ADD R1 R0 R3
      STORE R1 _i
      BT L8                /* line 18 */
L9:   ADDI R3 R0 #0        /* line 20 */
      ADDI R2 R0 #0
L10:  MOVA R4 _a
      ADD R4 R4 R3
      ADD R5 R0 (R4)
      MOVA R4 _c
      ADD R4 R4 R2
      ADD (R4) R0 R5
      ADDI R2 R2 #1
      SUBI R0 R2 #12
      BGE L11
      MOVA R5 _b
      ADD R5 R5 R3
      ADD R4 R0 (R5)
      MOVA R5 _c
      ADD R5 R5 R2
      ADD (R5) R0 R4
      ADDI R2 R2 #1
      SUBI R0 R2 #12
      BGE L11
      ADDI R3 R3 #1
      SUBI R0 R3 #5
      BLT L10
L11:  ADDI R1 R0 #0        /* line 21 */
      STORE R1 _i
L12:  LOAD R1 _i
      SUBI R3 R1 #12       /* line 22 */
      STORE R1 _i
      SLT R3 0
      ANDB R3 R3 R3
      BEQ L13
      MOVA R3 _c           /* line 23 */
      LOAD R1 _i
      ADD R3 R3 R1
      ADD R2 R0 (R3)
      WRITE R2 0
      ADDI R2 R1 #1        /* line 24 */
      ADD R1 R0 R2
      STORE R1 _i
      BT L12               /* line 25 */
L13:  ADDI R2 R0 #0        /* line 27 */
      ADDI R3 R0 #0
L14:  MOVA R4 _b
      ADD R4 R4 R2
      ADD R5 R0 (R4)
      MOVA R4 _a
      ADD R4 R4 R3
      ADD (R4) R0 R5
      ADDI R3 R3 #1
      SUBI R0 R3 #5
      BGE L15
      MOVA R5 _c
      ADD R5 R5 R2
      ADD R4 R0 (R5)
      MOVA R5 _a
      ADD R5 R5 R3
      ADD (R5) R0 R4
      ADDI R3 R3 #1
      SUBI R0 R3 #5
      BGE L15
      ADDI R2 R2 #1
      SUBI R0 R2 #6
      BLT L14
L15:  ADDI R1 R0 #0        /* line 28 */
      STORE R1 _i
L16:  LOAD R1 _i
      SUBI R2 R1 #5        /* line 29 */
      STORE R1 _i
      SLT R2 0
      ANDB R2 R2 R2
      BEQ L17
      MOVA R2 _a           /* line 30 */
      LOAD R1 _i
      ADD R2 R2 R1
      ADD R3 R0 (R2)
      WRITE R3 0
      ADDI R3 R1 #1        /* line 31 */
      ADD R1 R0 R3
      STORE R1 _i
      BT L16               /* line 32 */
L17:  HALT
