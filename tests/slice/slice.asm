      .data
_a:   .SPACE 10
_b:   .SPACE 5
      .text
      MOVA R1 _a           /* line 4 */
      ADDI R2 R0 #0
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 5 */
      ADDI R1 R1 #1
      ADDI R2 R0 #1
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 6 */
      ADDI R1 R1 #2
      ADDI R2 R0 #2
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 7 */
      ADDI R1 R1 #3
      ADDI R2 R0 #3
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 8 */
      ADDI R1 R1 #4
      ADDI R2 R0 #4
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 9 */
      ADDI R1 R1 #5
      ADDI R2 R0 #5
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 10 */
      ADDI R1 R1 #6
      ADDI R2 R0 #6
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 11 */
      ADDI R1 R1 #7
      ADDI R2 R0 #7
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 12 */
      ADDI R1 R1 #8
      ADDI R2 R0 #8
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 13 */
      ADDI R1 R1 #9
      ADDI R2 R0 #9
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 15 */
      ADD R2 R0 (R1)
      MOVA R1 _a
      ADDI R1 R1 #1
      ADD R3 R0 (R1)
      MOVA R1 _a
      ADDI R1 R1 #2
      ADD R4 R0 (R1)
      MOVA R1 _a
      ADDI R1 R1 #3
      ADD R5 R0 (R1)
      MOVA R1 _a
      ADDI R1 R1 #4
      ADD R6 R0 (R1)
      MOVA R1 _b
      ADD (R1) R0 R2
      MOVA R2 _b
      ADDI R2 R2 #1
      ADD (R2) R0 R3
      MOVA R3 _b
      ADDI R3 R3 #2
      ADD (R3) R0 R4
      MOVA R4 _b
      ADDI R4 R4 #3
      ADD (R4) R0 R5
      MOVA R5 _b
      ADDI R5 R5 #4
      ADD (R5) R0 R6
      MOVA R6 _b           /* line 16 */
      ADD R5 R0 (R6)
      WRITE R5 0
      MOVA R5 _b           /* line 17 */
      ADDI R5 R5 #1
      ADD R6 R0 (R5)
      WRITE R6 0
      MOVA R6 _b           /* line 18 */
      ADDI R6 R6 #2
      ADD R5 R0 (R6)
      WRITE R5 0
      MOVA R5 _b           /* line 19 */
      ADDI R5 R5 #3
      ADD R6 R0 (R5)
      WRITE R6 0
      MOVA R6 _b           /* line 20 */
      ADDI R6 R6 #4
      ADD R5 R0 (R6)
      WRITE R5 0
      MOVA R5 _a           /* line 22 */
      ADDI R5 R5 #9
      ADD R6 R0 (R5)
      MOVA R5 _a
      ADD R4 R0 (R5)
      MOVA R5 _a
      ADDI R5 R5 #1
      ADD R3 R0 (R5)
      MOVA R5 _a
      ADDI R5 R5 #2
      ADD R2 R0 (R5)
      MOVA R5 _b
      ADD (R5) R0 R6
      MOVA R6 _b
      ADDI R6 R6 #1
      ADD (R6) R0 R4
      MOVA R4 _b
      ADDI R4 R4 #2
      ADD (R4) R0 R3
      MOVA R3 _b
      ADDI R3 R3 #3
      ADD (R3) R0 R2
      MOVA R2 _b           /* line 23 */
      ADD R3 R0 (R2)
      WRITE R3 0
      MOVA R3 _b           /* line 24 */
      ADDI R3 R3 #1
      ADD R2 R0 (R3)
      WRITE R2 0
      MOVA R2 _b           /* line 25 */
      ADDI R2 R2 #2
      ADD R3 R0 (R2)
      WRITE R3 0
      MOVA R3 _b           /* line 26 */
      ADDI R3 R3 #3
      ADD R2 R0 (R3)
      WRITE R2 0
      MOVA R2 _b           /* line 27 */
      ADDI R2 R2 #4
      ADD R3 R0 (R2)
      WRITE R3 0
      MOVA R3 _b           /* line 29 */
      ADDI R3 R3 #3
      ADD R2 R0 (R3)
      MOVA R3 _b
      ADDI R3 R3 #4
      ADD R4 R0 (R3)
      MOVA R3 _b
      ADD R6 R0 (R3)
      MOVA R3 _b
      ADDI R3 R3 #1
      ADD R5 R0 (R3)
      MOVA R3 _b
      ADD (R3) R0 R2
      MOVA R2 _b
      ADDI R2 R2 #1
      ADD (R2) R0 R4
      MOVA R4 _b
      ADDI R4 R4 #2
      ADD (R4) R0 R6
      MOVA R6 _b
      ADDI R6 R6 #3
      ADD (R6) R0 R5
      MOVA R5 _b           /* line 30 */
      ADD R6 R0 (R5)
      WRITE R6 0
      MOVA R6 _b           /* line 31 */
      ADDI R6 R6 #1
      ADD R5 R0 (R6)
      WRITE R5 0
      MOVA R5 _b           /* line 32 */
      ADDI R5 R5 #2
      ADD R6 R0 (R5)
      WRITE R6 0
      MOVA R6 _b           /* line 33 */
      ADDI R6 R6 #3
      ADD R5 R0 (R6)
      WRITE R5 0
      MOVA R5 _b           /* line 34 */
      ADDI R5 R5 #4
      ADD R6 R0 (R5)
      WRITE R6 0
      MOVA R6 _a           /* line 36 */
      ADDI R6 R6 #6
      ADD R5 R0 (R6)
      MOVA R6 _b
      ADD (R6) R0 R5
      MOVA R5 _b           /* line 37 */
      ADD R6 R0 (R5)
      WRITE R6 0
      MOVA R6 _b           /* line 38 */
      ADDI R6 R6 #1
      ADD R5 R0 (R6)
      WRITE R5 0
      MOVA R5 _b           /* line 39 */
      ADDI R5 R5 #2
      ADD R6 R0 (R5)
      WRITE R6 0
      MOVA R6 _b           /* line 40 */
      ADDI R6 R6 #3
      ADD R5 R0 (R6)
      WRITE R5 0
      MOVA R5 _b           /* line 41 */
      ADDI R5 R5 #4
      ADD R6 R0 (R5)
      WRITE R6 0
      HALT
