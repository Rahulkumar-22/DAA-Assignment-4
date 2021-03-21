# Assignment-4

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019108  |   Harsha Vardhan Madasi | Harsha470|
|    IIT2019109  |   Rahul Kumar | Rahulkumar-22 | 
|    IIT2019110 |   Sumit Katiyar | iit2019110  |

**Group No-** 19

**Faculty Name-** Dr. Rahul Kala

**Mentor Name-** Md. Meraz

---
## Problem Statement
Given an array of 2n elements in the following format { a1, a2, a3, a4,....., an, b1, b2, b3, b4, ...., bn }. The task is shuffle the array to {a1, b1, a2, b2, a3, b3, ......, an, bn } without using extra space. Solve using divide and conquer algorithm.

---


```
#Download project
git clone https://github.com/Rahulkumar-22/DAA-Assignment-4.git 
```
Project Initialize 
```
#Opening Assingment folder
cd DAA-Assingment-4
cd DAA

#Compiling The code
g++ code.cpp
```
---

Run the code
```
./a.out
```
Output
```
shuffled array
```
---

**Test case**

Find max
```
Test Case-1
Input:
8
1 3 5 7 2 4 6 8
Out:
1 2 3 4 5 6 7 8
#--------------------------#
Test Case-2
Input:
4
3 6 4 9
Out:
3 4 6 9
```

---

### Theory
Given an array of 2n elements in the following format { a1, a2, a3, a4,....., an, b1, b2, b3, b4, ...., bn }. The task is shuffle the array to {a1, b1,a2, b2, a3, b3, ......, an, bn } without using extra space.


---

### Analysis

**Time Complexity**

In the above algorithm we get the recurrence 

T(n)=2T(n/2)+O(n)
for the time complexity, which results in 

T(n)=O(nlogn)

So the final computational time to shuffle the given array is O(nlog⁡n).



**Space Complexity**

To be precise,as we are swapping the elements in the given array itself  there is no extra space required.So the space complexity will be O(1).

---

### References

1) Introduction to Algorithms by Cormen,Charles,Rivest and Stein.

2) Geeks for Geeks
