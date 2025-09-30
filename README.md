
# QUEUE IMPLEMENTATION USING ARRAY

**Aim:**
To study and implement the **Queue** data structure in C++ using arrays with the following operations:

* **Enqueue (Insert)**
* **Dequeue (Delete)**
* **Display**

**Tools Used:**

* VS Code or any Online C++ Compiler

---

## Theory

A **Queue** is a linear data structure that follows the **FIFO (First In First Out)** principle. This means that the element that is **inserted first is removed first**, just like a queue of people waiting in line.

Each queue has two main pointers:

* **Front** → Points to the element to be deleted next.
* **Rear** → Points to the last inserted element.

### Main Operations

1. **Enqueue (Insert):** Adds an element to the **rear** of the queue.
2. **Dequeue (Delete):** Removes an element from the **front** of the queue.
3. **Peek:** Shows the element at the **front** without removing it.
4. **Display:** Prints all elements from front to rear.

---

### Representation of a Queue

```
FRONT → [10][20][30] ← REAR
```

Here:

* `10` is the first element (oldest, to be deleted first).
* `30` is the most recently inserted element.

---

### Linear Queue vs Circular Queue

* **Linear Queue:**

  * Rear moves forward with every insertion.
  * If deletions happen, free space at the beginning is not reused.
  * Can lead to wasted memory.

* **Circular Queue:**

  * Rear wraps around to the beginning when space is available.
  * Optimizes memory by reusing freed spaces.

---

### Why Queue is Needed?

1. **Fairness:** Ensures elements are processed in the order they arrive.
2. **Buffering:** Useful when data comes in bursts (e.g., printer jobs, CPU tasks).
3. **Scheduling:** Helps operating systems manage processes.
4. **Sequential Processing:** Maintains strict ordering in data flow.

---

### Applications of Queue

* **Operating Systems:** Process scheduling, IO buffers.
* **Networking:** Packet switching, load balancing.
* **Printers:** Print jobs queued sequentially.
* **Customer Service:** Calls or requests processed in order.
* **Simulations:** Modeling queues in real-world systems (traffic, supermarkets).

---

### General Syntax of a Queue in C++

```cpp
class Queue {
    int arr[SIZE];   // Array storage
    int front, rear; // Pointers for tracking

public:
    Queue();           // Constructor
    void enqueue(int); // Insert operation
    void dequeue();    // Delete operation
    void display();    // Display elements
};
```

---

## Algorithms

### 1. Enqueue (Insert)

1. Check if `rear == SIZE - 1`.

   * If true → print **Queue Overflow**.
2. If `front == -1` → set `front = 0`.
3. Increment `rear`.
4. Insert the element at `arr[rear]`.
5. Print confirmation.

---

### 2. Dequeue (Delete)

1. Check if queue is empty (`front == -1` OR `front > rear`).

   * If true → print **Queue Underflow**.
2. Print the element at `arr[front]` as deleted.
3. Increment `front`.

---

### 3. Display

1. Check if queue is empty (`front == -1` OR `front > rear`).

   * If true → print **Queue Empty**.
2. Traverse from `front` to `rear`.
3. Print each element in order.

---

## Key Learning Outcomes

* Understand how a queue follows **FIFO ordering**.
* Learn how **front and rear pointers** work.
* Implement **enqueue, dequeue, and display** using arrays.
* Handle **Overflow** and **Underflow** conditions.
* Realize the limitations of linear queues → need for **circular queues**.

---

## Advantages

* Maintains fairness in processing (FIFO).
* Simple implementation using arrays.
* Constant time O(1) for insertion and deletion.
* Foundation for more complex structures like **priority queues, deques, circular queues**.

---

## Conclusion

Queue is one of the most fundamental data structures that ensures **orderly and fair processing** of elements. By implementing it using arrays, we learn how **front and rear pointers** help in managing insertion and deletion operations. Although a **linear queue** is simple to implement, it can lead to memory wastage, which highlights the importance of **circular queues** for efficient memory utilization. Overall, queues are widely used in **operating systems, networking, and real-world simulations**, making them an essential concept for both academics and practical applications.

