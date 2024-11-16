# **DNA Sequence Edit Distance Calculator**

## **Overview**
This program calculates the edit distance (Levenshtein distance) between two DNA sequences and provides an alignment of the sequences based on the operations required to transform one sequence into the other. The edit distance is computed using a dynamic programming approach.

---

## **Features**
- Computes the minimum edit distance between two input DNA sequences.
- Displays the alignment of nucleotides with their associated costs:
  - `0`: No cost (nucleotides match).
  - `1`: Replacement cost.
  - `2`: Insertion or deletion cost.
- Measures execution time using SFML's `Clock` and `Time` classes.

---

## **Output**
After entering two DNA sequences, the program outputs:
1. The **minimum edit distance**.
2. The **alignment of nucleotides**, showing:
   - Characters from both sequences.
   - The cost for each operation (match, replace, insert, or delete).
3. The **execution time** in seconds.

---

## **Notes**
- This program is optimized for comparing DNA sequences but works with any string inputs.
- Ensure SFML (Simple and Fast Multimedia Library) is installed on your system to compile and run the program.
- The dynamic programming approach ensures efficient computation for sequences of reasonable length.

---

## **Contact**
For questions or suggestions, please contact:  
**Noah Fay**  
Email: noahfay43@gmail.com
