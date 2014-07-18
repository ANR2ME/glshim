#ifndef TACK_H
#define TACK_H

typedef struct {
    void **data;
    int len, cap, pos;
} tack_t;

extern void tack_push(tack_t *stack, void *data);
extern void *tack_cur(tack_t *stack);
extern void *tack_first(tack_t *stack);
extern void *tack_peek(tack_t *stack);
extern void *tack_pop(tack_t *stack);
extern void *tack_shift(tack_t *stack);

#endif