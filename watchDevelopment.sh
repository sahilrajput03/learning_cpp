#!/bin/bash
nodemon -q -e cpp -x "g++ -o binary $@ && ./binary"
# ABOVE IS EQUIVALENT TO BELOW (say $@ is 1.cs):
# g++ -o binary && ./binary
