/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
//package substringlength;

import java.util.HashSet;

/**
 *
 * @author om
 */
public class SubstringLength {

    public int subStringLengthMax(String s)
    {
        int i = 0;
        int j = 0;
        int size = 0;
        HashSet<Character> hash_set = new HashSet();
        while(i < s.length())
        {
            if(!hash_set.contains(s.charAt(i)))
            {
                hash_set.add(s.charAt(i));
                i++;
                //size++;
                size = Math.max(hash_set.size(), size);
            }
            else
            {
                hash_set.remove(s.charAt(j));
                j++;
                //size--;
            }
        }
        return size;
    
        
    }
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        SubstringLength obj= new SubstringLength();
        
        String s = "bbbbbbb" ; //Enter input here
         assert s.length()> 5*100000 && s.length()< 0 :" Not valid Input"; 
        int size = obj.subStringLengthMax("abcdabcdbb");// Enter Input Here
        System.out.println("size is  "+size);
    }
    
}

