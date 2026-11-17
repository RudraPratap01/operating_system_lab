# Experiment 05 — String Operations in Shell Script & C

> **Submitted by:** Rudra Pratap  

---

### Objective
To calculate the length of an input string and extract a specified substring using two distinct approaches: Bash parameter expansion and a low-level C program manipulating character arrays.

---

### Source Code

| Program | Language | Method |
| :--- | :--- | :--- |
| [`string_ops.sh`](./string_ops.sh) | Bash | Parameter expansion (`${#str}`, `${str:start:length}`). |
| [`string_ops.c`](./string_ops.c) | C | Manual character array traversal and index iteration. |

---

### Comparison of Mechanisms

#### Bash Parameter Expansion
- **String Length:** `${#str}` computes character count automatically.
- **Substring Slice:** `${str:start:length}` extracts characters directly using zero-based indexing.

#### C Implementation
- **Input Handling:** `fgets(input_string, MAX_LEN, stdin)` safely reads up to newline.
- **Length Counting:** Traverses array indices until encountering null character `\0` or `\n`.
- **Substring Output:** Loops from `start_index` to `start_index + sub_length` with boundary checks against string length.

---

### How to Compile & Run

```bash
# Execute Bash Script
chmod +x string_ops.sh
./string_ops.sh

# Compile and Run C Program
gcc -Wall -Wextra string_ops.c -o string_ops
./string_ops
```

---

### Sample Output

```text
Enter a String: OperatingSystem
Length of string: 15
Enter starting position (0-based): 9
Enter number of characters: 6
Substring: System
```

*(See [`output.txt`](./output.txt) for terminal outputs).*

---

### Conclusion
Both Bash and C successfully performed length determination and substring extraction, illustrating shell-level convenience versus C-level array control.
