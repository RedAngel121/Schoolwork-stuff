/*
List of Cars
Altered by Brandon Davidson
CPT 307 - Week 4 - Assignment
Professor Pete Limon
08/03/2020 
*/

// Copyright (C) 2007-2014 by Brett Alistair Kromkamp <brett@perfectlearn.com>.

package Trees;

import java.util.Iterator;

public class Base {
    public static void main(String[] args) {
        Tree tree = new Tree();
        /*

        The second parameter for the addNode method is the identifier for the node's
        parent. In the case of the root node, either null is provided or no second
        parameter is provided.

        Names listed below were replaced with makes of cars instead to satisfy Assignment Requirements.

        */
        tree.addNode("Mini Cooper");
        tree.addNode("Toyota", "Mini Cooper");
        tree.addNode("Porsche", "Mini Cooper");
        tree.addNode("Honda", "Toyota");
        tree.addNode("Ford", "Toyota");
        tree.addNode("Nissan", "Ford");
        tree.addNode("BMW", "Ford");
        tree.addNode("Volkswagen", "Nissan");
        tree.addNode("Tesla", "Volkswagen");
        tree.addNode("McLaren", "Porsche");
        tree.addNode("Pagani", "Toyota");
        System.out.println("\n");
        tree.display("Mini Cooper");
        System.out.println("\n***** DEPTH-FIRST ITERATION *****\n");
        // Default traversal strategy is 'depth-first'
        Iterator<Node> depthIterator = tree.iterator("Mini Cooper");
        while (depthIterator.hasNext()) {
            Node node = depthIterator.next();
            System.out.println(node.getIdentifier());
        }
        System.out.println("\n***** BREADTH-FIRST ITERATION *****\n");
        Iterator<Node> breadthIterator = tree.iterator("Mini Cooper", TravelStrat.BREADTH_FIRST);
        while (breadthIterator.hasNext()) {
            Node node = breadthIterator.next();
            System.out.println(node.getIdentifier());
        }
    }
}