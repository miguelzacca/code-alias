#!/bin/bash

if ! grep -q "^alias c=" ~/.bashrc; then
    echo "alias c='~/tools/code-alias/main'" >>~/.bashrc
    source ~/.bashrc
    echo "INFO: ~/.bashrc updated successfully."
fi
