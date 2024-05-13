#!/bin/bash

if ! grep -q "^alias e=" ~/.bashrc; then
  echo "alias e='exit'" >>~/.bashrc
  source ~/.bashrc
  echo "INFO: ~/.bashrc updated successfully: (e) alias."
fi

if ! grep -q "^alias cd=" ~/.bashrc; then
  echo "alias cdd='cd ~/Desktop'" >>~/.bashrc
  source ~/.bashrc
  echo "INFO: ~/.bashrc updated successfully: (cdd) alias."
fi

if ! grep -q "^alias cls=" ~/.bashrc; then
  echo "alias cls='clear'" >>~/.bashrc
  source ~/.bashrc
  echo "INFO: ~/.bashrc updated successfully: (cls) alias."
fi

if ! grep -q "^alias gg=" ~/.bashrc; then
  echo "alias gg='google-chrome & disown && exit'" >>~/.bashrc
  source ~/.bashrc
  echo "INFO: ~/.bashrc updated successfully: (gg) alias."
fi
