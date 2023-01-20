      .data
_a:   .WORD 0
_b:   .WORD 0
      .text
      ADDI R1 R0 #1        /* line 3 */
      WRITE R1 0           /* line 4 */
      ADDI R1 R0 #0        /* line 5 */
      WRITE R1 0           /* line 6 */
      ADDI R1 R0 #1        /* line 7 */
      WRITE R1 0           /* line 8 */
      ADDI R1 R0 #0        /* line 9 */
      WRITE R1 0           /* line 10 */
      ADDI R1 R0 #0        /* line 11 */
      WRITE R1 0           /* line 12 */
      ADDI R1 R0 #1        /* line 13 */
      WRITE R1 0           /* line 14 */
      ADDI R1 R0 #-1       /* line 15 */
      WRITE R1 0           /* line 16 */
      ADDI R1 R0 #5        /* line 17 */
      WRITE R1 0           /* line 18 */
      ADDI R1 R0 #5        /* line 19 */
      WRITE R1 0           /* line 20 */
      READ R2 0            /* line 22 */
      NOTL R3 R2 #0        /* line 24 */
      ADD R1 R0 R3
      WRITE R1 0           /* line 25 */
      NOTL R3 R2 #0        /* line 26 */
      STORE R2 _b
      NOTL R2 R3 #0
      ADD R1 R0 R2
      WRITE R1 0           /* line 27 */
      STORE R1 _a
      HALT                 /* line 28 */
