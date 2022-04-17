.data
x: .word 3
y: .word 5

.text
lw  $a0, x
lw  $a1, y
jal My_Add

My_Add:
add $v0, $a0, $a1
jr  $ra 