Set-PSReadlineOption -EditMode Emacs 
Set-PSReadLineKeyHandler -Chord "Shift+Insert" -Function Paste 
Set-PSReadLineKeyHandler -Chord "Ctrl+LeftArrow" -Function BackwardWord
Set-PSReadLineKeyHandler -Chord "Ctrl+RightArrow" -Function ForwardWord
