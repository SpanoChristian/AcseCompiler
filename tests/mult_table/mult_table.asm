      .data
_value: .WORD 0
_counter: .WORD 0
      .text
      READ R1 0            /* line 3 */
      STORE R1 _value
      ADDI R2 R0 #1        /* line 5 */
      STORE R2 _counter
L2:   LOAD R2 _counter
      SUBI R3 R2 #10       /* line 7 */
      STORE R2 _counter
      SLE R3 0
      ANDB R3 R3 R3
      BEQ L3
      LOAD R1 _value
      LOAD R2 _counter
      MUL R3 R1 R2         /* line 9 */
      STORE R1 _value
      WRITE R3 0
      ADDI R3 R2 #1        /* line 10 */
      ADD R2 R0 R3
      STORE R2 _counter
      BT L2                /* line 11 */
L3:   HALT                 /* line 13 */
