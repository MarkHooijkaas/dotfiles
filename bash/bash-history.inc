
# see answer of rouble in
# https://unix.stackexchange.com/questions/1288/preserve-bash-history-in-multiple-terminal-windows
HISTSIZE=100000
HISTFILESIZE=$HISTSIZE
HISTCONTROL=ignorespace:ignoredups

#_bash_history_sync() {
#  builtin history -a         #1
#  HISTFILESIZE=$HISTSIZE     #2
#}

#_bash_history_sync_and_reload() {
#  builtin history -a         #1
#  HISTFILESIZE=$HISTSIZE     #2
  #builtin history -c         #3
  #builtin history -r         #4
#}

#history() {                  #5
#  _bash_history_sync_and_reload
#  builtin history "$@"
#}

export HISTTIMEFORMAT="%y/%m/%d %H:%M:%S   "
PROMPT_COMMAND='history 1 >> ${HOME}/.bash_eternal_history'
#PROMPT_COMMAND="_bash_history_sync;$PROMPT_COMMAND"

alias h='grep <~/.bash_eternal_history'
#alias hm='grep <~/.bash_eternal_history | less'
#alias ht='grep <~/.bash_eternal_history | tail'
