lw $s0, 0($0)
lw $s2, 4($0)

loop:
beq $s2, 0, finish
addi $s2, $s2, -1
add $s1,$s1,$s0
j loop

finish:
sw $s1, 8($0)