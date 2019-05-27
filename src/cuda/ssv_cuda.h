#ifndef __P7SSV_CUDA_H
#define __P7SSV_CUDA_H
#ifdef __cplusplus // magic to make C++ compilers happy
extern "C" {
#endif
__device__
float SSV_cuda(const __restrict__ uint8_t *dsq, uint64_t L, int M, int **rbv, float scale_b, float tauBM);
#define KP 27  // number of characters in alphabet.  Make parameter.
#define MAX_BAND_WIDTH 10
#ifdef __cplusplus // magic to make C++ compilers happy
}
#endif
#endif