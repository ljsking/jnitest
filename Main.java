public class Main{
	public static void main(String[] args) 
	{ 
		Coordination coord = new Coordination(3, 4);
		int dist = JniBridge.calcDist(coord);
		System.out.println(""+dist); 
	} 
}