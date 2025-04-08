# Registers

| Register | Hex Value | Decimal Value |
|----------|-----------|---------------|
| rax | N/A | N/A |
| rbx | N/A | N/A |
| rcx | N/A | N/A |
| rdx | N/A | N/A |
| rsi | N/A | N/A |
| rdi | N/A | N/A |
| rbp | N/A | N/A |
| rsp | N/A | N/A |
| r8 | N/A | N/A |
| r9 | N/A | N/A |
| r10 | N/A | N/A |
| r11 | N/A | N/A |
| r12 | N/A | N/A |
| r13 | N/A | N/A |
| r14 | N/A | N/A |
| r15 | N/A | N/A |
| rip | N/A | N/A |
| eflags | N/A | N/A |

# Memory Mappings

| Start Address | End Address | Size | Permissions | Name |
|---------------|-------------|------|--------------|------|
| 0xaaaaaaaa0000 | 0xaaaaad2a1000 | 0x2801000 | r-xp | /home/souvenal/Operation-System-2025/lect6/address-space/simple |
| 0xaaaaad2b0000 | 0xaaaaad2b1000 | 0x1000 | r--p | /home/souvenal/Operation-System-2025/lect6/address-space/simple |
| 0xaaaaad2b1000 | 0xaaaaad2b2000 | 0x1000 | rw-p | /home/souvenal/Operation-System-2025/lect6/address-space/simple |
| 0xaaaaad2b2000 | 0xaaaaadcb2000 | 0xa00000 | rw-p | [heap] |
| 0xfffff7e10000 | 0xfffff7f98000 | 0x188000 | r-xp | /usr/lib/aarch64-linux-gnu/libc.so.6 |
| 0xfffff7fa7000 | 0xfffff7fab000 | 0x4000 | r--p | /usr/lib/aarch64-linux-gnu/libc.so.6 |
| 0xfffff7fab000 | 0xfffff7fad000 | 0x2000 | rw-p | /usr/lib/aarch64-linux-gnu/libc.so.6 |
| 0xfffff7fad000 | 0xfffff7fb9000 | 0xc000 | rw-p |  |
| 0xfffff7fc2000 | 0xfffff7fed000 | 0x2b000 | r-xp | /usr/lib/aarch64-linux-gnu/ld-linux-aarch64.so.1 |
| 0xfffff7fed000 | 0xfffff7fef000 | 0x2000 | rw-p |  |
| 0xfffff7ff7000 | 0xfffff7ff9000 | 0x2000 | rw-p |  |
| 0xfffff7ff9000 | 0xfffff7ffb000 | 0x2000 | r--p | [vvar] |
| 0xfffff7ffb000 | 0xfffff7ffc000 | 0x1000 | r-xp | [vdso] |
| 0xfffff7ffc000 | 0xfffff7ffe000 | 0x2000 | r--p | /usr/lib/aarch64-linux-gnu/ld-linux-aarch64.so.1 |
| 0xfffff7ffe000 | 0xfffff8000000 | 0x2000 | rw-p | /usr/lib/aarch64-linux-gnu/ld-linux-aarch64.so.1 |
| 0xfffffffdf000 | 0x1000000000000 | 0x21000 | rw-p | [stack] |
