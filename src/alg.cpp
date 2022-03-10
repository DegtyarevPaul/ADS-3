// Copyright 2021 Degtyarev Paul

int cbinsearch(int *arr, int size, int value) {
int h = size - 1;
int l = 0;
int mid;
int k = 1;
while (l <= size)
{
mid = (l + h) / 2;
if (value == *(arr + mid))
{
while (mid < size - 1 && (*(arr + mid) >= *(arr + mid + 1)))
{
mid++;
}
while ((mid > 0) && (*(arr + mid) <= *(arr + mid - 1)))
{
k++;
mid--;
}
return k;
}
else if (value > *(arr + mid))
{
l = mid + 1;
}
else if (value < *(arr + mid))
{
h = mid - 1;
}
}
return 0;
}
