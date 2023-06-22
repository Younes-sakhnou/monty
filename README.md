# Stacks, Queues - LIFO, FIFO

This readme provides an overview of LIFO and FIFO, Stacks, Queues, their implementations, common use cases, and best practices for global variables.

## Introduction
Data structures are fundamental to computer science and programming. They organize and manipulate data efficiently and are used in many fields such as database management, artificial intelligence, and graphics.

## LIFO and FIFO

LIFO stands for Last-In, First-Out, while FIFO stands for First-In, First-Out. These are two methods of organizing and manipulating data in a data structure.

## Stack

A stack is a data structure that follows the LIFO principle. It has two primary operations, namely push (adding an element to the top) and pop (removing an element from the top). Stacks are used to keep track of function calls, undo/redo functionalities, and syntax parsing.

### When to Use a Stack

Use a stack when you need to access items in reverse order, e.g., undoing a sequence of actions performed on a dataset.

## Queue

Queue is a data structure that follows the FIFO principle. It has two primary operations, namely enqueue (adding an element at the rear) and dequeue (removing an element from the front). They are used for handling events in the order they occur, breadth-first search algorithms, etc.

### When to Use a Queue

Use a queue when you need to handle items in the order they arrive, e.g., simulating wait times in a customer service center.

## Implementations of Stacks and Queues

Stacks and queues can be implemented using arrays, linked lists, and dynamic arrays.

## Common Use Cases

Stacks are commonly used in undo/redo features, memory management, and syntax parsing. Queues are often applied in scheduling algorithms, network buffers, and print spoolers.

## Best Practices for Global Variables

Global variables should be avoided wherever possible because they increase complexity and can cause unexpected behavior. If necessary, they should be declared with static storage class, which keeps them within the scope of the module in which they are defined.

## Conclusion

Data structures are essential tools for software developers who want to write efficient and scalable code. Understanding the principles behind LIFO and FIFO, stacks and queues, their implementations, and common use cases is critical for building robust and reliable applications.

