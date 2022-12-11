package application;

public class EnergyComputationAlgoNative {
	static {
		try {
			System.load("C:\\Users\\lzx\\Documents\\wifi-simulator-csye6200\\WiFiSimulationWorkspace\\jni\\libEnergyComputationAlgo.dll");
		} catch(Exception e) {
			System.out.println(e);
		}
		
	}
		
	public native double[][] computeWifiEnergy(double[][] imageMatrix, int routerXPos, int routerYPos);
}
