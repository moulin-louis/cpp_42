/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:20:02 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/30 12:38:00 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <stack>
#include <list>

int main() {
  MutantStack<int, std::vector<int> > mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
//[...]
  mstack.push(0);
  MutantStack<int, std::vector<int> >::iterator it = mstack.begin();
  MutantStack<int, std::vector<int> >::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite)
  {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int, std::vector<int> > s(mstack);
  {
    std::list<int> mlist;  // Remplacement de MutantStack par std::list
    mlist.push_back(5);     // push devient push_back
    mlist.push_back(17);
    std::cout << mlist.back() << std::endl;  // top devient back
    mlist.pop_back();                        // pop reste pop_back
    std::cout << mlist.size() << std::endl;
    mlist.push_back(3);
    //mlist.push_back(5);
    mlist.push_back(737);
    mlist.push_back(0);
    std::list<int>::iterator itl = mlist.begin();
    std::list<int>::iterator itel = mlist.end();
    std::cout << *itel << std::endl;
    ++itl;
    --itl;
    while (itl != itel) {
      std::cout << *itl << std::endl;
      ++itl;
    }
  }
  return 0;
}