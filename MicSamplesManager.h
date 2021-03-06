/* 
 * File:   MicSamplesManager.h
 * Author: Chayne
 *
 * Created on April 19, 2015, 1:29 PM
 */

#ifndef MICSAMPLESMANAGER_H
#define	MICSAMPLESMANAGER_H
#include "FFT.h"
#include "stdint.h"

struct MicSamplesManager
{
    float* re_time_samples;     //* pointer to time-domain samples
    float* im_time_samples;
    float* re_freq_samples;     //* pointer to frequency-domain samples
    float* im_freq_samples;

    uint16_t num_samples;
};

extern struct MicSamplesManager samples_manager;

void appendSample(float sample);
void initializeImaginary();

#endif	/* MICSAMPLESMANAGER_H */

