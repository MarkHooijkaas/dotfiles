export SSH_AUTH_SOCK=~/.ssh/ssh-agent-socket
if [ -f ~/bin/start-ssh-agent-when-not-running ]; then
  ~/bin/start-ssh-agent-when-not-running $SSH_AUTH_SOCK
fi
