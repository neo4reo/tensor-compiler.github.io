// Generated by the Tensor Algebra Compiler (tensor-compiler.org)
for (int B0_pos = B0_pos_arr[0]; B0_pos < B0_pos_arr[1]; B0_pos++) {
  int32_t iB = B0_idx_arr[B0_pos];
  for (int B1_pos = B1_pos_arr[B0_pos]; B1_pos < B1_pos_arr[B0_pos + 1]; B1_pos++) {
    int32_t kB = B1_idx_arr[B1_pos];
    for (int B2_pos = B2_pos_arr[B1_pos]; B2_pos < B2_pos_arr[B1_pos + 1]; B2_pos++) {
      int32_t lB = B2_idx_arr[B2_pos];
      double tl = B_val_arr[B2_pos];
      for (int jC = 0; jC < C1_size; jC++) {
        int32_t C1_pos = (kB * C1_size) + jC;
        int32_t D1_pos = (lB * D1_size) + jC;
        int32_t A1_pos = (iB * A1_size) + jC;
        A_val_arr[A1_pos] = A_val_arr[A1_pos] + ((tl * C_val_arr[C1_pos]) * D_val_arr[D1_pos]);
      }
    }
  }
}