#!/bin/bash
nodemon -q -e cpp -x "g++ -std=c++11 -O3 -lboost_system -lboost_thread -Iinclude -pthread -o binary $* && ./binary"

# FYI: g++ -I ./inlclude -o binary $*
# ^^       ^^^^^^^^^^^^^ this is how you provide the inlucde directory to the compiler.
# Tip: source of -pthread: https://github.com/facebookarchive/Surround360/issues/3#issuecomment-235481340