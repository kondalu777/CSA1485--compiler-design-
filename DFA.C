#include <stdio.h>

#include <stdbool.h>

#define STATES_COUNT 3

bool dfa(char input_string[])

{

    int current_state = 0;

    int i = 0;

    while (input_string[i] != '\0')

	{        switch (current_state)

		{

            case 0:

                if (input_string[i] == '0')

				{

                    current_state = 1;

                } else if (input_string[i] == '1')

				{

                    current_state = 0;

                } else

				{

                    return false;

                }

                break;

            case 1:

                if (input_string[i] == '0')

				{

                    current_state = 2;

                } else if (input_string[i] == '1')

				{

                    current_state = 0;

                } else

				{

                    return false;

                }

                break;

            case 2:

                if (input_string[i] == '0' || input_string[i] == '1')

				{

                    current_state = 2;

                }

				else

				{

                    return false;

                }

                break;

            default:

                return false;

        }

        i++;

    }

    return current_state == 2;

}

int main()

{

    char input_string[100];

    printf("Enter an input string: ");

    scanf("%s", input_string);

    if (dfa(input_string))

	{

        printf("Input string is accepted by DFA.\n");

    } else {

        printf("Input string is not accepted by DFA.\n");

    }

    return 0;

}
