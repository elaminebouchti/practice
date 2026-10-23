#!/bin/bash

if make clean && make; then
	echo "BUILD OK"
	./practice
else
		echo "BUILD FAILED"
	exit 1
fi
