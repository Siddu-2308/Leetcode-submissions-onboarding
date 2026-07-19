# C++ `std::accumulate`

`std::accumulate` is an STL algorithm from the **`<numeric>`** header used to combine all elements in a range into a single value (sum, product, custom operations, etc.).

---

## Header

```cpp
#include <numeric>
```

---

## Syntax

```cpp
accumulate(first, last, initial_value);
```

### Parameters

| Parameter | Description |
|-----------|-------------|
| `first` | Iterator to the first element |
| `last` | Iterator to one past the last element |
| `initial_value` | Starting value of the accumulation |

---

## 1. Sum of a Vector

```cpp
#include <vector>
#include <numeric>

vector<int> nums = {1,2,3,4,5};

int sum = accumulate(nums.begin(), nums.end(), 0);

cout << sum;   // 15
```

---

## 2. Sum of a Subarray

```cpp
vector<int> nums = {1,2,3,4,5};

int sum = accumulate(nums.begin()+1, nums.begin()+4, 0);

// 2 + 3 + 4 = 9
```

---

## 3. Product of Elements

```cpp
#include <functional>

vector<int> nums = {1,2,3,4};

int product = accumulate(
    nums.begin(),
    nums.end(),
    1,
    multiplies<int>()
);

// Output: 24
```

---

## 4. Custom Operation (Maximum)

```cpp
vector<int> nums = {5,2,8,4};

int mx = accumulate(
    nums.begin(),
    nums.end(),
    nums[0],
    [](int a, int b) {
        return max(a, b);
    }
);

// Output: 8
```

---

## 5. Sum of Squares

```cpp
vector<int> nums = {1,2,3};

int ans = accumulate(
    nums.begin(),
    nums.end(),
    0,
    [](int sum, int x) {
        return sum + x*x;
    }
);

// Output: 14
```

---

## 6. String Concatenation

```cpp
vector<string> words = {"I ", "love ", "C++"};

string s = accumulate(
    words.begin(),
    words.end(),
    string("")
);

cout << s;

// Output: I love C++
```

---

## Custom Syntax

```cpp
accumulate(first, last, initial_value, operation);
```

Example:

```cpp
accumulate(v.begin(), v.end(), 0,
    [](int a, int b) {
        return a + b;
    });
```

---

## Time Complexity

- **O(n)**

Visits every element exactly once.

---

## Common Mistakes

### ❌ Forgetting `<numeric>`

```cpp
#include <numeric>
```

---

### ❌ Using the Wrong Initial Value Type

```cpp
vector<long long> nums;

long long sum = accumulate(nums.begin(), nums.end(), 0LL);
```

Use `0LL` instead of `0` when the result should be `long long`.

---

### ❌ Expecting `.sum()` Like Python

```cpp
nums.sum();      // ❌ Invalid
```

Correct:

```cpp
accumulate(nums.begin(), nums.end(), 0);
```

---

## Frequently Used in LeetCode

### Sum of Array

```cpp
int sum = accumulate(nums.begin(), nums.end(), 0);
```

### Sum of `long long`

```cpp
long long sum = accumulate(nums.begin(), nums.end(), 0LL);
```

### Sum of Subarray

```cpp
int sum = accumulate(nums.begin()+l, nums.begin()+r+1, 0);
```

### Product

```cpp
int product = accumulate(nums.begin(), nums.end(), 1, multiplies<int>());
```

---

## Quick Reference

| Task | Code |
|------|------|
| Sum | `accumulate(v.begin(), v.end(), 0)` |
| Long Long Sum | `accumulate(v.begin(), v.end(), 0LL)` |
| Product | `accumulate(v.begin(), v.end(), 1, multiplies<int>())` |
| Custom Logic | `accumulate(begin, end, init, lambda)` |
| Header | `#include <numeric>` |
| Complexity | **O(n)** |

---

## Key Points

- Part of the STL (`<numeric>`).
- Returns a **single accumulated value**.
- Default operation is **addition**.
- Supports **custom operations** using a lambda or function object.
- Works with vectors, arrays, strings, and any iterator range.
- One of the most commonly used STL algorithms in **LeetCode** and **Competitive Programming**.
