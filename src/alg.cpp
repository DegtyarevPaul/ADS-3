// Copyright 2021 Degtyarev Paul

int cbinsearch(int *arr, int size, int value) {
  int h = size - 1;
  int l = 0;
  int mid;
  while (l <= size) {
    mid = (l + h) / 2;
    if (value == *(arr + mid)) {
      l = h = mid;
      while (*(arr + h) == *(arr + h + 1)) {
        h++;
      }
      while (*(arr + l) == *(arr + l - 1)) {
        l--;
      }
      return h - l + 1;
    }
    else if (value > *(arr + mid)) {
      l = mid + 1;
    }
    else if (value < *(arr + mid)) {
      h = mid - 1;
    }
  }
  return 0;
}
