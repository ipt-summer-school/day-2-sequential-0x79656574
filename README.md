# sequential

This function accepts a list of functions and initial data, and then passes the data through all of them.

Example:\
answer = sequential([\
    double, // doubles all the values   \
    square, // squares all the values in list  \
    filter  // returns 1 if it receives a 0, and a 0 otherwise  \
  ],\
  [2, 3, 1, 0]\
);
`


Answer:\
`txt
[0, 0, 0, 1]
`

