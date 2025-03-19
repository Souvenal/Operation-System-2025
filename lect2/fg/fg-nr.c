#include <stdio.h>
#include <assert.h>

typedef struct {
    int pc;
    char name;
    int n;

    int c1, c2;
} Frame;


int main() {
    Frame st[1000];
    Frame* top = st - 1;
    int retval;

    #define call(...) ({ *(++top) = (Frame){.pc = 0, __VA_ARGS__}; })

    #define ret(val) { top--; retval = (val); }



    for (int i = 1; i <= 10; i++) {
        call('f', i);
        while (1) {
            Frame* f = top;
            if (f < st) {
                break;
            }

            int nextPc = f->pc + 1;

            if (f->name == 'f') {
                switch (f->pc) {
                    case 0: if (f->n <= 1) ret(1); break;
                    case 1: call('f', f->n - 1); break;
                    case 2: f->c1 = retval; break;
                    case 3: call('g', f->n - 2); break;
                    case 4: f->c2 = retval; break;
                    case 5: ret(f->c1 + f->c2); break;
                    default: assert(0);
                }
            } else if (f->name == 'g') {
                switch(f->pc) {
                    case 0: if (f->n <= 1) ret(1); break;
                    case 1: call('f', f->n + 1); break;
                    case 2: f->c1 = retval; break;
                    case 3: call('g', f->n - 1); break;
                    case 4: f->c2 = retval; break;
                    case 5: ret(f->c1 + f->c2); break;
                    default: assert(0);
                }
            } else {
                assert(0);
            }

            f->pc = nextPc; 
        }

        printf("f(%d) = %d\n", i, retval);

    }
}