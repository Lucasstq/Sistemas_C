// Sistema de reservas de passagens aéreas
#include <stdio.h>
// define o tamanho do nosso array para assentos
#define SIZE 10

// método principal
int main(void)
{
    // Array para armazenar os assentos, todos os índices começam em 0
    int seats[SIZE] = {0};
    // Indices de assentos para primeira classe
    int firstIndex = 0;
    // Indices de assentos da classe economica
    int economyIndex = 5;
    // Total de assentos preenchidos no avião
    int totalSeats = 0;
    // Opção do cliente para voo
    int option;
    // Variavel de escolha para caso classe escolhida estiver cheia
    char choice;

    // Loop com condição de parada quando todos os assentos preenchidos
    while (totalSeats < 10)
    {
        printf("Favor digitar 1 para primeira classe\n");
        printf("Favor digitar 2 para classe economica\n");
        scanf("%d", &option);

        // condições para escolha de primeira classe
        if (option == 1)
        {
            // condição para primeira classe cheia
            if (firstIndex >= 5)
            {
                printf("Primeira classe cheia, deseja ir para classe economica? (s/n)");
                scanf(" %c", &choice);

                // condição caso escolha seja 's', verifica disponibilidade de assentos
                if (choice == 's' && economyIndex < 10)
                {
                    // assento preenchido na posição dísponivel
                    seats[economyIndex] = 1;
                    printf("Bilhete para classe economica, assento: %d\n", economyIndex + 1);
                    economyIndex++;
                    totalSeats++;
                }
                else
                {
                    printf("Proximo voo sai em 3 horas\n");
                    return 0;
                }
            }
            else
            {
                // assento preenchido na posição dísponivel
                seats[firstIndex] = 1;
                printf("Bilhete para primeira classe, assento: %d\n", firstIndex + 1);
                firstIndex++;
                totalSeats++;
            }
        }
        // condições para escolha de classe economica
        else if (option == 2)
        {
            // condição para classe economica cheia
            if (economyIndex >= 10)
            {
                printf("Classe economica cheia, deseja ir para primeira classe? (s/n) ");
                scanf(" %c", &choice);

                // condição caso escolha seja 's', verifica disponibilidade de assentos
                if (choice == 's' && firstIndex < 5)
                {
                    // preenche assento na posição dísponivel
                    seats[firstIndex] = 1;
                    printf("\nBilhete para primeira classe, assento: %d\n", firstIndex + 1);
                    firstIndex++;
                    totalSeats++;
                }
                else
                {
                    printf("Proximo voo sai em 3 horas\n");
                    return 0;
                }
            }
            else
            {
                // assento preenchido na posição dísponivel
                seats[economyIndex] = 1;
                printf("Bilhete para classe economica, assento: %d\n", economyIndex + 1);
                economyIndex++;
                totalSeats++;
            }
        }
        // Condição se opção for inválida
        else
        {
            printf("Opção indisponivel.\n");
            return -1;
        }
    }
    printf("Total de assentos preenchidos, proximo voo sai em 3 horas\n");
    return 0;
}