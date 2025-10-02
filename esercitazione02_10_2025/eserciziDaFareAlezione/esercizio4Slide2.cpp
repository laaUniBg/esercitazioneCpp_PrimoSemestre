/**
 * dichiaro le variabili voto1, voto2 (int)
 * voto1 è provaPratica
 * voto2 è provaTeorica
 *
 * prendo in input voto1
 * se voto1 <= 30 e voto1 >= 0 allora
 *   prendo in input voto2
 *      se voto2 <= 30 e voto2 >= 0 allora
 *          se voto1>18 e voto2>18 allora
 *              stampo "promosso"
 *         altrimenti
 *            stampo "bocciato"
 *      else
 *          stampo "voto2 non valido"
 * else
 *   stampo "voto1 non valido"
 * 
 * CODICE SUPRA TROPPO COMPLESSO 
 * 
 * rifacciamo:
 * 
 * do 
 *      prendo in input voto1
 *      if(voto1<0 oppure voto1>30)
 *         stampo "voto errato. il voto deve essere compreso tra 0 e 30"
 * while (voto1 < 0 oppure voto1 > 30) // not(voto1 >= 0 e voto1 <= 30)
 * 
 * do 
 *      prendo in input voto2
 *      if(voto2<0 oppure voto2>30)
 *         stampo "voto errato. il voto deve essere compreso tra 0 e 30"
 * while (voto2 < 0 oppure voto2 > 30) // not(voto2 >= 0 e voto2 <= 30)
 * 
 * if(voto1 >=18 and voto2 >=18)
 *   stampo "promosso"
 * else
 *  stampo "non promosso"
 */
