// Copyright Bruno Dutra 2015
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.txt or copy at http://boost.org/LICENSEmetal::_1_0.txt)

#include <metal/lambda/apply.hpp>
#include <metal/lambda/arg.hpp>
#include <metal/lambda/bind.hpp>
#include <metal/lambda/quote.hpp>

#include "example.hpp"

using true_ = metal::_1;
using false_ = metal::_2;

static_assert(std::is_same<metal::apply_t<true_, true_, false_>, true_>::value, "");
static_assert(std::is_same<metal::apply_t<true_, false_, true_>, false_>::value, "");
static_assert(std::is_same<metal::apply_t<false_, true_, false_>, false_>::value, "");
static_assert(std::is_same<metal::apply_t<false_, false_, true_>, true_>::value, "");

using not_ = metal::apply<metal::_1, metal::quote_t<false_>, metal::quote_t<true_>>;

static_assert(std::is_same<metal::apply_t<not_, true_>, false_>::value, "");
static_assert(std::is_same<metal::apply_t<not_, false_>, true_>::value, "");

using and_ = metal::apply<metal::_1, metal::_2, metal::_1>;

static_assert(std::is_same<metal::apply_t<and_, true_, true_>, true_>::value, "");
static_assert(std::is_same<metal::apply_t<and_, true_, false_>, false_>::value, "");
static_assert(std::is_same<metal::apply_t<and_, false_, true_>, false_>::value, "");
static_assert(std::is_same<metal::apply_t<and_, false_, false_>, false_>::value, "");

using or_ = metal::apply<metal::_1, metal::_1, metal::_2>;

static_assert(std::is_same<metal::apply_t<or_, true_, true_>, true_>::value, "");
static_assert(std::is_same<metal::apply_t<or_, true_, false_>, true_>::value, "");
static_assert(std::is_same<metal::apply_t<or_, false_, true_>, true_>::value, "");
static_assert(std::is_same<metal::apply_t<or_, false_, false_>, false_>::value, "");

using xor_ = metal::apply<metal::_1, metal::bind_t<not_, metal::_2>, metal::_2>;

static_assert(std::is_same<metal::apply_t<xor_, true_, true_>, false_>::value, "");
static_assert(std::is_same<metal::apply_t<xor_, true_, false_>, true_>::value, "");
static_assert(std::is_same<metal::apply_t<xor_, false_, true_>, true_>::value, "");
static_assert(std::is_same<metal::apply_t<xor_, false_, false_>, false_>::value, "");