// Generated by the Tensor Algebra Compiler (tensor-compiler.org)
/* init_alloc_size should be initialized to a power of two */
int32_t init_alloc_size = 1048576;
allocate A1_pos[init_alloc_size]
allocate A1_idx[init_alloc_size]
A1_pos[0] = 0;
allocate A2_pos[init_alloc_size]
allocate A2_idx[init_alloc_size]
A2_pos[0] = 0;

int32_t pA1 = A1_pos[0];
int32_t pA2 = A2_pos[pA1];
for (int32_t pB1 = B1_pos[0]; pB1 < B1_pos[1]; pB1++) {
  int32_t iB = B1_idx[pB1];
  for (int32_t pB2 = B2_pos[pB1]; pB2 < B2_pos[pB1 + 1]; pB2++) {
    int32_t jB = B2_idx[pB2];
    for (int32_t pB3 = B3_pos[pB2]; pB3 < B3_pos[pB2 + 1]; pB3++) {
      int32_t kB = B3_idx[pB3];

    }
    A2_idx[pA2] = jB;
    pA2++;
    if ((0 == ((pA2 + 1) & pA2)) && (init_alloc_size <= (pA2 + 1)))
      reallocate A2_idx[(2 * (pA2 + 1))]
  }
  A2_pos[(pA1 + 1)] = pA2;
  A1_idx[pA1] = iB;
  if (A2_pos[pA1 + 1] > A2_pos[pA1]) {
    pA1++;
    if ((0 == ((pA1 + 1) & pA1)) && (init_alloc_size <= (pA1 + 1))) {
      reallocate A1_idx[(2 * (pA1 + 1))]
      reallocate A2_pos[(2 * (pA1 + 1))]
    }
  }
}
A1_pos[1] = pA1;

allocate A_vals[pA2]