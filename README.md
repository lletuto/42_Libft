# libft

> My reimplementation of essential C standard library functions — foundational project at École 42.

---

## Build

```bash
make        # compile libft.a
make bonus  # compile + add linked list functions
make re     # full recompile from scratch
make clean  # remove .o files
make fclean # remove .o files and libft.a
```

---

## 🔧 Functions

### Character checks

| Function | Description |
|---|---|
| `ft_isalpha` | Checks if character is alphabetic |
| `ft_isdigit` | Checks if character is a digit |
| `ft_isalnum` | Checks if character is alphanumeric |
| `ft_isascii` | Checks if character belongs to the ASCII table |
| `ft_isprint` | Checks if character is printable |
| `ft_toupper` | Converts a character to uppercase |
| `ft_tolower` | Converts a character to lowercase |

### String manipulation

| Function | Description |
|---|---|
| `ft_strlen` | Returns the length of a string |
| `ft_strlcpy` | Copies a string with a size limit |
| `ft_strlcat` | Concatenates two strings with a size limit |
| `ft_strchr` | Finds the first occurrence of a character |
| `ft_strrchr` | Finds the last occurrence of a character |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_strnstr` | Finds a substring within a string |
| `ft_strdup` | Duplicates a string (malloc included) |
| `ft_substr` | Extracts a substring |
| `ft_strjoin` | Concatenates two strings (malloc included) |
| `ft_strtrim` | Trims characters from the start and end of a string |
| `ft_split` | Splits a string using a delimiter |
| `ft_strmapi` | Applies a function to each character (returns a new string) |
| `ft_striteri` | Applies a function to each character (in place) |

### Memory manipulation

| Function | Description |
|---|---|
| `ft_memset` | Fills a memory area with a byte |
| `ft_bzero` | Sets a memory area to zero |
| `ft_memcpy` | Copies a memory area |
| `ft_memmove` | Copies a memory area (handles overlaps) |
| `ft_memchr` | Searches for a byte in a memory area |
| `ft_memcmp` | Compares two memory areas |
| `ft_calloc` | Allocates and zero-initializes a memory area |

### Conversion

| Function | Description |
|---|---|
| `ft_atoi` | Converts a string to an integer |
| `ft_itoa` | Converts an integer to a string |

### Output to file descriptor

| Function | Description |
|---|---|
| `ft_putchar_fd` | Writes a character to a fd |
| `ft_putstr_fd` | Writes a string to a fd |
| `ft_putendl_fd` | Writes a string followed by `\n` to a fd |
| `ft_putnbr_fd` | Writes an integer to a fd |

---

## ⭐ Bonus — Linked lists

```c
typedef struct s_list
{
    void          *content;
    struct s_list *next;
}   t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node |
| `ft_lstadd_front` | Adds a node at the front of the list |
| `ft_lstadd_back` | Adds a node at the back of the list |
| `ft_lstsize` | Returns the number of nodes |
| `ft_lstlast` | Returns the last node |
| `ft_lstdelone` | Deletes a single node |
| `ft_lstclear` | Deletes and frees the entire list |
| `ft_lstiter` | Applies a function to each node |
| `ft_lstmap` | Applies a function and returns a new list |

---

## Project structure

```
libft/
├── ft_*.c       # Sources
├── libft.h      # Header
├── Makefile
└── README.md
```

---

## École 42

Project completed as part of the École 42 curriculum. No standard libc functions are used — everything is reimplemented from scratch.
