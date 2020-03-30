## Big-O

### What is Big-O

Big-O notation is a mathematical notation that describes the limiting behavior of a function when the argument tends towards a particular value or infinity. It is a member of a family of notations invented by Paul Bachmann, Edmund Landau and others collectively called Bachmann Landau notation or asymptotic notation.

#### Write a function that accepts a string input and returns a reversed copy.

There are maybe ten or more ways to do solve the problem. But we need to know which solution works better relative to the number of time it takes to execute or space it takes during execution. Among all the possible solutions, the solution which takes less time and less spcae to execute then that is the best solution.

#### Example

Suppose we want to write a function that calculates the sum of all numbers from 1 upto (and including) some number n.

one arrroach

```javascript
const addUpto = n => {
  let total = 0;
  for (let i = 1; i <= n; i++) {
    total += i;
  }
  return total;
};

console.log(addUpto(6));
```

second approach

```javascript
const addUpto = n => {
  return (n * (n + 1)) / 2;
};

console.log(addUpto(6));
```

Both approach return the same result in the end. But both approach are not same.

Now the question may arise which approach is better?

### What does better mean?

- Faster?
- Less memory-intensive?
- More readable?

#### Faster

To visualize which approach is faster we can use timers in the code. First approach may take more than 1 seconds where second approach takes 0.0001+ seconds which is nearly 0.

#### Rules of thumb

- Constant don't matter
- Smaller terms don't matter
- Arithmetic operations are constant
- variable assignment is constant
- Accessing elements in an array is constant
- In a loop, the complexity is the length of the loop times the complexity of whatever happens inside of the loop

## Space complexity

- Most primitives (boolean, number, undefined, null) are constant space.
- Strings require O(n) space (where n is the string length)
- Reference types are generally O(n), where n is the length (for arrays) or the number of keys (for objects)

## What does Log / Logarithm means?

Logarithm is the inverse of the exponentiation.

`log2(8) = 3 ==> 2^3 = 8`

`log2(value) = exponent ==> 2^exponent = value`

**_The logarithm of a number roughly measures the number of times you can divide that number by 2 before you get a value that's less than or equal to one_**

## Why logarithm matters?

- Certain searching algorithms have logarithmic time complexity
- Efficient sorting algorithms involve logarithms
- Recursion somethimes involves logarithmic space complexity

## Recap

- To analyze the performance of an algorithm, we use Big O Notation
- Big O Notation can give us a high level understanding of the time or space complexity of an algorithm
- Big O Notation doesn't care about precision, only about general trends
- The time or space complexity depends only on the algorithm, not the hardware used to run the algorithm
- Big O Notation is everywhere, so get lots of practice!

## Built-in Data Structure

### Objects

Unordered, key value pairs!

```javascript
let instructor = {
  firstName: "kelly",
  isInstructor: "true",
  favoriteNumber: [1, 2, 3, 4]
};
```

#### When to use objects?

- When you don't need order
- When you need fast access/ insertion and removal

#### Big O of Objects

| Task      | Complexity |
| --------- | :--------: |
| Insertion |    O(1)    |
| Removal   |    O(1)    |
| Searching |    O(n)    |
| Access    |    O(1)    |

Now question may arise why **searching** takes linear time complexity?? :thinking:

Searching means we need to look for a value in the objects. Let's say we need to know in which value returns boolean expression? So we have to look through all the keys that holds value. First key is _firstName_ which returns a string **Kelly**. This is not the value we are searching for. So we go to the next key _isInstructor_ which returns boolean value **true**. We found our desired value.

#### Big O Object Methods 

- Object.keys  - **O(n)**
- Object.values - **O(n)**
- Object.entries - **O(n)**
- hasOwnProperty - **O(1)**

#### Big O of Array Operations

- push - **O(1)**
- pop - **O(1)**
- shift - **O(n)**
- unshift - **O(n)**
- concat - **O(n)**
- slice - **O(n)**
- splice - **O(n)**
- sort - **O(nlogn)**
- forEach/map/filter/reduce/etc - **O(n)**