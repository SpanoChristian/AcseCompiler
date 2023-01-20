      .data
_x:   .SPACE 3
_y:   .SPACE 3
_z:   .SPACE 3
      .text
      MOVA R1 _x           /* line 5 */
      ADDI R2 R0 #0
      ADD (R1) R0 R2
      MOVA R1 _x           /* line 6 */
      ADDI R1 R1 #1
      ADDI R2 R0 #4
      ADD (R1) R0 R2
      MOVA R1 _x           /* line 7 */
      ADDI R1 R1 #2
      ADDI R2 R0 #-3
      ADD (R1) R0 R2
      MOVA R1 _y           /* line 9 */
      ADDI R2 R0 #0
      ADD (R1) R0 R2
      MOVA R1 _y           /* line 10 */
      ADDI R1 R1 #1
      ADDI R2 R0 #2
      ADD (R1) R0 R2
      MOVA R1 _y           /* line 11 */
      ADDI R1 R1 #2
      ADDI R2 R0 #1
      ADD (R1) R0 R2
      ADDI R1 R0 #0        /* line 13 */
L3:   SUBI R2 R1 #3
      SLT R2 0
      BEQ L4
      MOVA R2 _x
      ADD R2 R2 R1
      ADD R3 R0 (R2)
      MOVA R2 _y
      ADD R2 R2 R1
      ADD R4 R0 (R2)
      SUB R2 R3 R4
      SGT R2 0
      SUB R5 R3 R4
      SLT R5 0
      MULI R3 R5 #-1
      ADD R5 R2 R3
      MOVA R2 _z
      ADD R2 R2 R1
      ADD (R2) R0 R5
      ADDI R1 R1 #1
      BT L3
L4:   MOVA R1 _z           /* line 15 */
      ADD R5 R0 (R1)
      WRITE R5 0
      MOVA R5 _z           /* line 16 */
      ADDI R5 R5 #1
      ADD R1 R0 (R5)
      WRITE R1 0
      MOVA R1 _z           /* line 17 */
      ADDI R1 R1 #2
      ADD R5 R0 (R1)
      WRITE R5 0
      HALT
