      .data
_v:   .WORD 0
_r:   .WORD 0
      .text
      READ R1 0            /* line 3 */
      SHRI R2 R1 #2        /* line 5 */
      STORE R1 _v
      ANDBI R1 R2 #2047
      ADDI R2 R1 #42
      ADD R1 R0 R2
      WRITE R1 0           /* line 7 */
      STORE R1 _r
      HALT
