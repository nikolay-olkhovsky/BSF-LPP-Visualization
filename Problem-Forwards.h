/*==============================================================================
Project: LiFe
Theme: Apex Method
Module: Problem-Forwards.h (Problem Function Forwards)
Author: Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/
#include "Problem-bsfTypes.h"
#include "Problem-Types.h"
//====================== Problem Functions ===========================
inline void basis_Init();
inline void print_Vector(PT_vector_T x);
inline void add_Vector(PT_vector_T To, PT_vector_T From);
inline void subtract_Vector(PT_vector_T To, PT_vector_T From);
inline void copy_Vector(PT_vector_T To, PT_vector_T From);
inline void multiply_Vector(PT_vector_T To, PT_float_T C);
inline PT_float_T dotproduct_Vector(PT_vector_T x, PT_vector_T y);
inline void divide_Vector(PT_vector_T To, PT_float_T C);
inline void square_Vector(PT_vector_T To);
inline PT_float_T vector_Sum(PT_vector_T v, int start);
inline void norm_Vector(PT_vector_T To);
inline void basis_Print();

// Helper functions for MapF implementation
inline void G(PT_bsf_parameter_T parameter, PT_vector_T out, bool cross = false);
inline bool isInnerPoint(PT_vector_T point);
inline void targetProjection(int i, PT_vector_T _In, PT_vector_T _Out);
inline void fieldProjection(PT_vector_T _In, PT_vector_T _Out);
inline void coordinateAngles(PT_vector_T _In, PT_vector_T _Out);
inline PT_float_T objectiveDistance(PT_vector_T g);
inline PT_float_T bias(int i);

#ifdef PP_DATABASE_OUTPUT
std::vector<double> charToDouble(std::vector<char> _In);
std::vector<char> doubleToChar(std::vector<double> _In);
void printLppForm(Problem problem, std::vector<Inequality> inequalities);
#endif //PP_DATABASE_OUTPUT