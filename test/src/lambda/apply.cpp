// Copyright Bruno Dutra 2015
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt)

#include <metal/lambda/apply.hpp>
#include <metal/lambda/arg.hpp>
#include <metal/optional/just.hpp>

#include "test.hpp"

using namespace metal;

METAL_TEST_ASSERT((is_just<apply<test::v0>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v1>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v2>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v3>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v4>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v5>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v6>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v7>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v8>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v9>>::value));

METAL_TEST_ASSERT((is_just<apply<test::v0, void>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v1, void>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v2, void>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v3, void>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v4, void>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v5, void>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v6, void>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v7, void>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v8, void>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v9, void>>::value));

METAL_TEST_ASSERT((is_just<apply<test::v0, void, void*>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v1, void, void*>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v2, void, void*>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v3, void, void*>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v4, void, void*>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v5, void, void*>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v6, void, void*>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v7, void, void*>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v8, void, void*>>::value));
METAL_TEST_ASSERT((is_just<apply<test::v9, void, void*>>::value));

METAL_TEST_ASSERT((!is_just<apply<test::list0>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list1>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list2>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list3>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list4>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list5>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list6>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list7>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list8>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list9>>::value));

METAL_TEST_ASSERT((!is_just<apply<test::list0, void>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list1, void>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list2, void>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list3, void>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list4, void>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list5, void>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list6, void>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list7, void>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list8, void>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list9, void>>::value));

METAL_TEST_ASSERT((!is_just<apply<test::list0, void, void*>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list1, void, void*>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list2, void, void*>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list3, void, void*>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list4, void, void*>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list5, void, void*>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list6, void, void*>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list7, void, void*>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list8, void, void*>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::list9, void, void*>>::value));

METAL_TEST_ASSERT((!is_just<apply<test::empty<>>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::empty<>, void>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::empty<>, void, void*>>::value));

METAL_TEST_ASSERT((is_just<apply<test::e0<>>>::value));
METAL_TEST_ASSERT((is_just<apply<test::e0<>, void>>::value));
METAL_TEST_ASSERT((is_just<apply<test::e0<>, void, void*>>::value));

METAL_TEST_ASSERT((!is_just<apply<test::e1<arg<0>>>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::e1<arg<0>>, void>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::e1<arg<0>>, void, void*>>::value));

METAL_TEST_ASSERT((!is_just<apply<test::e1<_1>>>::value));
METAL_TEST_ASSERT((is_just<apply<test::e1<_1>, void>>::value));
METAL_TEST_ASSERT((is_just<apply<test::e1<_1>, void, void*>>::value));

METAL_TEST_ASSERT((!is_just<apply<test::e2<_1, _2>>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::e2<_1, _2>, void>>::value));
METAL_TEST_ASSERT((is_just<apply<test::e2<_1, _2>, void, void*>>::value));

METAL_TEST_ASSERT((!is_just<apply<test::expr<_1, _2, _3>>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::expr<_1, _2, _3>, void>>::value));
METAL_TEST_ASSERT((!is_just<apply<test::expr<_1, _2, _3>, void, void*>>::value));

METAL_TEST_ASSERT((std::is_same<apply_t<_1, test::v0, test::v1, test::v2, test::v3>, test::v0>::value));
METAL_TEST_ASSERT((std::is_same<apply_t<_2, test::v0, test::v1, test::v2, test::v3>, test::v1>::value));
METAL_TEST_ASSERT((std::is_same<apply_t<_3, test::v0, test::v1, test::v2, test::v3>, test::v2>::value));
METAL_TEST_ASSERT((std::is_same<apply_t<_4, test::v0, test::v1, test::v2, test::v3>, test::v3>::value));

