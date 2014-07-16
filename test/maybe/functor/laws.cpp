/*
@copyright Louis Dionne 2014
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 */

#include <boost/hana/maybe.hpp>

#include <boost/hana/detail/constexpr.hpp>
#include <boost/hana/detail/static_assert.hpp>
#include <boost/hana/functor/laws.hpp>
#include <boost/hana/integral.hpp>
using namespace boost::hana;


BOOST_HANA_CONSTEXPR_LAMBDA auto f = [](auto x) { return x + int_<1>; };
BOOST_HANA_CONSTEXPR_LAMBDA auto g = [](auto x) { return x * int_<3>; };

int main() {
    BOOST_HANA_STATIC_ASSERT(Functor::laws::check(nothing, f, g));
    BOOST_HANA_STATIC_ASSERT(Functor::laws::check(just(int_<3>), f, g));
    BOOST_HANA_STATIC_ASSERT(Functor::laws::check(just(3), f, g));
}