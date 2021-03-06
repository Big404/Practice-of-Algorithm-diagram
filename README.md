# Algorithms Practices

> This repository collects all the solutions to 
problems I solved and template codes of some wide-use algorithms.

## Source code of Grokking Algorithms

The practiced source code when I read <[Grokking Algorithms](https://book.douban.com/subject/26979890/)>, which are almost similar to the examples presented in the book.



## Divide and Conquer Algorithms

​	This is the first course of [Algorithms Specialization](https://www.coursera.org/specializations/algorithms) offered by Stanford University, which I have studied in the Coursera. The codes in this folder are the practice in the class.

### Week 1
- The implementation of the Merge Sort algorithm. (Code: Week1_MergeSort.py)
- Compute the product of two large integers using the Karatsuda algorithm. (Code: Week1_IntergerMultipy.py)

### Week 2
- The implementation of counting the inverse pairs leveraging the Merge Sort algorithm. (Code : Week2_CountInversion.py)
- The code of weekly quiz. (Code: Week2_CountInversionForExam.py, Input data: Week2_IntegerArray.txt)
    - 1<= array[i] <= 100000

### Week 3
- The implementation of the Quick Sort algorithm, which uses three different methods of choosing the pivot.
    1. Choose the first element as the pivot.
    2. Choose the last element as the pivot.
    3. Choose the median of [the first element, the last element, the median element]

Note: This main function of the code is to compute the number of the comparison between the elements, which also is the quiz of Week 3. (Code: Week3_QuickSort.py, Input data: Week3_QuickSort.txt)

### Week 4

- The Random Selection algorithm and the presentation of graphs are introduced in this week.
- The implementation of counting the minimum cuts of a graph using the Random Contraction algorithm. Here are the input data sets you will need.
    1. Week4_RandomizedContraction.py (code)
    2. Week4_kargerTestcase.txt (small scale)
    3. Week4_kargerTestcase2.txt (small scale)
    4. Week4_kargerMinCut.txt (the dataset of the weekly quiz)

Note: The probability of the Random Contraction algorithm is 2/[n(n-1)]. It is a pretty good result though it looks small. As for the problem of the weekly quiz which has 200 vetices, the program can return the correct answer after running several times.


## Leetcode

This folder keeps all the solution codes of [LeetCode](https://leetcode.com/) I wrote, which includes the comprehension of the problems.

The format of file names：The number of the problem in website_the name of problem

The structure of this folder:
- [Basic](https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/) : The subject of Basic Algorithm in Leetcode Explore
- [Intermediate](https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/) : The subject of Intermediate in LeetCodee Explore
- [Coding Interviews](https://leetcode-cn.com/problemset/lcof/) : The collection of all the problems of [《Coding Interviews》](https://book.douban.com/subject/6966465//)
- Others : Other problems I solved on LeetCode are collected in here.
- Competition : The solutions to the weekly competitions.


## Templates

The implementation of the basic functions of different algorithms which can be quickly modified and used in the competitions.

### Implemented
- Trie Tree
- Dynamic Programming
- Dictionary Order Algorithm
- Prefix Sum
- Breadth First Search
- Binary Search
- Quick Sort
- Heap
- Heap Sort
- String Match (Brute Force, Rabin-Karp, Boyer-Moore, KMP)
- Merge Sort