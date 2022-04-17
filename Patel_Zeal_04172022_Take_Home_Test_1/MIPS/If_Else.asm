.data
a: .word 0
b: .word 100
c: .word 80
d: .word 60

.text
lw $s0, a
lw $s1, b
lw $s2, c
lw $s3, d

bgez    $s2, else
sub     $s0, $zero, $s2
addi    $s1, $s1, 1
b       exit

else:
    ori     $s0, $s2, 0
    addi    $s3, $s3, 1
exit:
