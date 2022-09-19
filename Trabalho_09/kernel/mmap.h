struct vma_struct {
  uint64 vm_start;
  uint64 vm_end;
  int prot;
  int flags;
  uint64 pgoff;
  struct file *file;
  struct vma_struct *vm_next, *vm_prev;
};
