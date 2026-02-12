#include <stdio.h>
#include "circular_buffer.h"

int main()
{
    uint8_t storage[4];   // raw memory
    circ_buff_t cb;       // circular buffer struct

    circ_init(&cb, storage, 4);

    printf("Pushing values...\n");

    circ_bbuf_push(&cb, 10);
    circ_bbuf_push(&cb, 20);
    circ_bbuf_push(&cb, 30);

    // Try pushing one more (may fail depending on design)
    if (circ_bbuf_push(&cb, 40) != 0)
        printf("Buffer full!\n");

    uint8_t value;

    printf("Popping values...\n");

    while (circ_bbuf_pop(&cb, &value) == 0)
    {
        printf("Popped: %d\n", value);
    }

    printf("Buffer empty!\n");

    return 0;
}
