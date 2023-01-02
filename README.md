# treeinator
A simple ASCII-tree generator.

Version: Alpha 1.0.0 (January 1st, 2022)


# Description

  Treeinator is basically just a toy project that prints a tree. There's currently three ways the program provides to determine the (horizontal, vertical size is set.) size of the tree; by way of linear increase, by way of exponential increase, and by way of natural logarithmic increase.

# Compiling

  To compile, simply run ``make`` in the directory this file is contained in.


# Changelog

  *Version Alpha 1.0.0 - January 1st, 2022*
  - Added a makefile in the parent directory.
  - Added the file ``main.c`` - it includes the function ``int main()``.
  - Added the file ``tree.h`` - this is the header file for the functions included in the files that are in the ``/tree`` directory.
  - Added the ``/tree`` directory. It includes the following files:
    - ``treelin.c`` - includes the function ``void TreeLinear()``.
    - ``treeexp.c`` - includes the function ``void TreeExponential()``.
    - ``treelog.c`` - includes the function ``void TreeLogarithmic()``.
