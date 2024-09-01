#!/bin/bash
id -z -Gn $FT_USER | tr '\0' ',' | sed 's/\(.*\),/\1/'
