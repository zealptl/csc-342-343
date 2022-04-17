.data
a: .word 1

.text
lw $s0, a

li $a0, 0
li $t0, 10

loop:
    addi    $s0, $s0, 1
    addi    $t0, $t0, -1
    bgtz    $t0, loop