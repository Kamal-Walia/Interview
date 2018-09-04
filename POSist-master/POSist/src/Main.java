
import java.util.Date;

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author mca
 */
public class Main {
    int oId,nodeNo;
    float value;
    String oName,nodeId,refId;
    String hValue,childAdd,addGenesis,hSet;
    String time;
    Main root=null;
    Main right,left;
    public Main(float value){
        if(root==null){
        root.value=value;
        time= new Date().toString();
        //System.out.println(time);
        }
        else{
            if(root.value>root.value-(root.left.value + root.right.value)){
                root.right.right.value=value;
            }
            if(root.value<root.value-(root.left.value + root.right.value)){
                root.left.right.value=value;
            }
        }
    }

    public String getAddGenesis() {
        return addGenesis;
    }

    public String getChildAdd() {
        return childAdd;
    }

    public String gethSet() {
        return hSet;
    }

    public String gethValue() {
        return hValue;
    }

    public String getNodeId() {
        return nodeId;
    }

    public int getNodeNo() {
        return nodeNo;
    }

    public int getoId() {
        return oId;
    }

    public String getoName() {
        return oName;
    }

    public String getRefId() {
        return refId;
    }

    public String getTime() {
        return time;
    }

    public float getValue() {
        return value;
    }

    public void setAddGenesis(String addGenesis) {
        this.addGenesis = addGenesis;
    }

    public void setChildAdd(String childAdd) {
        this.childAdd = childAdd;
    }

    public void sethSet(String hSet) {
        this.hSet = hSet;
    }

    public void sethValue() {
        this.hValue=this.toString();
    }

    public void setNodeId(String nodeId) {
        this.nodeId = nodeId;
    }

    public void setNodeNo(int nodeNo) {
        this.nodeNo = nodeNo;
    }

    public void setoId(int oId) {
        this.oId = oId;
    }

    public void setoName(String oName) {
        this.oName = oName;
    }

    public void setRefId(String refId) {
        this.refId = refId;
    }

    public void setTime(String time) {
        this.time = time;
    }

    public void setValue(float value) {
        this.value = value;
    }
    public static void main(String args[]){
        Main ob= new Main(1.0f);
    }
}
