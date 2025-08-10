# Pointers in C++

## Name: Maitraiyee Vashistha
## PRN: 24070123057
## Division: ENTC-A3
## Title: Pointers in C + + 
---

## Aim :
*To use Pointers and recreate some of the basic programs in C++*

---

## **Definition of a Pointer**
A **pointer** in C++ is a variable that stores the **memory address** of another variable.  
Instead of holding a data value directly, a pointer stores the location of the data in memory.  

**Pointers allow:**
- Direct memory access and manipulation  
- Dynamic memory allocation  
- Efficient array and string handling  
- Implementation of data structures like linked lists and trees  

---

## **Theory**
- A pointer’s **data type** determines the type of variable it can point to.  
- **Address-of operator (`&`)** – Retrieves the memory address of a variable.  
- **Dereference operator (`*`)** – Accesses the value stored at the pointed memory location.  

---

## **Programs, Algorithms & Explanations**

### **1. Basic Arithmetic Pointer – Increment of Pointer**
**Algorithm:**
1. Declare variables of different data types (`int`, `bool`, `double`, `float`).  
2. Create pointers for each variable type.  
3. Assign each pointer the address of its respective variable.  
4. Print the initial address stored in the pointer.  
5. Increment the pointer and print the new address.  
6. Repeat for all data types.  

**Explanation:**  
Pointer arithmetic moves the pointer to the next memory location based on the size of the data type it points to.  
The increment step is **not always +1 byte** — it depends on the data type size.  

---

### **2. Addition and Subtraction of Values at Two Different Positions in an Array**
**Algorithm:**
1. Initialize an array with integer values.  
2. Create two pointers pointing to specific indices of the array.  
3. Dereference both pointers to access the values.  
4. Perform subtraction and addition of the two values.  
5. Display the results.  

**Explanation:**  
Two pointers are set to different elements in the array. Using dereferencing, values are accessed directly and arithmetic operations are performed without using array indexing.  

---

### **3. Printing Characters of a String Using Pointers**
**Algorithm:**
1. Take a string input from the user.  
2. Assign a pointer to the first character of the string.  
3. Use a loop to print characters one by one by dereferencing the pointer.  
4. Increment the pointer until the null terminator (`'\0'`) is reached.  

**Explanation:**  
A character pointer can iterate through a string by moving to the next memory location until it encounters the null terminator, printing each character in sequence.  

---

### **4. Traversing an Array Using Pointers**
**Algorithm:**
1. Initialize an integer array with predefined values.  
2. Calculate the array length using `sizeof`.  
3. Print the array in its original order using indexing.  
4. Assign a pointer to the **last element** of the array.  
5. Use a loop to print the array elements in reverse order by decrementing the pointer.  

**Explanation:**  
By pointing to the last element and decrementing the pointer, the array can be traversed in reverse without using array indices.  

---

## **Conclusion**
Pointers are a **fundamental feature** of C++ that provide direct access to memory addresses, increasing program flexibility and efficiency.  

From this experiment, we learned how to:
- Perform arithmetic operations on values accessed via pointers.  
- Understand pointer arithmetic in relation to data type sizes.  
- Traverse arrays and strings using pointers.  
- Iterate over data in both **forward** and **reverse** directions.  
