import java.text.DecimalFormat;
import java.text.NumberFormat;
import java.util.Random;

class Net {

    double n=0.5;

    int training[][] =new int[144][];
    Neuron neurons[]=new Neuron[144];

    public Net(int noOfNeurons,int trainingdata[][]){
        neurons=new Neuron[noOfNeurons];
        Random r=new Random();
        double f=(r.nextDouble()%100)/10;
        System.out.println("Zapominanie: "+f);
        for(int j=0;j<neurons.length;j++){
            neurons[j]=new Neuron(f);
        }
        training=trainingdata;
    }

    public void training(){
        for(int i=0;i<training.length;i++){
            int inputs[]= training[i];
            double output=getNeuralNetOutput(neurons,inputs);
            //Update all the neurons
            for(int j=0;j<neurons.length;j++){
                neurons[j].updateWeight(output*n*inputs[j]);
            }
        }
    }

    public double getNeuralNetOutput(Neuron[] neurons,int inputs[]){
        //get all the outputs and add them together
        double output=0;
        for(int j=0;j<neurons.length;j++){
            output+=neurons[j].getOutput(inputs[j]);
        }
        return output;
    }

    public double[] testing (int[] inputs){
        //System.out.println(getNeuralNetOutput(neurons,inputs));
        double[] out=new double[neurons.length];
        for(int i=0;i<neurons.length;i++) {
            out[i]=neurons[i].getOutput(inputs[i]);
            //System.out.print(i + ": " + neurons[i].getOutput(inputs[i]) + "  ");
        }
        // System.out.print("\n");
        return out;
    }

    class Neuron{
        double w;
        double forgetting;
        public Neuron(double f){
            Random randomGenerator = new Random();
            w= ((randomGenerator.nextDouble()%100));
            forgetting=f;

        }

        public double getOutput(int x){
            NumberFormat fm = new DecimalFormat();
            fm.setMaximumFractionDigits(2);
            return Math.sin(x*w);
        }

        public void updateWeight(double update){
            w=(1-forgetting)*w+update;
        }
    }
}