// Copyright Bruno Dutra 2015-2017
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt

#ifndef METAL_NUMBER_NEG_HPP
#define METAL_NUMBER_NEG_HPP

#include "../config.hpp"
#include "../number/number.hpp"
#include "../number/sub.hpp"

namespace metal {
    /// \ingroup number
    ///
    /// ### Description
    /// Computes the additive inverse of a \number.
    ///
    /// ### Usage
    /// For any \number `num`
    /// \code
    ///     using result = metal::neg<num>;
    /// \endcode
    ///
    /// \returns: \number
    /// \semantics:
    ///     Equivalent to
    ///     \code
    ///         using result = metal::number<-num{}>;
    ///     \endcode
    ///
    /// ### Example
    /// \snippet number.cpp neg
    ///
    /// ### See Also
    /// \see number, abs, inc, dec, add, sub, mul, div, mod, pow
    template<typename num>
    using neg = metal::sub<metal::number<0>, num>;
}

#endif
