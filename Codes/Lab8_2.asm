j main

decide:
lw $t0, 0x0($sp)
lw $t1, 0x4($sp)
addu $t3,$t0,$t1
beq $t3, $s3 on_equal
bne $t3, $s3 finish

main:
addi $sp, $0, 0x200
addi $s4, $0, 1
addi $s3, $0, 68
addi $sp, $sp, -8

lw $s0, 0x0($s0)
lw $s1, 0x4($s1)

sw $s0, 0x0($sp)
sw $s1, 0x4($sp)
jal decide

on_equal:
addi $s4, $0, 100
finish:
sw $s4, 8($0)