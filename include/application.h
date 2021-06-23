#ifndef _APPLICATION_H
#define _APPLICATION_H

#ifndef VERSION
#define VERSION "vdev"
#endif

#include <twr.h>

typedef struct
{
    uint8_t channel;
    float value;
    twr_tick_t next_pub;

} event_param_t;

typedef struct
{
    twr_tag_temperature_t self;
    event_param_t param;

} temperature_tag_t;


typedef struct
{
    twr_tag_voc_lp_t tag_voc_lp;
    event_param_t param;
} voc_lp_tag_t;


typedef struct
{
    twr_tag_humidity_t self;
    event_param_t param;

} humidity_tag_t;

#endif // _APPLICATION_H
