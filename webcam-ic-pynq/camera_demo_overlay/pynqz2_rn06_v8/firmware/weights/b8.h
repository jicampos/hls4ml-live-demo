//Numpy array shape [32]
//Min 0.000000000000
//Max 0.000000000000
//Number of zeros 32

#ifndef B8_H_
#define B8_H_

#ifndef __SYNTHESIS__
bias8_t b8[32];
#else
bias8_t b8[32] = {0.15625, 0.65625, -0.43750, -0.78125, 0.84375, -0.12500, -0.31250, 0.84375, 1.40625, 1.40625, 1.12500, 0.68750, 1.03125, -0.46875, 0.09375, -0.25000, -1.71875, 0.93750, -1.06250, 0.56250, 0.46875, 0.21875, -0.18750, -0.34375, 0.53125, 0.87500, -0.34375, 1.71875, 0.09375, -0.18750, 0.28125, 0.12500};
#endif

#endif
