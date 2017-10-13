.text

.globl redon
redon:
  flds        0x04 (%esp)
  fistpl      0x04 (%esp)
  movl        0x04 (%esp), %eax
  ret