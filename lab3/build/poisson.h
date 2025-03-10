
// This code conforms with the UFC specification version 2018.2.0.dev0
// and was automatically generated by FFCx version 0.9.0.
//
// This code was generated with the following options:
//
//  {'epsilon': 1e-14,
//   'output_directory': '.',
//   'profile': False,
//   'scalar_type': 'float64',
//   'sum_factorization': False,
//   'table_atol': 1e-09,
//   'table_rtol': 1e-06,
//   'ufl_file': ['/home/roma/KT/KT_LPR_2025/lab3/poisson.py'],
//   'verbosity': 30,
//   'visualise': False}

#pragma once
#include <ufcx.h>

#ifdef __cplusplus
extern "C" {
#endif

extern ufcx_integral integral_7716cb4c9bf72714496181866dd8a70806a0d232;

extern ufcx_integral integral_3a42d8b85b7c2c5374638d0f5ba85644ad4fd830;

extern ufcx_form form_23d5a072ba81ef73c2a0e995ddeb5419818d2eb5;

// Helper used to create form using name which was given to the
// form in the UFL file.
// This helper is called in user c++ code.
//
extern ufcx_form* form_poisson_a;


extern ufcx_form form_21dc9dcc926fc5b8a10935d4dee42ab8c86a9b82;

// Helper used to create form using name which was given to the
// form in the UFL file.
// This helper is called in user c++ code.
//
extern ufcx_form* form_poisson_L;


#ifdef __cplusplus
}
#endif
