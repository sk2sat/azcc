void alloc4(); int main(){ int *p; int *q; alloc4(&p, 1, 2, 4, 8); q = p + 3; return *q; }
