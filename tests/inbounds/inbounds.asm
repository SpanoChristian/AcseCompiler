      .data
_v:   .WORD 0
_i:   .WORD 0
_a:   .SPACE 5
      .text
      MOVA R1 _a           /* line 2 */
      ADDI R2 R0 #8
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 3 */
      ADDI R1 R1 #1
      ADDI R2 R0 #6
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 4 */
      ADDI R1 R1 #2
      ADDI R2 R0 #9
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 5 */
      ADDI R1 R1 #3
      ADDI R2 R0 #4
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 6 */
      ADDI R1 R1 #4
      ADDI R2 R0 #7
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 8 */
      ADD R2 R0 (R1)
      ADD R1 R0 R2
      STORE R1 _v
      ADDI R1 R0 #1
      BEQ L3
      ADDI R1 R0 #1        /* line 9 */
      WRITE R1 0
      BT L4                /* line 10 */
L3:   ADDI R1 R0 #0        /* line 11 */
      WRITE R1 0
L4:   HALT                 /* line 12 */
