      .data
_value: .WORD 0
_result: .WORD 0
_power: .WORD 0
_negative: .WORD 0
      .text
      READ R1 0            /* line 8 */
      STORE R1 _value
      READ R2 0            /* line 9 */
      SUBI R3 R2 #0        /* line 11 */
      STORE R2 _power
      SEQ R3 0
      ANDB R3 R3 R3
      BEQ L4
      ADDI R3 R0 #0        /* line 13 */
      WRITE R3 0
      HALT                 /* line 14 */
L4:   LOAD R2 _power
      SUBI R3 R2 #0        /* line 17 */
      STORE R2 _power
      SLT R3 0
      ANDB R3 R3 R3
      BEQ L5
      ADDI R3 R0 #1        /* line 19 */
      STORE R3 _negative
      LOAD R2 _power
      SUB R4 R0 R2         /* line 20 */
      ADD R2 R0 R4
      STORE R2 _power
      BT L6                /* line 22 */
L5:   ADDI R3 R0 #0        /* line 23 */
      STORE R3 _negative
L6:   LOAD R1 _value
      ADD R4 R0 R1         /* line 25 */
      STORE R4 _result
      STORE R1 _value
L7:   LOAD R2 _power
      SUBI R5 R2 #1        /* line 26 */
      STORE R2 _power
      SGT R5 0
      ANDB R5 R5 R5
      BEQ L8
      LOAD R4 _result
      LOAD R1 _value
      MUL R5 R4 R1         /* line 28 */
      STORE R1 _value
      ADD R4 R0 R5
      STORE R4 _result
      LOAD R2 _power
      SUBI R5 R2 #1        /* line 29 */
      ADD R2 R0 R5
      STORE R2 _power
      BT L7                /* line 30 */
L8:   LOAD R3 _negative
      SUBI R2 R3 #1        /* line 32 */
      STORE R3 _negative
      SEQ R2 0
      ANDB R2 R2 R2
      BEQ L9
      ADDI R2 R0 #1        /* line 33 */
      LOAD R4 _result
      DIV R3 R2 R4
      ADD R4 R0 R3
      STORE R4 _result
L9:   LOAD R4 _result
      WRITE R4 0           /* line 35 */
      STORE R4 _result
      HALT                 /* line 37 */
