#!/bin/sh
[ "${TERM:-none}" = "linux" ] && \
    printf '%b' '\e]P0030303
                 \e]P14c4c4c
                 \e]P25c5c5c
                 \e]P37c7c7c
                 \e]P4949494
                 \e]P5a8a8a8
                 \e]P6bcbcbc
                 \e]P7a0a0a0
                 \e]P8414141
                 \e]P94c4c4c
                 \e]PA5c5c5c
                 \e]PB7c7c7c
                 \e]PC949494
                 \e]PDa8a8a8
                 \e]PEbcbcbc
                 \e]PFa0a0a0
                 \ec'
