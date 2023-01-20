      .data
_a:   .WORD 0
_b:   .WORD 0
_shl: .WORD 0
_shr: .WORD 0
      .text
      READ R1 0            /* line 3 */
      READ R2 0            /* line 4 */
      SHL R3 R1 R2         /* line 6 */
      ADD R4 R0 R3
      SHR R3 R1 R2         /* line 7 */
      STORE R2 _b
      STORE R1 _a
      ADD R1 R0 R3
      WRITE R4 0           /* line 9 */
      STORE R4 _shl
      WRITE R1 0           /* line 10 */
      STORE R1 _shr
      HALT                 /* line 11 */
