//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <forward_list>

// size_type max_size() const;

#include <forward_list>
#include <cassert>

#include "min_allocator.h"

int main()
{
    {
        typedef int T;
        typedef std::forward_list<T> C;
        C c;
        assert(c.max_size() > 0);
    }
#if __cplusplus >= 201103L
    {
        typedef int T;
        typedef std::forward_list<T, min_allocator<T>> C;
        C c;
        assert(c.max_size() > 0);
    }
#endif
}
