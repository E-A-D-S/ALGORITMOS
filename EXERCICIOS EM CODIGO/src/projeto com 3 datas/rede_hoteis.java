package meu_projeto;
import java.util.Scanner;

public class rede_hoteis {
	public static void main(String[] args) {

		//Importamos o Scanner, para pegar os dados digitados no console...
				Scanner entrada = new Scanner(System.in);
				
				String lakewood = "Lakewood";
				String bridgewood = "Bridgewood";
				String ridgewood = "Ridgewood";
				
				String dia1 = "09/05/2022(segunda)";
				String dia2 = "10/05/2022(terça)";
				String dia3 = "11/05/2022(quarta)";
				String dia4 = "14/05/2022(sábado)";
				String dia5 = "15/05/2022(domingo)";
					
				
				System.out.println("Qual o tipo de cliente regular ou reward: ");
				String cliente = entrada.next();
				
				//Criamos uma variavel para a coleta dos dados, do dia da semana...
				System.out.println("Para agendar sua reserva digite 1 para dia de semana ou 2 para final de semana? ");
				int diaSemana = entrada.nextInt();
				
								
				
				if(diaSemana == 1 && cliente.equalsIgnoreCase("regular")) {
					System.out.println("Dia da reserva: " + dia1 + "/" + dia2 + "/" + dia3);
					System.out.println("Valor da reserva é R$ 110.00 o tipo de cliente é: " + cliente);
					System.out.println("o Hotel mais barato é o:" + lakewood);
				
				}else if (diaSemana == 1 && cliente.equalsIgnoreCase("reward")) {
					System.out.println("Dia da reserva: " + dia1 + "/" + dia2 + "/" + dia3);
					System.out.println("Valor da reserva é R$ 80.00 o tipo de cliente é: " + cliente);
					System.out.println("o Hotel  mais barato é o: " + lakewood);
				}
				
				else if (diaSemana == 2 && cliente.equalsIgnoreCase("regular")) {
					System.out.println("Dia da reserva: " + dia4 + "" + dia5 + "" );
					System.out.println("Valor da reserva é R$ 60.00 o tipo de cliente é: " + cliente);
					System.out.println("o Hotel  mais barato é o: " + bridgewood);
				}
				
				else if (diaSemana == 2 && cliente.equalsIgnoreCase("reward")) {
					System.out.println("Dia da reserva: " + dia5 + "" + dia5 + "");
					System.out.println("Valor da reserva é R$ 40.00 o tipo de cliente é: " + cliente);
					System.out.println("o Hotel  mais barato é o: " + ridgewood);

				}else {
					System.out.println("Escolha o dia de reserva DIA DE SEMANA OU DE FINAL DE SEMANA.");
				}
				
				//fechando o Scanner, caso não use o "entrada.close(); " ainda continuará rodando no console..		
				entrada.close();
				

	}
}