METAL_TEST_ASSERT((std::is_same<apply_t<test::e0<>, test::v0, test::v1, test::v2, test::v3>, test::e0<>::type>::value));
METAL_TEST_ASSERT((std::is_same<apply_t<test::e1<_1>, test::v0, test::v1, test::v2, test::v3>, test::e1<test::v0>::type>::value));
METAL_TEST_ASSERT((std::is_same<apply_t<test::e2<_2, _1>, test::v0, test::v1, test::v2, test::v3>, test::e2<test::v1, test::v0>::type>::value));
METAL_TEST_ASSERT((std::is_same<apply_t<test::expr<_3, _2, _1>, test::v0, test::v1, test::v2, test::v3>, test::expr<test::v2, test::v1, test::v0>::type>::value));
METAL_TEST_ASSERT((std::is_same<apply_t<test::expr<_4, _3, _2, _1>, test::v0, test::v1, test::v2, test::v3>, test::expr<test::v3, test::v2, test::v1, test::v0>::type>::value));

METAL_TEST_ASSERT((std::is_same<apply_t<apply<_1, _2, _3, _4, _5>, test::e0<>, test::v0, test::v1, test::v2, test::v3>, test::e0<>::type>::value));
METAL_TEST_ASSERT((std::is_same<apply_t<apply<_1, _2, _3, _4, _5>, test::e1<_1>, test::v0, test::v1, test::v2, test::v3>, test::e1<test::v0>::type>::value));
METAL_TEST_ASSERT((std::is_same<apply_t<apply<_1, _2, _3, _4, _5>, test::e2<_1, _2>, test::v0, test::v1, test::v2, test::v3>, test::e2<test::v0, test::v1>::type>::value));
METAL_TEST_ASSERT((std::is_same<apply_t<apply<_1, _2, _3, _4, _5>, test::expr<_1, _2, _3>, test::v0, test::v1, test::v2, test::v3>, test::expr<test::v0, test::v1, test::v2>::type>::value));
METAL_TEST_ASSERT((std::is_same<apply_t<apply<_1, _2, _3, _4, _5>, test::expr<_1, _2, _3, _4>, test::v0, test::v1, test::v2, test::v3>, test::expr<test::v0, test::v1, test::v2, test::v3>::type>::value));

METAL_TEST_ASSERT((
    std::is_same<apply_t<
        test::expr<test::e0<>>,
        test::v0, test::v1, test::v2, test::v3
    >,
    test::expr<test::e0<>::type>::type
    >::value
));

METAL_TEST_ASSERT((
    std::is_same<apply_t<
        test::expr<test::e0<>, test::e1<_1>>,
        test::v0, test::v1, test::v2, test::v3
    >,
    test::expr<test::e0<>::type, test::e1<test::v0>::type>::type
    >::value
));

METAL_TEST_ASSERT((
    std::is_same<apply_t<
        test::expr<test::e0<>, test::e1<_1>, test::e2<_1, _2>>,
        test::v0, test::v1, test::v2, test::v3
    >,
    test::expr<
        test::e0<>::type,
        test::e1<test::v0>::type,
        test::e2<test::v0, test::v1>::type
    >::type
    >::value
));

METAL_TEST_ASSERT((
    std::is_same<apply_t<
        test::expr<
            test::e0<>,
            test::e1<_1>,
            test::e2<_1, _2>,
            test::expr<_1, _2, _3>
        >,
        test::v0, test::v1, test::v2, test::v3
    >,
    test::expr<
        test::e0<>::type,
        test::e1<test::v0>::type,
        test::e2<test::v0, test::v1>::type,
        test::expr<test::v0, test::v1, test::v2>::type
    >::type
    >::value
));

METAL_TEST_ASSERT((
    std::is_same<apply_t<
        test::expr<
            test::e0<>,
            test::e1<_1>,
            test::e2<_1, _2>,
            test::expr<_1, _2, _3>,
            test::expr<_1, _2, _3, _4>
        >,
        test::v0, test::v1, test::v2, test::v3
    >,
    test::expr<
        test::e0<>::type,
        test::e1<test::v0>::type,
        test::e2<test::v0, test::v1>::type,
        test::expr<test::v0, test::v1, test::v2>::type,
        test::expr<test::v0, test::v1, test::v2, test::v3>::type
    >::type
    >::value
));
