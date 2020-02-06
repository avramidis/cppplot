//---------------------------------------------------------------------------//
// Copyright (c) 2019 Eleftherios Avramidis <el.avramidis@gmail.com>
//
// Distributed under The MIT License (MIT)
// See accompanying file LICENSE
//---------------------------------------------------------------------------//

#ifndef CXXPLOT_AXIS_HPP
#define CXXPLOT_AXIS_HPP

#include "cxxplot_export.h"
#include "Matplotlib.hpp"

namespace cxxplot {

    enum class Axis_option : int {
        on,
        off,
        equal,
        scaled,
        tight,
        automatic,
        normal,
        image,
        square
    };

    class CXXPLOT_EXPORT Axis : public Matplotlib {
    private:
        PyObject* axis;
    public:
        Axis();
        Axis(float xmin, float xmax, float ymin, float ymax);
        explicit Axis(Axis_option option);
        explicit Axis(std::vector<std::pair<std::string, std::string>>& args);
        ~Axis();

    private:
        void
        initialize();

        const char*
        get_option_string_value(Axis_option option);
    };
}

#endif
