#ifndef STACK
#define STACK

#include "../vector/vector.hpp"

namespace ft {
    template<class T, class Container = ft::vector<T> >
    class stack {
    public:
        typedef T value_type;
        typedef Container container_type;
        typedef typename Container::size_type size_type;

    protected:
        container_type c;

    public:
        explicit stack(const container_type &cont = container_type()) {
            this->c = cont;
        }

        stack(const stack &copy) {
            *this = copy;
        }

        stack &operator=(const stack &other) {
            this->c = other.c;
            return (*this);
        }

        bool empty() const {
            return (this->c.empty());
        }

        size_type size() const {
            return (this->c.size());
        }

        value_type &top() {
            return (this->c.back());
        }

        const value_type &top() const {
            return (this->c.back());
        }

        void push(const value_type &val) {
            this->c.push_back(val);
        }

        void pop() {
            this->c.pop_back();
        }

        template<class A, class Cont>
        friend bool operator==(const stack<A, Cont> &lhs, const stack<A, Cont> &rhs) {
            return (lhs.c == rhs.c);
        }

        template<class A, class Cont>
        friend bool operator!=(const stack<A, Cont> &lhs, const stack<A, Cont> &rhs) {
            return (lhs.c != rhs.c);
        }

        template<class A, class Cont>
        friend bool operator<(const stack<A, Cont> &lhs, const stack<A, Cont> &rhs) {
            return (lhs.c < rhs.c);
        }

        template<class A, class Cont>
        friend bool operator<=(const stack<A, Cont> &lhs, const stack<A, Cont> &rhs) {
            return (lhs.c <= rhs.c);
        }

        template<class A, class Cont>
        friend bool operator>(const stack<A, Cont> &lhs, const stack<A, Cont> &rhs) {
            return (lhs.c > rhs.c);
        }

        template<class A, class Cont>
        friend bool operator>=(const stack<A, Cont> &lhs, const stack<A, Cont> &rhs) {
            return (lhs.c >= rhs.c);
        }
    };
}

#endif