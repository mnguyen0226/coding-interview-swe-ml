# Coding Interview Practice for SWE & MLE

![alt-text](https://github.com/mnguyen0226/coding-interview-swe-ml/blob/main/docs/imgs/dsa_wallpaper.jpg)

This repository is for my personal usage & preparation for SWE and MLE interviews.

## 1. Data Structures, Containers, & Algorithms

## Data Structures from Scratch in C & C++

### :heavy_check_mark:[C++ Practice](https://github.com/mnguyen0226/coding-interview-swe-ml/tree/main/src/practices/cpp)

### :heavy_check_mark:[C Practice](https://github.com/mnguyen0226/coding-interview-swe-ml/tree/main/src/practices/c)

### :heavy_check_mark:[Big-O Cheatsheet](https://www.bigocheatsheet.com/)

### :heavy_check_mark: Array

- About: Array is a data structure thast stores a fixed-size sequential collection of elements of the same type.
- :runner::clock1230: Time Complexity - Worst Case:
  - Access: `O(1)`
  - Search: `O(n)`
  - Insert: `O(n)`
  - Remove: `O(n)`

### :heavy_check_mark: Linked Lists

- About: A linked list is a linear collection of data elements, called nodes, each pointing to the next node by means of a pointer. It is a data structure consisting of a group of nodes which together represent a sequence. Generally, we call the first node of a linked list the "head" of the linked list, and we always keep the access of the head of the linked list so that we have access to all the nodes of a linked list. This is also called "Singly Linked List" in which each node points to the next node and the last node points to null.
- Implementation: C, C++
- Operations:

  ```c++
  // inserts a node at the begin
  void insert_at_beginning(LinkedList *l, Node *n);

  // inserts a node at the end
  void insert_at_last(LinkedList *l, Node *n);

  // inserts a node after any node
  void insert_node_after(Node *n, Node *a);

  // deletes a node
  void delete_node(LinkedList *l, Node *n);
  ```

- :runner::clock1230: Time Complexity - Worst Case:
  - Access: `O(n)`
  - Search: `O(n)`
  - Insert: `O(1)`
  - Remove: `O(1)`

### :heavy_check_mark: Doubly Linked List

- About: A linked list in which each node has two pointers, p and n, such that p points to the previous node and n points to the next node; the last node's n pointer points to null. Compared to Singly Linked List, Doubly Linked List requires extra space because it stores one extra pointer for each node. However, Doubly Linked List is comparatively more efficient than singly linked list because we can iterate in both direction.
- Implementation: C, C++
- Operations:

  ```c++
  // inserts a node at the front/head
  void insert_at_front(DoublyLinkedList *l, Node *n);

  // inserts a node at the tail/end
  void insert_at_tail(DoublyLinkedList *l, Node *n);

  // inserts a node after any node
  void insert_node_after(Node *n, Node *a);

  // deletes a node
  void delete_node(DoublyLinkedList *l, Node *n);
  ```

- :runner::clock1230: Time Complexity - Worst Case:
  - Access: `O(n)`
  - Search: `O(n)`
  - Insert: `O(1)`
  - Remove: `O(1)`

### :heavy_check_mark: Circular Linked List

- About: A linked list in which each node points to the next node and the last node points back to the first node.
- Implementation: C, C++
- Operations:

  ```c++
  // inserts a node after a node
  void insert_after(Node *n, Node *a);

  // inserts a node at the last/head
  void insert_at_last(CircularLinkedList *c, Node *n);

  // delete a node
  void delete_node(CircularLinkedList *c, Node *n);
  ```

- :runner::clock1230: Time Complexity - Worst Case:
  - Access: `O(n)`
  - Search: `O(n)`
  - Insert: `O(1)`
  - Remove: `O(1)`

### :question: Skip List

### :heavy_check_mark: Stacks

- About:
  - A Stack is a collection of elements, with two principle operations: _push_, which adds to the collection, and _pop_, which removes the most recently added element.
  - **Last In, First Out (LIFO)** data structure: the most recently added object is the first to be removed.
  - Stack is a Abstract Data Type (ADT) because it works on LIFO policy which provides operations like push, pop,... for users to interact with the data. We can implement Stacks in both array or linked list.
- Implementation:
  - With array in C, C++
  - With linked list in C, C++
- Operations:

  ```c++
  // adds a new element to the stack's top
  void push(Stack *s, Node *n);

  // removes and returns the top-most from the stack
  int pop(Stack *s);

  // return the top-most but not removes from the stack
  int get_top(Stack *s);

  // check whether any elements in the stack or not
  int is_empty(Stack *s)
  ```

- :runner::clock1230: Time Complexity - Worst Case:
  - Access: `O(n)`
  - Search: `O(n)`
  - Insert: `O(1)`
  - Remove: `O(1)`

### :heavy_check_mark: Queues

- About:
  - A Queue is a collection of element, with two principle operations: _enqueue_, which inserts an element into the queue, and _dequeue_, which removes an element from the queue.
  - **First In, First Out (FIFO)** data structure: the oldest added object is the first to be removed.
  - Similar to Stack, Queue is also an ADT.
- Implementation:
  - With array in C, C++
  - With linked list in C, C++
- Operations:

  ```c++
  // adds an item to the tail of queue
  void enqueue(Queue *q, Node *n);

  // returns and deletes the front element front queue
  int dequeue(Queue *q);

  // checks whether the queue has any element or not
  int is_empty(Queue *q);

  // returns but not deletes the front element of the queue
  int front(Queue *q);
  ```

- :runner::clock1230: Time Complexity - Worst Case:
  - Access: `O(n)`
  - Search: `O(n)`
  - Insert: `O(1)`
  - Remove: `O(1)`

### :heavy_check_mark: Trees

- About:
  - Tree is a non-linear data structure. Tree stores data in a hierarchical order.
- Terminologies:<br>
  ![alt-text](https://github.com/mnguyen0226/coding-interview-swe-ml/blob/main/docs/imgs/resize_tree_structure.png)

  - _Root:_ The topmost node of the hierarchy is called the root of the tree.
  - _Child:_ Nodes next in the hierachy are the children of the previous node.
  - _Parent:_ The node just previous to the current node is the parent of the current node.
  - _Siblings:_ Nodes with the same parent are called siblings.
  - _Ancestors:_ nodes which are higher in the hierarchy are ancestors of the given node.
  - _Descendents:_ Nodes which are lower in the hierarchy are descendants of a given node.
  - _Internal Nodes:_ Nodes with at least one child are internal nodes.
  - _External Nodes/Leaves:_ Nodes which don't have any child are called leaves of tree.
  - _Edge:_ The link bedtween two nodes are called edge.
    ![alt-text](https://github.com/mnguyen0226/coding-interview-swe-ml/blob/main/docs/imgs/tree_level_height.png)
  - _Level:_ The root of a tree is at level 0 and the nodes whose parent is root are at level 1 and so on.
  - _Height:_ The height of a node is the number of nodes (excluding the node) on the longest path from the node to a leaf.
  - _Height of a tree:_ It is the height of its root.
    ![alt-text](https://github.com/mnguyen0226/coding-interview-swe-ml/blob/main/docs/imgs/tree_depth_degree.png)
  - _Depth:_ The depth of a node is the number of nodes (excluding the node) on the path from the root to the node.
  - _Node Degree:_ It is the max number of children a node has.
  - _Tree Degree:_ It is the max number of node degree. 3 for the image above.

- Implementation: C, C++

### :heavy_check_mark: Binary Trees

- About:<br>
  ![alt-text](https://github.com/mnguyen0226/coding-interview-swe-ml/blob/main/docs/imgs/bt_vs_full_bt.png)

  - _A Binary Tree_ is a tree data structure in which each node has at most two children, which are reffered to as the left and right child.
  - _A Full Binary Tree_ is a binary tree in which every ndoe has 2 children excep the leaves.
    ![alt-text](https://github.com/mnguyen0226/coding-interview-swe-ml/blob/main/docs/imgs/complete_bt_vs_perfect_bt.png)
  - _A Complete Binary Tree_ is a binary tree which is completely filled with a possible exception at the bottom level, ie, the last level may not be completely filled and the bottom level is filled from left to right.
  - _A Perfect Binary Tree_ is a binary tree that has each leaf is at the same level and all the interior nodes have two children.

- Implementation:
  - With array in C, C++
  - with linked list in C, C++
- Operations:

  ```c++
  // prints binary tree pre-order
  void pre_order_traversal(Node *n);

  // prints binary tree post-order
  void post_order_traversal(Node *n);

  // prints binary tree in-order
  void in_order_traversal(Node *n);
  ```

- :runner::clock1230: Time Complexity - Worst Case:
  - Access: `O(n)`
  - Search: `O(n)`
  - Insert: `O(n)`
  - Remove: `O(n)`

### :heavy_check_mark: Binary Search Trees (BST)

- About:
  - A BST is a special kind of binary tree in which the values of all the nodes of the left sub-tree of any node of the tree are smaller than the value of the node. Also, the values of all the nodes of the right sub-tree of any node are greater than the value of the node.
  - In-order traversal of BST prints all the data in sorted order.
  - To find the max/min element in BST, we have to find the right-most/left-most element respectively.
- Implementation: C, C++
- Operations:

  ```c++
  // inserts a new node in BST
  void insert_node(BST *bst, Node *n);

  // deletes any node in the BST
  void delete_node(BST *bst, Node *n);

  // prints sorted order
  void in_order_traversal(BST *bst, Node *n);
  ```

- :runner::clock1230: Time Complexity - Worst Case:
  - Access: `O(n)`
  - Search: `O(n)`
  - Insert: `O(n)`
  - Remove: `O(n)`
- :runner::clock1230: Time Complexity - Average Case:
  - Access: `O(log(n))`
  - Search: `O(log(n))`
  - Insert: `O(log(n))`
  - Remove: `O(log(n))`

### :heavy_check_mark::heavy_exclamation_mark: Red-Black Tree

![alt-text](https://github.com/mnguyen0226/coding-interview-swe-ml/blob/main/docs/imgs/rb_tree.png)

- About:
  - Red-Black Tree is a type of self-balanceing binary seach tree. Each node has an extra bit, which represents its color red or black.
  - Properties that ensure the tree's height maintains at `O(log(n))`
    - _Root Property:_ The root is black.
    - _External Property:_ Every external node is black.
    - _Red Property:_ The children of a red node is black.
    - _Depth Property:_ All external nodes have the same black depth.
  - Insertion: Any newly added node is red. but we have to rebalance the tree again so there be no consecutive red node if the parent of the new node is red.
  - Deletion: Similar to BST, we also need a function to check and fix violations.
- Implementation: C, C++
- Operations:

  ```c++
  // inserts a node
  void insert_node(RBTree *rbt, Node *n);

  // deletes a node
  void delete_node(RBTree *rbt, Node *n);

  // prints sorted order
  void in_order_traversal(RBTree *rbt, Node *n);
  ```

- :runner::clock1230: Time Complexity - Worst Case:
  - Access: `O(log(n))`
  - Search: `O(log(n))`
  - Insert: `O(log(n))`
  - Remove: `O(log(n))`

### :soon: AVL Trees

- About:
- Implementation:
- Operations:
- :runner::clock1230: Time Complexity - Worst Case:
  - Access:
  - Search:
  - Insert:
  - Remove:

### :soon: Splay Trees

- About:
- Implementation:
- Operations:
- :runner::clock1230: Time Complexity - Worst Case:
  - Access:
  - Search:
  - Insert:
  - Remove:

### :soon: Heap

- About:
- Implementation:
- Operations:
- :runner::clock1230: Time Complexity - Worst Case:
  - Access:
  - Search:
  - Insert:
  - Remove:

### :soon: Priority Queues

- About:
- Implementation:
- Operations:
- :runner::clock1230: Time Complexity - Worst Case:
  - Access:
  - Search:
  - Insert:
  - Remove:

### :soon: Graphs

- About:
- Implementation:
- Operations:
- :runner::clock1230: Time Complexity - Worst Case:
  - Access:
  - Search:
  - Insert:
  - Remove:

### :soon: Hashing

- About:
- Implementation:
- Operations:
- :runner::clock1230: Time Complexity - Worst Case:
  - Access:
  - Search:
  - Insert:
  - Remove

### :question: Trie

- About:
- Implementation:
- Operations:
- :runner::clock1230: Time Complexity - Worst Case:
  - Access:
  - Search:
  - Insert:
  - Remove

### :question: Cartesian Trees

- About:
- Implementation:
- Operations:
- :runner::clock1230: Time Complexity - Worst Case:
  - Access:
  - Search:
  - Insert:
  - Remove

### :question: B-Trees

- About:
- Implementation:
- Operations:
- :runner::clock1230: Time Complexity - Worst Case:
  - Access:
  - Search:
  - Insert:
  - Remove

### :question: KD Trees

- About:
- Implementation:
- Operations:
- :runner::clock1230: Time Complexity - Worst Case:
  - Access:
  - Search:
  - Insert:
  - Remove

### :question: Fenwick Trees

- About:
- Implementation:
- Operations:
- :runner::clock1230: Time Complexity - Worst Case:
  - Access:
  - Search:
  - Insert:
  - Remove

### :question: Segment Trees

- About:
- Implementation:
- Operations:
- :runner::clock1230: Time Complexity - Worst Case:
  - Access:
  - Search:
  - Insert:
  - Remove

## Containers in C++

List of [operators](https://github.com/mnguyen0226/coding-interview-swe-ml/tree/main/src/packages/cpp_data_structures/containers).

### Sequence Containers

#### :heavy_check_mark: 1. `<array>` - array

#### :heavy_check_mark: 2. `<vector>` - dynamic array

- About: Vectors are similar to dynamic arrays with the ability to resize itself automatically when an element is inserted or delete, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be acessed or traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes there may be a need of extending the array. Removing the last element takes only constant time because no resizing happens. Inserting or erasing at beginning or in the middle is linear time.
- :runner::clock1230: Time Complexity - Worst Case:

  - Access: `O(1)`
  - Search: `O(n)`
  - Insert: `O(n)`
  - Remove: `O(n)`

#### :heavy_check_mark: 3. `<deque>` - double ended queue

- About: Both vectors and deques provide a very similar interface and can be used for similar purposes, but internally both work in quite different ways: While vectors use a single array that needs to be occasionally reallocated for growth, the elements of a deque can be scattered in different chunks of storage, with the container keeping the necessary information internally to provide direct access to any of its elements in constant time and with a uniform sequential interface (through iterators).

#### :heavy_check_mark: 4. `<forward_list>` - singly linked list

#### :heavy_check_mark: 5. `<list>` - doubly linked list

### Containers Adaptors

#### :heavy_check_mark: 1. `<stack>` - LIFO stack

#### :heavy_check_mark: 2. `<queue>` - FIFO queue

#### :heavy_check_mark: 3. `<priority_queue>` - heap

- About: Priority queue has its first element is always the greatest of the elements it contains, according to some strict weak ordering criterion. This data structure is similar to heap where elements can be inserted at any moment, and only the max heap element can be retrieved.

### Associative Containers

#### :heavy_check_mark: 1. `<set>` - binary search tree

- About: Sets are containers that store unique elements following a specific order. In a set, the value of an element also identifier it , and each value must be unique. THe value of eleemnts in a set cannot be modified once in the container (the elements are always const), but they can be inserted or removed from the container. The elements in a set are alawy as sorted follwoing a specific strict weak ordering criterion indicated by its internal comparison object.

#### :heavy_check_mark: 2. `<multiset>` - multiple-key set, bst

- About: Multisets are containers that store elements following a specific order, and where multiple elements can have equivalent value. This container has the same operation as set/bst.

#### :heavy_check_mark: 3. `<map>` - associative arrays, bst

- Maps store elements formed by a combination of a key value and a mapped value, following a specific order. In a map, the key values are generally used to sort and uniquely identify the elements, while the mapped values store the content associated to this key. Internally, the elements in a map are always sorted by its key. Maps are implemented as bst.

#### :heavy_check_mark: 4. `<multimap>` - multiple-key map

- About: multi-map stores elements formed by a combination of a key value and a mapped value following a specific order, and where multiple elements can have equivalent keys.

### Unordered Associative Containers

#### :heavy_check_mark: 1. `<unordered_set>` - unordered set, hash

- About: Unordered sets store unique elements in no particular order and which allow for fast retrieval of individual elements based on their value. The value of an eleemnt is at the same time its key that identifies it uniquely. Keys are immutable, therefore, the elements in an unordered_set can't be modified once in the container, however, they can be inserted and removed. Internall, the elements are not sorted in any particular order, but organized into buckets depending on their hash values to allow for fast access to individual eleemnts directly by their values.

#### :heavy_check_mark: 2. `<unordered_multiset>` - unordered multiset

- About: Unordered-multiset has similar characteristics as unordered_set but allow different elements to have equivalent values.

#### :heavy_check_mark: 3. `<unordered_map>` - unordered map

- About: Unordered maps are associative containers that store elements formed by the combination of a key value and a mapped value, and which allows for fast retrieval of individual elements based on their keys. In an unordered_map, the key value is generally used to uniquely indentify the element, while the mapped value is an object with the content associated to this key. Types of key and mapped value may differ. Internally, the elements in the unordered_map are not sorted in any particular order with respect tro either their key or mapped values, but organized into buckets depending to their hash values to allow for fast access to individual elements directly by their key values (with a constant average time complexity on average). Iterators in the containe are at least singly linked list iterattors. 

#### :heavy_check_mark: 4. `<unordered_multimap>` - unordered multimap

- About : Unordered multimaps are similar to unordered maps; however; these containers allows duplications of keys, regardless of values of data.

## Algorithms from Scratch in C & C++

- Algorithms Coursera (TBD)

### Sort Algorithms

#### :soon: Quick Sort

#### :soon: Merge Sort

#### :question: Tim Sort

#### :soon: Heap Sort

#### :soon: Bubble Sort

#### :soon: Insertion Sort

#### :soon: Selection Sort

#### :question: Tree Sort

#### :soon: Shell Sort

#### :question: Bucket Sort

#### :question: Radix Sort

#### :question: Counting Sort

#### :question: Cube Sort

### Graph Algorithms

#### :soon: Depth First Search

#### :soon: Breadth First Search

#### :question: Topological Sort

#### :soon: Dijkstra's Algorithm

#### :question: Bellman-Ford Algorithm

#### :question: Floyd-Warshall Algorithm

#### :soon: Prim's Algorithm

## Other Topics

### :question: Run-time Analysis Deep-Dive

### :question: Greedy Algorithms

### :question: Bitmasks

## 2. Machine Learning & Deep Learning

### :heavy_check_mark: Coursera Deep Learning Course [(Link + Completion Certification)](https://github.com/mnguyen0226/deep-learning-coursera).

### :question: FastAI ML Course - Pytorch practice (TBD)

### :question: Fast AI DL Course - Pytorch practice (TBD)

### :question: Kaggle

### :question: Deep Learning Book (TBD)

- Mechanics of Machine Learnings https://mlbook.explained.ai/

### :question: MLOps Coursera (TBD)

### :question: Reinforcement Learning Coursera (TBD)
