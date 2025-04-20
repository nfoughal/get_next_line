# get_next_line

This project consists of building a function that reads a file line by line, returning each line with every call. It’s a foundational exercise in file descriptor handling, memory management, and buffer logic in C.

## 📌 Objective

Implement a function with the following prototype:
```c
char *get_next_line(int fd);
```

- It returns one line at a time from the file descriptor `fd`.
- It handles multiple file descriptors at the same time.
- It manages memory efficiently without leaks.

## 🧠 Key Concepts

- File descriptors (`read`, `open`, `close`)
- Static variables and buffer logic
- Memory allocation and string manipulation
- Efficient line reading without over-reading

## 🔧 How It Works

The function reads from a file descriptor using a buffer (with a size defined by `BUFFER_SIZE`). It stores the read content statically between calls to return the next full line.

Example:
```c
int fd = open("file.txt", O_RDONLY);
char *line;

while ((line = get_next_line(fd)) != NULL)
{
    printf("%s", line);
    free(line);
}
close(fd);
```

## 📁 File Structure

- `get_next_line.c`: Main logic of the function
- `get_next_line_utils.c`: Helper functions (e.g., `ft_strjoin`, `ft_strlen`, etc.)
- `get_next_line.h`: Header file
- `main.c`: (optional) Tester

## 📦 Usage

Compile with:
```bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c
```

Run your program with a valid file input:
```bash
./a.out
```

## 📚 Learning Outcomes

- Master reading files one line at a time
- Handle edge cases (newline, EOF, etc.)
- Manage memory properly across function calls

## ✅ Bonus 

- Support for multiple file descriptors simultaneously

## 👨‍💻 Author

**Nabil Foughali**  
[GitHub Profile](https://github.com/nfoughal)

---

> Developed as part of the 42 Network at 1337 Khouribga
