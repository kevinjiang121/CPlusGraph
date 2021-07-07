# CPlusGraph 
A repository about graphs. Users can input in number of vertices and define edge sets. Program will create these graphs as a set of nodes and pointers. The program will be able to calculate some basic information about the graph, such as its degree matrix, its adjacency matrix, its boundary maps, and its graph Laplacian (Kirchhoff matrix). It would then be able to calculate the eigenvalues and eigenvectors of any of the above listed matrices (other than the boundary maps).

The graph is created via a linked list. Each vertices in the graph is represented by a node in the linked list. Each node contains the number of edges that is attached to the node (represented by the variable degree), an array of which edges is connected to the vertex, and each node also stores an item type. Currently the item type holds a string, but a template will be implemeneted later so that you can store any data type in the graph. The degree matrix, the adjacency matrix, and the graph Laplacian will be calculated via this linked list.

Eigenvalues and Eigenvectors are calculated via the Eigen library provided by here:
http://www.eigen.tuxfamily.org/

CURRENTLY INCOMPLETE
