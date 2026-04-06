#ifndef CIRCULAR_BUFFER_H        // ifndef -> if not defined. This line basically means that is CIRCULAR_BUFFER_H is not defined then go through the code. if it is then skip to endif. This allows for .h files
#define CIRCULAR_BUFFER_H        // to only be included once. If we skip this then we run the risk of .h files being included more then once which could lead to errors like: redefinition of struct or duplicate function declarations

#include <stdint.h> 
#include <stdbool.h>

typedef struct {
    uint8_t * buffer;        // pointer to an unsigned integer
    int head; 
    int tail; 
    int maxlen;
}circ_buff_t;


void circ_init(circ_buff_t *c, uint8_t *buffer, int maxlen);
int circ_bbuf_push(circ_buff_t *c,uint8_t data);
int circ_bbuf_pop(circ_buff_t *c,uint8_t *data);


#endif
