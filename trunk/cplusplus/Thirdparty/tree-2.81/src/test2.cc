#include "tree.hh"
#include "tree_util.hh"

int main(int, char **)
	{
	tree<int> tr;

	tree<int>::iterator i1 = tr.insert(tr.begin(), 1);
	tree<int>::iterator i2 = tr.append_child(i1, 2);
	tree<int>::iterator i3 = tr.append_child(i1, 3);
	tr.append_child(i2, 21);
	tr.append_child(i3, 31);
	tree<int>::iterator i4 = tr.append_child(i1, 4);

	kptree::print_tree_bracketed(tr, std::cout);

	std::cout << std::endl;
    tree<int>::breadth_first_iterator it = tr.begin_breadth_first();
    while(it != tr.end_breadth_first())
    {
        std::cout << (*it) << std::endl;
        if( (*it) == 3)
        {
            std::cout << "At 3, skipping children\n";
            it.skip_children();
        }
        ++it;

    }
	std::cout << std::endl;
	}
