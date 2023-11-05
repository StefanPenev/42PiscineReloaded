#!/bin/bash
ifconfig | grep 'ether' | cut -c 8- | sed 's/ $//'
ifconfig | grep -E "^\tether" | cut -d " " -f 2