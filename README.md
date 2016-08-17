# Description

Freebsd ports I made for the GSoC 2016

## Notes

The patched files are due to problems with freebsd and the c++11 standard:

- clang on freebsd does not support thread-local variables with non-trivial
  constructors (see https://bugs.freebsd.org/bugzilla/show_bug.cgi?id=192320#c2)
  When this will be solved, the freebsd/ directory added by the patches
  can be removed). For now a trivial (and possibly buggy) implementation of
  cxa_thread_atexit has been provided.

- the boost library that comes with freebsd uses the keyword `register` in many
  places, but it is deprecated in c++11, so the related warnings had to be
  suppressed.

- The python package nnpy is not present in ports, so I packaged that as well.
