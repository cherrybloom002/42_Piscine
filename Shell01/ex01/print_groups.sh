#!/bin/sh
id $FT_USER -Gn | sed 's/ /,/g'
