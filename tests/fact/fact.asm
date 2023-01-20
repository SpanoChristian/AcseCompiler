      .data
_value: .WORD 0
_fact: .WORD 0
      .text
      READ R1 0            /* line 3 */
      SUBI R2 R1 #0        /* line 5 */
      STORE R1 _value
      SLT R2 0
      ANDB R2 R2 R2
      BEQ L2
      ADDI R2 R0 #-1       /* line 7 */
      WRITE R2 0
      HALT                 /* line 8 */
L2:   ADDI R2 R0 #1        /* line 11 */
      STORE R2 _fact
L3:   LOAD R1 _value
      SUBI R3 R1 #0        /* line 13 */
      STORE R1 _value
      SGT R3 0
      ANDB R3 R3 R3
      BEQ L4
      LOAD R1 _value
      LOAD R2 _fact
      MUL R3 R1 R2         /* line 15 */
      ADD R2 R0 R3
      STORE R2 _fact
      SUBI R3 R1 #1        /* line 16 */
      ADD R1 R0 R3
      STORE R1 _value
      BT L3                /* line 17 */
L4:   LOAD R2 _fact
      WRITE R2 0           /* line 19 */
      STORE R2 _fact
      HALT                 /* line 21 */
