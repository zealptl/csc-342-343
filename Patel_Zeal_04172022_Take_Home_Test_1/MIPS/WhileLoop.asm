.data
a: .word 1
b: .word 10
c: .word 2
d: .word 3

.text
lw $s0, a
lw $s1, b
lw $s3, c
lw $s4, d
li $v0, 1

loop: 
	bgeu	$a1, $a2, done
	mul		$s2, $s2, 2
	mul 	$s3, $s3, 2
	addi 	$a0, $a0, 1
	addi 	$a2, $a2, -1
	b 		loop
done:
