#ifndef CIRCULAR_BUFFER_H
#define CIRCULAR_BUFFER_H

#include <stdint.h> 
#include <stdbool.h>

typedef struct {
    uint8_t * buffer;
    int head; 
    int tail; 
    int maxlen;
}circ_buff_t;


void circ_init(circ_buff_t *c, uint8_t *buffer, int maxlen);
int circ_bbuf_push(circ_buff_t *c,uint8_t data);
int circ_bbuf_pop(circ_buff_t *c,uint8_t *data);


#endif