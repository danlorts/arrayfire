#include <af/array.h>
#include <Array.hpp>

namespace opencl
{
    template<typename T, bool DIR>
    void sort_index(Array<T> &val, Array<unsigned> &idx, const Array<T> &in, const unsigned dim);
}
