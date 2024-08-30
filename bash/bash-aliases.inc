export SSH_AUTH_SOCK=~/.ssh/ssh-agent-socket
~/bin/start-ssh-agent-when-not-running $SSH_AUTH_SOCK


# https://askubuntu.com/questions/1042234/modifying-the-color-of-grep
export GREP_COLORS='fn=2'

alias ..='cd ..'
alias ...='cd ...'


alias l="ls -la"
alias m=less
alias e="vi +startinsert"
alias gr='grep -r --exclude-dir=.git/objects'


complete -F _complete_alias l
complete -F _complete_alias m
