/*
@copyright Louis Dionne 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 */

#include <boost/hana/assert.hpp>
#include <boost/hana/integral_constant.hpp>
#include <boost/hana/maximum.hpp>
#include <boost/hana/minimum.hpp>
#include <boost/hana/set.hpp>
#include <boost/hana/sum.hpp>
namespace hana = boost::hana;


int main() {
    constexpr auto xs = hana::make_set(hana::int_<0>, hana::int_<1>, hana::int_<2>);
    static_assert(hana::minimum(xs) == hana::int_<0>, "");
    static_assert(hana::maximum(xs) == hana::int_<2>, "");
    static_assert(hana::sum<>(xs) == hana::int_<3>, "");
}