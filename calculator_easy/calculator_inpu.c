#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *av[])
{
  float value_1;
  float value_2;
  char op;
  float result;

  printf("Enter Value:\n\n");
  scanf("%f %c %f", &value_1, &op, & value_2);

  switch(op) // look like if else but esay and has limits
    {
    case '/' :result = value_1 / value_2;
      break;
    case '*' :result = value_1 * value_2;
      break;
    case '+' :result = value_1 + value_2;
      break;
    case '-' :result = value_1 - value_2;
      break;
    case '^' :result = pow(value_1,value_2);
      break;
    case ' ' :result = sqrt(value_2);
      break;
    default: goto fail;
    }
  printf("%.9g%c%.9g =  %.6g\n\n",value_1,op, value_2, result);
  goto exit;
 fail:
  printf("Failure\n");
 exit:
  return (0);
}
