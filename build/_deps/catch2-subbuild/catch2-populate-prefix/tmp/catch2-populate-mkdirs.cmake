# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/bruec/cppp/03/03_OO/03_oo/build/_deps/catch2-src"
  "C:/Users/bruec/cppp/03/03_OO/03_oo/build/_deps/catch2-build"
  "C:/Users/bruec/cppp/03/03_OO/03_oo/build/_deps/catch2-subbuild/catch2-populate-prefix"
  "C:/Users/bruec/cppp/03/03_OO/03_oo/build/_deps/catch2-subbuild/catch2-populate-prefix/tmp"
  "C:/Users/bruec/cppp/03/03_OO/03_oo/build/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp"
  "C:/Users/bruec/cppp/03/03_OO/03_oo/build/_deps/catch2-subbuild/catch2-populate-prefix/src"
  "C:/Users/bruec/cppp/03/03_OO/03_oo/build/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/bruec/cppp/03/03_OO/03_oo/build/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp/${subDir}")
endforeach()
