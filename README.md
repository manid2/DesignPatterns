# Design Patterns

Learn, preserve and refer design patterns implementation in C++.

## How to build

```sh
mkdir dp_t; cd dp_t

git clone https://github.com/manid2/DesignPatterns.git

mkdir build; cd build

cmake ../DesignPatterns \
      -G"Eclipse CDT4 - Unix Makefiles" \
      -DCMAKE_ECLIPSE_GENERATE_SOURCE_PROJECT=TRUE \
      -DCMAKE_BUILD_TYPE=Debug \
      -DCMAKE_CXX_FLAGS="-std=c++11" \
      -DCMAKE_CXX_COMPILER_ARG1=-std=c++11 \
      -DBUILD_TESTING=OFF
```
