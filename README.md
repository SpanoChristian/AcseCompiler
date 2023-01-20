# AcseCompiler
ACSE (Advanced Compiler System for Education) is a simple toolchain developed for educational purposes for the course “Formal Languages and Compilers” at Politecnico di Milano.

# Basics
The toolchain aims to be a representative example of a complete computing system – albeit simplified – in order to illustrate what happens behind the scenes when a program is compiled and then executed.

The ACSE package is comprised of three tools (whose relationship is shown in fig. 1):
* The first tool is the ACSE compiler, which accepts a program in a simplified C-like language called LANCE (Language for Compiler Education), and produces a compiled program in assembly language for a fictional architecture named MACE (Machine for Advanced Compiler Education).
* The second tool is an assembler, which is able to take the assembly language code produced by ACSE and transform it to a binary executable object file.
* The last tool is a simulator, named MACE just like the fictional architecture it implements. This simulator is able to read the object files produced by the assembler and interpret them, thus executing the program originally compiled by ACSE.

<p align="center">
  <img src="images/Acse_tools_overview.png" width=60% height=60% />
</p>
