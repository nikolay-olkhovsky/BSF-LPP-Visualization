/*==============================================================================
Project: LiFe
Theme: Apex Method
Module: Problem-Types.h (BSF Types)
Prefix: PT
Author: Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/			
#pragma once
#include "Problem-Include.h"		// Problem "Include" Files
#include "Problem-Parameters.h"		// Problem Parameters 
//=========================== Problem Types =========================
typedef double			PT_float_T;
typedef int				PT_integer_T;
typedef PT_float_T		PT_vector_T[PP_MAX_N];
typedef PT_vector_T		PT_matrix_T[PP_MAX_M];
//typedef PT_float_T	PT_point_T[PP_MAX_N];
typedef PT_float_T		PT_column_T[PP_MAX_M];

typedef PT_float_T* PT_image_T;

typedef PT_float_T** PT_field_T;

#ifdef PP_DATABASE_OUTPUT
struct Problem {
    unsigned id;
    int N;
    int seed;
    double high;
    double low;
    std::vector<char> c;
};

struct Inequality {
    unsigned id;
    std::vector<char> coefficients;
    double b;
    int problem_id;
};

struct SurfacePoint {
    unsigned id;
    std::vector<char> coefficients;
    int problem_id;
};

struct Precedent {
    unsigned id;
    int surface_point_id;
    int face;
    std::vector<char> d;
    std::vector<char> face_count;
};

struct Image {
    unsigned id;
    int surface_point_id;
    double density;
    double rank;
    std::vector<char> answer_vector;
    std::vector<char> cosine_vector;
    int num_of_points;
    std::vector<char> data;
    std::optional<std::vector<char>> field_points;
};
#endif // PP_DATABASE_OUTPUT