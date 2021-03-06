// Copyright Bruno Dutra 2015-2017
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt

#include <metal.hpp>

#include "test.hpp"

#define MATRIX(M, N) \
    CHECK((metal::arg<INC(M)>), (CAT(metal::_, INC(M)))); \
    CHECK((metal::is_lambda<metal::arg<INC(M)>>), (TRUE)); \
    CHECK((metal::is_invocable<metal::arg<INC(M)> COMMA(N) VALUES(N)>), (BOOL(M < N))); \
    CHECK((metal::invoke<metal::arg<INC(M)>, VALUES(INC(M))>), (VALUE(M))); \
/**/

GEN(MATRIX)
