#!/bin/bash

if [ ! -e ./googletest ]; then git clone git@github.com:google/googletest.git; fi
make && ./calc_test
