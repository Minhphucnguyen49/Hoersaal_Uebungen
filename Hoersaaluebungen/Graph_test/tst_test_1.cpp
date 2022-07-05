#include <QtTest>
#include "Graph.h"

// add necessary includes here

class Graph_test : public QObject
{
    Q_OBJECT

public:
    Graph g{};
    Graph_test();
    ~Graph_test();


private slots:
    void test_case1();
    void testNodeDuplicate();

};

Graph_test::Graph_test()
{
    g.addNode("A");
    g.addNode("B");
}

Graph_test::~Graph_test()
{

}

void Graph_test::test_case1()
{


}
void Graph_test::testNodeDuplicate()
{
    QVERIFY_EXCEPTION_THROWN(g.addNode("A"), std::invalid_argument);
}

QTEST_APPLESS_MAIN(Graph_test)

#include "tst_test_1.moc"
