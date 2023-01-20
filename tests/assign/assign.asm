      .data
_a:   .WORD 0
_b:   .WORD 0
_c:   .WORD 0
_result: .WORD 0
      .text
      READ R1 0            /* line 4 */
      READ R2 0            /* line 5 */
      READ R3 0            /* line 6 */
      ADD R4 R1 R2         /* line 8 */
      STORE R2 _b
      STORE R1 _a
      ADD R1 R0 R4
      ADD R4 R1 R3         /* line 10 */
      STORE R3 _c
      ADD R1 R0 R4
      WRITE R1 0           /* line 12 */
      STORE R1 _result
      HALT                 /* line 14 */
