      .data
_b:   .WORD 0
_d:   .WORD 0
_a:   .SPACE 21
_c:   .WORD 0
      .text
      MOVA R1 _a           /* line 8 */
      ADDI R2 R0 #0
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 9 */
      ADDI R1 R1 #1
      ADDI R2 R0 #1
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 10 */
      ADDI R1 R1 #2
      ADDI R2 R0 #2
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 11 */
      ADDI R1 R1 #3
      ADDI R2 R0 #3
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 12 */
      ADDI R1 R1 #4
      ADDI R2 R0 #4
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 13 */
      ADDI R1 R1 #5
      ADDI R2 R0 #5
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 14 */
      ADDI R1 R1 #6
      ADDI R2 R0 #6
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 15 */
      ADDI R1 R1 #7
      ADDI R2 R0 #7
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 16 */
      ADDI R1 R1 #8
      ADDI R2 R0 #8
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 17 */
      ADDI R1 R1 #9
      ADDI R2 R0 #9
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 18 */
      ADDI R1 R1 #10
      ADDI R2 R0 #10
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 19 */
      ADDI R1 R1 #11
      ADDI R2 R0 #11
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 20 */
      ADDI R1 R1 #12
      ADDI R2 R0 #12
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 21 */
      ADDI R1 R1 #13
      ADDI R2 R0 #13
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 22 */
      ADDI R1 R1 #14
      ADDI R2 R0 #14
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 23 */
      ADDI R1 R1 #15
      ADDI R2 R0 #15
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 24 */
      ADDI R1 R1 #16
      ADDI R2 R0 #16
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 25 */
      ADDI R1 R1 #17
      ADDI R2 R0 #17
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 26 */
      ADDI R1 R1 #18
      ADDI R2 R0 #18
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 27 */
      ADDI R1 R1 #19
      ADDI R2 R0 #19
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 28 */
      ADDI R1 R1 #20
      ADDI R2 R0 #20
      ADD (R1) R0 R2
      MOVA R1 _a           /* line 31 */
      ADD R2 R0 (R1)
      ADD R1 R0 R2
      WRITE R1 0           /* line 33 */
      MOVA R2 _a           /* line 34 */
      ADDI R2 R2 #1
      ADD R3 R0 (R2)
      ADD R1 R0 R3
      WRITE R1 0           /* line 36 */
      MOVA R3 _a           /* line 37 */
      ADDI R3 R3 #2
      ADD R2 R0 (R3)
      ADD R1 R0 R2
      WRITE R1 0           /* line 39 */
      MOVA R2 _a           /* line 40 */
      ADDI R2 R2 #3
      ADD R3 R0 (R2)
      ADD R1 R0 R3
      WRITE R1 0           /* line 42 */
      MOVA R3 _a           /* line 43 */
      ADDI R3 R3 #4
      ADD R2 R0 (R3)
      ADD R1 R0 R2
      WRITE R1 0           /* line 45 */
      MOVA R2 _a           /* line 46 */
      ADDI R2 R2 #5
      ADD R3 R0 (R2)
      ADD R1 R0 R3
      WRITE R1 0           /* line 48 */
      MOVA R3 _a           /* line 49 */
      ADDI R3 R3 #6
      ADD R2 R0 (R3)
      ADD R1 R0 R2
      WRITE R1 0           /* line 51 */
      MOVA R2 _a           /* line 52 */
      ADDI R2 R2 #7
      ADD R3 R0 (R2)
      ADD R1 R0 R3
      WRITE R1 0           /* line 54 */
      MOVA R3 _a           /* line 55 */
      ADDI R3 R3 #8
      ADD R2 R0 (R3)
      ADD R1 R0 R2
      WRITE R1 0           /* line 57 */
      MOVA R2 _a           /* line 58 */
      ADDI R2 R2 #9
      ADD R3 R0 (R2)
      ADD R1 R0 R3
      WRITE R1 0           /* line 60 */
      MOVA R3 _a           /* line 61 */
      ADDI R3 R3 #10
      ADD R2 R0 (R3)
      ADD R1 R0 R2
      WRITE R1 0           /* line 63 */
      MOVA R2 _a           /* line 64 */
      ADDI R2 R2 #11
      ADD R3 R0 (R2)
      ADD R1 R0 R3
      WRITE R1 0           /* line 66 */
      MOVA R3 _a           /* line 67 */
      ADDI R3 R3 #12
      ADD R2 R0 (R3)
      ADD R1 R0 R2
      WRITE R1 0           /* line 69 */
      MOVA R2 _a           /* line 70 */
      ADDI R2 R2 #13
      ADD R3 R0 (R2)
      ADD R1 R0 R3
      WRITE R1 0           /* line 72 */
      MOVA R3 _a           /* line 73 */
      ADDI R3 R3 #14
      ADD R2 R0 (R3)
      ADD R1 R0 R2
      WRITE R1 0           /* line 75 */
      MOVA R2 _a           /* line 76 */
      ADDI R2 R2 #15
      ADD R3 R0 (R2)
      ADD R1 R0 R3
      WRITE R1 0           /* line 78 */
      MOVA R3 _a           /* line 79 */
      ADDI R3 R3 #16
      ADD R2 R0 (R3)
      ADD R1 R0 R2
      WRITE R1 0           /* line 81 */
      MOVA R2 _a           /* line 82 */
      ADDI R2 R2 #17
      ADD R3 R0 (R2)
      ADD R1 R0 R3
      WRITE R1 0           /* line 84 */
      MOVA R3 _a           /* line 85 */
      ADDI R3 R3 #18
      ADD R2 R0 (R3)
      ADD R1 R0 R2
      WRITE R1 0           /* line 87 */
      MOVA R2 _a           /* line 88 */
      ADDI R2 R2 #19
      ADD R3 R0 (R2)
      ADD R1 R0 R3
      WRITE R1 0           /* line 90 */
      MOVA R3 _a           /* line 92 */
      ADDI R3 R3 #20
      ADD R2 R0 (R3)
      ADD R1 R0 R2
      WRITE R1 0           /* line 93 */
      LOAD R2 _c
      WRITE R2 0           /* line 94 */
      MOVA R3 _a           /* line 95 */
      ADDI R3 R3 #20
      ADD R4 R0 (R3)
      ADD R2 R0 R4
      WRITE R2 0           /* line 96 */
      ADD R2 R0 R1         /* line 97 */
      WRITE R2 0           /* line 98 */
      MOVA R4 _a           /* line 99 */
      ADDI R4 R4 #20
      ADD R3 R0 (R4)
      ADD R4 R1 R3
      ADD R2 R0 R4
      WRITE R2 0           /* line 100 */
      MOVA R4 _a           /* line 101 */
      ADDI R4 R4 #20
      ADD R3 R0 (R4)
      ADD R4 R1 R3
      ADDI R3 R4 #5
      MOVA R4 _a
      ADDI R4 R4 #17
      ADD R5 R0 (R4)
      ADD R4 R3 R5
      ADD R2 R0 R4
      WRITE R2 0           /* line 102 */
      MOVA R4 _a           /* line 104 */
      ADDI R4 R4 #15
      ADD R3 R0 (R4)
      ADD R4 R2 R3
      STORE R2 _c
      ADDI R2 R4 #12
      ADD R4 R0 R2
      WRITE R4 0           /* line 105 */
      WRITE R4 0           /* line 107 */
      WRITE R1 0           /* line 108 */
      WRITE R4 0           /* line 109 */
      WRITE R4 0           /* line 110 */
      MOVA R2 _a           /* line 111 */
      ADDI R2 R2 #3
      ADD R3 R0 (R2)
      ADD R1 R0 R3
      WRITE R4 0           /* line 112 */
      WRITE R1 0           /* line 113 */
      WRITE R4 0           /* line 114 */
      MOVA R3 _a           /* line 115 */
      ADDI R3 R3 #4
      ADD R2 R0 (R3)
      ADD R1 R0 R2
      WRITE R1 0           /* line 116 */
      STORE R1 _b
      WRITE R4 0           /* line 117 */
      STORE R4 _d
      HALT                 /* line 122 */
