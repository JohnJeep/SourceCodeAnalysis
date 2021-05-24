// Copyright (C) 2006-2018 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

// 21.3.3 basic_string capacity [lib.string.capacity]

#include <ext/vstring.h>
#include <testsuite_hooks.h>

// libstdc++/29134
void test01()
{
  __gnu_cxx::__vstring vs;

  VERIFY( vs.max_size() <= vs.get_allocator().max_size() );
}

int main()
{
  test01();
  return 0;
}