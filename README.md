# Description

Freebsd ports I made for the GSoC 2016

## Notes

### net/behavioral-model

The patched files are due to problems with freebsd and the c++11 standard:

- clang on freebsd does not support thread-local variables with non-trivial
  constructors (see https://bugs.freebsd.org/bugzilla/show_bug.cgi?id=192320#c2)
  When this will be solved, the freebsd/ directory added by the patches
  can be removed). For now a trivial (and possibly buggy) implementation of
  cxa_thread_atexit has been provided.

- the boost library that comes with freebsd uses the keyword `register` in many
  places, but it is deprecated in c++11, so the related warnings had to be
  suppressed.

Also, the name should probably be changed to something more clear, and pkg-descr
made more verbose.

### net/py-nnpy

Run dependency of `net/behavioral-model`, missing in ports.
Straightforward port.

### devel/py-p4c-bm

Compiler from p4 to the json format used by `net/behavioral-model`. Not a dependency
but useful

### devel/py-p4-hlir

Parser for p4 programs, dependency of `devel/py-p4c-bm`

### devel/py-Tenjin

Python template engine, dependency of `devel/py-p4c-bm`

