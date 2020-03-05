# dunelyze
Example DUNE analysis example

## Introduction

This an example DUNE analysis package that contructs a UPS package
from a git repository.
The original version was copied from ToyCmake in cetbuildtools.
Here are the instruction from that package:

> This is a very simple example for cmake.
> It builds two libraries and an executable.
> 
> To use this example:
> mkdir <my-empty-directory>
> cd <my-empty-directory>
> cp -pr $CETBUILDTOOLS_DIR/example/ToyCmake .
> mkdir build install
> cd build (this is your working directory)
> source ../ToyCmake/ups/setup_for_development
>    This will setup cmake and gcc v4_5_1
>    This will also define CETPKG_TYPE, CETPKG_QUAL, and CETPKG_SOURCE
> cmake -DCMAKE_INSTALL_PREFIX=../install \
>       -DCMAKE_BUILD_TYPE=\$CETPKG_TYPE \
>       -Dqualifier:STRING=\$CETPKG_QUAL \$CETPKG_SOURCE
> make
> make test
> make install
> make package (create a distribution tarball)

See READMEs and comments in the various files for specific information
about customizing for your package.

and

> This is a very simple example for cmake.  It will build a library, an executable,
> and install files into a directory ready to be tarred up as a relocateable ups product.
> Various CET conventions:
> 1. Include files are of the form #include "MyProduct/MyHeader.h"
> 2. Source code and headers live in the same directory
> 3. Supported flavors: 64bit SLF5 and SLF6
> 4. in a build directory:
>    source .../ToyCmake/ups/setup_for_development <-d|-p>
>    where -d means debug and -p means profile
>    This will establish the build environment so you can then run cmake and make

