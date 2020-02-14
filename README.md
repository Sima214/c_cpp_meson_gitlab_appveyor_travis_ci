# C/C++ Meson gitlabci/azure/travis CI

C/C++ library template using the meson build system, with unit tests, and CI example configurations.

## Continuous Integration Configuration

- Linux: gitlabci both gcc and clang.
- Windows: docker image running on azure pipeline using ninja+clang(not the Visual Studio version).
- MacOS: travis with xcode clang.
