// Bibliothèque boost Graph
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/kruskal_min_spanning_tree.hpp>
#include <boost/graph/graphviz.hpp>
#include <boost/graph/copy.hpp>
#include <iostream>
using namespace std;
using namespace boost;

// Structure des sommets
struct VertexProperties {

  public:
    unsigned id;

    //Constructeur
    VertexProperties() : id(0) {}
    VertexProperties(unsigned i) : id(i) {}
};

// Définitions du Graph
typedef boost::adjacency_list <
    boost::vecS, // OutEdgeList est un des types de conteneurs choisi en interne
    boost::vecS, // VertexList est de même un type de conteneur choisi en interne
    boost::undirectedS, // graphe orienté avec des arcs directionnels
    VertexProperties, // demande de prise en compte de nos sommets personalisés et non les sommets par defaut
    boost::property<boost::edge_weight_t, double> // poids des arcs
> Graph;

// Définition
using Edge = Graph::edge_descriptor;
typedef graph_traits<Graph>::vertex_descriptor vertex_t;

int main()
{
    // Création du graph g : Graphe initial
    //                   r : Graphe résultat
    Graph g; 
    Graph r;
    
    // Attribution des sommets et arcs
    vertex_t V1 = add_vertex(VertexProperties(1),g);
    vertex_t V2 = add_vertex(VertexProperties(2),g);
    vertex_t V3 = add_vertex(VertexProperties(3),g);
    vertex_t V4 = add_vertex(VertexProperties(4),g);
    vertex_t V5 = add_vertex(VertexProperties(5),g);
    vertex_t V6 = add_vertex(VertexProperties(6),g);
    vertex_t V7 = add_vertex(VertexProperties(7),g);
    vertex_t V8 = add_vertex(VertexProperties(8),g);
    vertex_t V9 = add_vertex(VertexProperties(9),g);
    vertex_t V10 = add_vertex(VertexProperties(10),g);
    vertex_t V11 = add_vertex(VertexProperties(11),g);
    vertex_t V12 = add_vertex(VertexProperties(12),g);
    vertex_t V13 = add_vertex(VertexProperties(13),g);
    vertex_t V14 = add_vertex(VertexProperties(14),g);
    vertex_t V15 = add_vertex(VertexProperties(15),g);
    vertex_t V16 = add_vertex(VertexProperties(15),g);
    vertex_t V17 = add_vertex(VertexProperties(17), g);
    vertex_t V18 = add_vertex(VertexProperties(18), g);
    vertex_t V19 = add_vertex(VertexProperties(19), g);
    vertex_t V20 = add_vertex(VertexProperties(20), g);
    vertex_t V21 = add_vertex(VertexProperties(21), g);
    vertex_t V22 = add_vertex(VertexProperties(22), g);
    vertex_t V23 = add_vertex(VertexProperties(23), g);
    vertex_t V24 = add_vertex(VertexProperties(24), g);
    vertex_t V25 = add_vertex(VertexProperties(25), g);
    vertex_t V26 = add_vertex(VertexProperties(26), g);
    vertex_t V27 = add_vertex(VertexProperties(27), g);
    vertex_t V28 = add_vertex(VertexProperties(28), g);
    vertex_t V29 = add_vertex(VertexProperties(29), g);
    vertex_t V30 = add_vertex(VertexProperties(30), g);
    vertex_t V31 = add_vertex(VertexProperties(31), g);
    vertex_t V32 = add_vertex(VertexProperties(32), g);
    vertex_t V33 = add_vertex(VertexProperties(33), g);
    vertex_t V34 = add_vertex(VertexProperties(34), g);
    
    copy_graph(g, r);

    add_edge(1, 2, {8}, g);
    add_edge(1, 3, {13}, g);
    add_edge(1, 6, {12}, g);
    add_edge(1, 11, {1}, g);
    add_edge(2, 3, {10}, g);
    add_edge(2, 9, {21}, g);
    add_edge(3, 4, {11}, g);
    add_edge(3, 7, {13}, g);
    add_edge(3, 31, {40}, g);
    add_edge(4, 5, {4}, g);
    add_edge(4, 6, {2}, g);
    add_edge(4, 7, {22}, g);
    add_edge(5, 3, {4}, g);
    add_edge(6, 5, {5}, g);
    add_edge(7, 8, {2}, g);
    add_edge(7, 9, {8}, g);
    add_edge(8, 13, {1}, g);
    add_edge(9, 8, {10}, g);
    add_edge(9, 10, {9}, g);
    add_edge(10, 11, {1}, g);
    add_edge(10, 12, {14}, g);
    add_edge(10, 13, {2}, g);
    add_edge(11, 12, {14}, g);
    add_edge(11, 13, {23}, g);
    add_edge(12, 13, {7}, g);
    add_edge(13, 7, {12}, g);
    add_edge(13, 14, {10}, g);
    add_edge(14, 7, {8}, g);
    add_edge(14, 15, {18}, g);
    add_edge(15, 16, {11}, g);
    add_edge(15, 17, {9}, g);
    add_edge(16, 22, {9}, g);
    add_edge(16, 30, {5}, g);
    add_edge(16, 31, {6}, g);
    add_edge(16, 32, {13}, g);
    add_edge(16, 33, {11}, g);
    add_edge(16, 34, {13}, g);
    add_edge(17,18,{10},g);
    add_edge(18,19,{7},g);
    add_edge(18,23,{7},g);
    add_edge(19,20,{6},g);
    add_edge(19,20,{8},g);
    add_edge(20,21,{9},g);
    add_edge(21,25,{2},g);
    add_edge(22,20,{10},g);
    add_edge(22,33,{7},g);
    add_edge(23,24,{4},g);
    add_edge(23,26,{8},g);
    add_edge(24,25,{15},g);
    add_edge(24,26,{6},g);
    add_edge(25,27,{3},g);
    add_edge(25,28,{4},g);
    add_edge(26,30,{10},g);
    add_edge(27,28,{2},g);
    add_edge(28,29,{7},g);
    add_edge(30,31,{2},g);
    add_edge(30,32,{10},g);
    add_edge(31,34,{8},g);
    add_edge(32,33,{1},g);

    // Création des noms des sommets
    string name[34];
    for (int i = 1 ; i < 35; i++) {
        name[i-1] = to_string(i);
    }

    // Attribution des arcs dans un vecteur
    auto cost = get(boost::edge_weight, g);
    std::vector<Edge> spanning_tree;
    // Utilisation de l'algorithme Kruskal
    kruskal_minimum_spanning_tree(g, std::back_inserter(spanning_tree));

    // Affichage des solution
    std::cout << "MST Solution:\n";
    for (auto e : spanning_tree) {
        std::cout << e << ": " << cost[e] << "\n"; 
        // Attribution du résultat dans le graphe résultat 
        add_edge(source(e,g),target(e,g), {cost[e]} ,r);
    }

    // Affichage du graphe résultat
    remove_vertex(0, r);
    string filename = "resultat.dot";
    ofstream fout(filename.c_str());

    write_graphviz(fout, r,  make_label_writer(&name[0]));
    system("dot -Tpng resultat.dot > resultat.png");
}
