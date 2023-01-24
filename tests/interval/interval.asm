      .data
_a:   .SPACE 5
_x:   .WORD 0
_y:   .WORD 0
_i:   .WORD 0
      .text
      ADDI R1 R0 #0        /* line 4 */
      ADDI R2 R0 #0
L4:   SUB R0 R1 R1
      BGE L5
      ADDI R0 R2 #5
      BEQ L5
      MOVA R3 _a
      ADD R3 R3 R1
      ADD (R3) R0 R2
      ADDI R1 R1 #1
      ADDI R2 R2 #1
      BT L4
L5:   ADDI R2 R0 #0        /* line 6 */
      STORE R2 _i
L6:   LOAD R2 _i
      SUBI R3 R2 #5        /* line 7 */
      STORE R2 _i
      SLT R3 0
      ANDB R3 R3 R3
      BEQ L7
      MOVA R3 _a           /* line 8 */
      LOAD R2 _i
      ADD R3 R3 R2
      ADD R4 R0 (R3)
      WRITE R4 0
      ADDI R4 R2 #1        /* line 9 */
      ADD R2 R0 R4
      STORE R2 _i
      BT L6                /* line 10 */
L7:   ADDI R4 R0 #3        /* line 12 */
      ADDI R3 R0 #10       /* line 13 */
      STORE R3 _y
      ADDI R5 R0 #0        /* line 14 */
      ADD R6 R0 R4
      STORE R4 _x
L8:   SUB R0 R5 R1
      BGE L9
      ADDI R0 R6 #6
      BEQ L9
      MOVA R7 _a
      ADD R7 R7 R5
      ADD (R7) R0 R6
      ADDI R5 R5 #1
      ADDI R6 R6 #1
      BT L8
L9:   ADDI R2 R0 #0        /* line 16 */
      STORE R2 _i
L10:  LOAD R2 _i
      SUBI R5 R2 #5        /* line 17 */
      STORE R2 _i
      SLT R5 0
      ANDB R5 R5 R5
      BEQ L11
      MOVA R5 _a           /* line 18 */
      LOAD R2 _i
      ADD R5 R5 R2
      ADD R6 R0 (R5)
      WRITE R6 0
      ADDI R6 R2 #1        /* line 19 */
      ADD R2 R0 R6
      STORE R2 _i
      BT L10               /* line 20 */
L11:  LOAD R4 _x
      ADDI R6 R4 #1        /* line 22 */
      STORE R4 _x
      ADDI R5 R0 #0
      ADD R7 R0 R6
L12:  SUB R0 R5 R1
      BGE L13
      LOAD R3 _y
      ADD R0 R7 R3
      STORE R3 _y
      BEQ L13
      MOVA R3 _a
      ADD R3 R3 R5
      ADD (R3) R0 R7
      ADDI R5 R5 #1
      ADDI R7 R7 #1
      BT L12
L13:  ADDI R2 R0 #0        /* line 24 */
      STORE R2 _i
L14:  LOAD R2 _i
      SUBI R1 R2 #5        /* line 25 */
      STORE R2 _i
      SLT R1 0
      ANDB R1 R1 R1
      BEQ L15
      MOVA R1 _a           /* line 26 */
      LOAD R2 _i
      ADD R1 R1 R2
      ADD R5 R0 (R1)
      WRITE R5 0
      ADDI R5 R2 #1        /* line 27 */
      ADD R2 R0 R5
      STORE R2 _i
      BT L14               /* line 28 */
L15:  ADDI R4 R0 #1        /* line 30 */
      WRITE R4 0           /* line 31 */
      WRITE R4 0           /* line 33 */
      STORE R4 _x
      HALT                 /* line 34 */
