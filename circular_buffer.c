#include "circular_buffer.h"
#include <stdio.h> 

void circ_init(circ_buff_t *c, uint8_t *buffer, int maxlen)
{
    c->buffer = buffer;
    c->head = 0;
    c->tail = 0;
    c->maxlen = maxlen;
}
int circ_bbuf_push(circ_buff_t *c,uint8_t data){
    int next; 
    next = c-> head+1;
    if(next >= c-> maxlen)
        next = 0;
    if (next == c-> tail)
        return -1; 
    c-> buffer[c->head] = data; 
    c-> head = next; 
    return 0; 
}
int circ_bbuf_pop(circ_buff_t *c, uint8_t *data){
    int next; 
    if (c -> head == c -> tail)
        return -1; 
    next = c-> tail +1; 
    if (next >= c-> maxlen)
        next = 0;
    *data = c-> buffer[c->tail];
    c-> tail = next; 
    return 0; 
}