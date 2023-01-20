      .data
_a:   .WORD 0
_b:   .WORD 0
_v:   .SPACE 2
      .text
      MOVA R1 _v           /* line 3 */
      ADDI R2 R0 #2
      ADD (R1) R0 R2
      MOVA R1 _v           /* line 4 */
      ADDI R1 R1 #1
      ADDI R2 R0 #1
      ADD (R1) R0 R2
      ADDI R1 R0 #10       /* line 5 */
      ADDI R2 R0 #3        /* line 6 */
      SUBI R3 R2 #2        /* line 7 */
      STORE R2 _b
      MOVA R2 _v
      ADD R4 R0 (R2)
      MUL R2 R1 R4
      STORE R1 _a
      ADDI R1 R2 #0
      MOVA R2 _v
      ADDI R2 R2 #1
      ADD R4 R0 (R2)
      MUL R2 R3 R4
      ADD R3 R1 R2
      WRITE R3 0
      HALT
