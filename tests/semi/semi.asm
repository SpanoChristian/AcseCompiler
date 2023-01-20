      .data
_a:   .WORD 0
_b:   .WORD 0
_c:   .WORD 0
      .text
      NOP                  /* line 4 */
      READ R1 0            /* line 6 */
      READ R2 0            /* line 7 */
      ADD R3 R1 R2         /* line 9 */
      STORE R2 _b
      STORE R1 _a
      ADD R1 R0 R3
      NOP                  /* line 11 */
      WRITE R1 0           /* line 13 */
      STORE R1 _c
      HALT                 /* line 14 */
