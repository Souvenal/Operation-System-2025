#include <thread.h>

extern long sum, N;

#define LOCKED   1
#define UNLOCKED 0

int status = UNLOCKED;

void lock() {
    int expected;
    do {
        // Try compare status with expected.
        // If the comparison succeeded, perform
        // an exchange.
        expected = UNLOCKED;
        asm volatile (
            "lock cmpxchgl %2, %1"
            : "+a" (expected) // Value for comparison.
                              // x86 uses eax/rax.
            : "m" (status),   // Memory location.
              "r" (LOCKED)    // Value to be written if
                              // status == expected
            : "memory", "cc"
        );
    } while (expected != UNLOCKED);
}

void unlock() {
    status = UNLOCKED;
    asm volatile("" ::: "memory");
    __sync_synchronize();
}


void T_sum() {
    for (int i = 0; i < N; i++) {
        lock();
        sum++;
        unlock();
    }
}
