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
import java.util.LinkedList;

public class DepthFirst implements Iterator<Node> {
    private LinkedList<Node> list;

    public DepthFirst(HashMap<String, Node> tree, String identifier) {
        list = new LinkedList<Node>();
        if (tree.containsKey(identifier)) {
            this.buildList(tree, identifier);
        }
    }

    private void buildList(HashMap<String, Node> tree, String identifier) {
        list.add(tree.get(identifier));
        ArrayList<String> children = tree.get(identifier).getChildren();
        for (String child : children) {
            // Recursive call
            this.buildList(tree, child);
        }
    }

    @Override
    public boolean hasNext() {
        return !list.isEmpty();
    }

    @Override
    public Node next() {
        return list.poll();
    }

    @Override
    public void remove() {
        throw new UnsupportedOperationException();
    }
}