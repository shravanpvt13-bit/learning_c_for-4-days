// LeetCode 344 - Reverse String (Easy) | Topic: two pointers
#include <stdio.h>
#include <string.h>

void reverseString(char* s, int n) {
    char *l = s, *r = s + n - 1;
    while (l < r) { char t = *l; *l++ = *r; *r-- = t; }
}

int main() {
    char s[] = "hello";
    reverseString(s, strlen(s));
    printf("%s\n", s);   // olleh
    return 0;
}
