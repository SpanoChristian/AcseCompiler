      .data
_s:   .WORD 100
_c:   .WORD 0
_input: .WORD 0
      .text
      BT L3                /* line 3 */
L4:   LOAD R1 _s
      LOAD R2 _c
      SUB R1 R1 R2
      STORE R2 _c
      STORE R1 _s
L3:   LOAD R1 _s
      SUBI R0 R1 #0
      STORE R1 _s
      BLE L5
      READ R3 0            /* line 4 */
      LOAD R2 _c
      ADDI R4 R2 #5        /* line 5 */
      ADD R2 R0 R4
      WRITE R2 0           /* line 6 */
      SUBI R4 R3 #32       /* line 7 */
      STORE R3 _input
      SGT R4 0
      SUBI R5 R2 #50
      STORE R2 _c
      SLT R5 0
      ANDL R2 R4 R5
      BNE L4
L5:   LOAD R3 _input
      WRITE R3 0           /* line 9 */
      STORE R3 _input
      LOAD R1 _s
      WRITE R1 0           /* line 10 */
      STORE R1 _s
      HALT
