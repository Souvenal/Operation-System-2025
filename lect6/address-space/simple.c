// Note: this file is statically linked.

// 1MB of data.
char arr[10485760];

int main() {
    // 1MB of NOP instructions.
    asm volatile(
        ".rept 10485760;"
        "nop;"
        ".endr;"
    );
}
