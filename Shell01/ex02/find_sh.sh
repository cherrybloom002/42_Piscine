#!/bin/bash
find *.sh | sed 's/\.\///g' | sed 's/.sh$//'
