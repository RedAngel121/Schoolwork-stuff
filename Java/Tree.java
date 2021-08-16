/*
List of Cars
Altered by Brandon Davidson
CPT 307 - Week 4 - Assignment
Professor Pete Limon
08/03/2020 
*/

// Copyright (C) 2007-2014 by Brett Alistair Kromkamp <brett@perfectlearn.com>.

package Trees;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;

public class Tree {
    private final static int ROOT = 0;
    private HashMap<String, Node> nodes;
    private TravelStrat travelStrat;

    // Constructors
    public Tree() {
        this(TravelStrat.DEPTH_FIRST);
    }

    public Tree(TravelStrat travelStrat) {
        this.nodes = new HashMap<String, Node>();
        this.travelStrat = travelStrat;
    }

    // Properties
    public HashMap<String, Node> getNodes() {
        return nodes;
    }

    public TravelStrat getTravelStrat() {
        return travelStrat;
    }

    public void setTravelStrat(TravelStrat travelStrat) {
        this.travelStrat = travelStrat;
    }

    // Public interface
    public Node addNode(String identifier) {
        return this.addNode(identifier, null);
    }

    public Node addNode(String identifier, String parent) {
        Node node = new Node(identifier);
        nodes.put(identifier, node);
        if (parent != null) {
            nodes.get(parent).addChild(identifier);
        }
        return node;
    }

    public void display(String identifier) {
        this.display(identifier, ROOT);
    }

    public void display(String identifier, int depth) {
        ArrayList<String> children = nodes.get(identifier).getChildren();
        if (depth == ROOT) {
            System.out.println(nodes.get(identifier).getIdentifier());
        } else {
            String tabs = String.format("%0" + depth + "d", 0).replace("0", "    ");
            // 4 spaces
            System.out.println(tabs + nodes.get(identifier).getIdentifier());
        }
        depth++;
        for (String child : children) {
            // Recursive call
            this.display(child, depth);
        }
    }

    public Iterator<Node> iterator(String identifier) {
        return this.iterator(identifier, travelStrat);
    }

    public Iterator<Node> iterator(String identifier, TravelStrat travelStrat) {
        return travelStrat == TravelStrat.BREADTH_FIRST ? new BreadthFirst(nodes, identifier)
                : new DepthFirst(nodes, identifier);
    }
}
