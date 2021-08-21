Up:

SendInput {w up}

$X::
while GetKeyState("X", "P")
{
SendInput {w down}
Sleep 10

SendInput {XButton1}
Sleep 10

SendInput {LButton Down}
Sleep 30
SendInput {LButton Up}
Sleep 30
Sleep 100

SendInput {f}
Sleep 10

SendInput {LButton Down}
Sleep 30
SendInput {LButton Up}
Sleep 30
Sleep 100

SendInput {XButton2}
Sleep 10

SendInput {LButton Down}
Sleep 30
SendInput {LButton Up}
Sleep 30

SendInput {XButton1}

Sleep 450
}

Goto, Up

return
