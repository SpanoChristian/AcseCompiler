      .data
_a:   .WORD 0
_b:   .WORD 0
_somma: .WORD 0
      .text
      READ R1 0            /* line 3 */
      READ R2 0            /* line 4 */
      ADD R3 R1 R2         /* line 6 */
      STORE R2 _b
      STORE R1 _a
      ADD R1 R0 R3
      WRITE R1 0           /* line 8 */
      STORE R1 _somma
      HALT                 /* line 9 */
