      .data
_a:   .WORD 0
_b:   .WORD 0
_c:   .SPACE 5
_d:   .SPACE 6
_e:   .WORD 0
_f:   .WORD 0
_g:   .WORD 0
      .text
      READ R1 0            /* line 5 */
      READ R2 0            /* line 6 */
      STORE R2 _b
      SUBI R3 R1 #0        /* line 8 */
      STORE R1 _a
      SGT R3 0
      ANDB R3 R3 R3
      BEQ L7
      MOVA R3 _c           /* line 10 */
      ADDI R4 R0 #1
      ADD (R3) R0 R4
      MOVA R3 _d           /* line 11 */
      LOAD R1 _a
      ADD (R3) R0 R1
      STORE R1 _a
      MOVA R3 _c           /* line 12 */
      ADD R4 R0 (R3)
      MOVA R3 _d
      ADD R5 R0 (R3)
      ADD R3 R4 R5
      LOAD R2 _b
      ADD R4 R3 R2
      STORE R2 _b
      MOVA R3 _c
      ADDI R3 R3 #1
      ADD (R3) R0 R4
      BT L8                /* line 14 */
L7:   MOVA R4 _c           /* line 16 */
      LOAD R1 _a
      ADD (R4) R0 R1
      LOAD R2 _b
      ADD R4 R1 R2         /* line 17 */
      STORE R2 _b
      STORE R1 _a
      MOVA R1 _d
      ADD (R1) R0 R4
      MOVA R4 _c           /* line 18 */
      ADD R1 R0 (R4)
      MOVA R4 _d
      ADD R2 R0 (R4)
      SUB R4 R1 R2
      MOVA R1 _c
      ADDI R1 R1 #1
      ADD (R1) R0 R4
L8:   MOVA R4 _c           /* line 21 */
      ADD R1 R0 (R4)
      ADD R4 R0 R1
      MOVA R1 _c           /* line 22 */
      ADDI R1 R1 #1
      ADD R2 R0 (R1)
      ADD R1 R0 R2
      MOVA R2 _d           /* line 23 */
      ADD R3 R0 (R2)
      ADD R2 R0 R3
      WRITE R4 0           /* line 24 */
      STORE R4 _e
      WRITE R1 0           /* line 25 */
      STORE R1 _f
      WRITE R2 0           /* line 26 */
      STORE R2 _g
      HALT                 /* line 28 */
