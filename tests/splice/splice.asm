      .data
_a:   .WORD 0
_b:   .WORD 0
_splice: .WORD 0
      .text
      READ R1 0            /* line 2 */
      READ R2 0            /* line 3 */
      ADDI R3 R0 #-1       /* line 4 */
      SHLI R3 R3 #16
      ANDB R4 R1 R3
      STORE R1 _a
      ADDI R1 R0 #1
      SHLI R1 R1 #16
      ADDI R1 R1 #-1
      ANDB R3 R2 R1
      STORE R2 _b
      ORB R2 R4 R3
      ADD R4 R0 R2
      WRITE R4 0           /* line 5 */
      STORE R4 _splice
      HALT
