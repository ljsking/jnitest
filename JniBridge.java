public class JniBridge 
{ 
	native public static int calcDist(Coordination coord); 
 
	static 
	{ 
		System.loadLibrary("JniBridge"); 
	} 
}
