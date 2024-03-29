#ifndef UTILL
#define UTILL

namespace ft {
    template<bool Cond, class T = void>
    struct enable_if {
    };

    template<class T>
    struct enable_if<true, T> {
        typedef T type;
    };

    template<class T, bool v>
    struct integral_constant {
        static const T value = v;
        typedef T value_type;
        typedef integral_constant<T, v> type;

        operator T() const { return v; }
    };

    template<class T>
    struct is_integral : public integral_constant<bool, false> {
    };

    template<>
    struct is_integral<bool> : public integral_constant<bool, true> {
    };

    template<>
    struct is_integral<char> : public integral_constant<bool, true> {
    };

    template<>
    struct is_integral<wchar_t> : public integral_constant<bool, true> {
    };

    template<>
    struct is_integral<signed char> : public integral_constant<bool, true> {
    };

    template<>
    struct is_integral<short int> : public integral_constant<bool, true> {
    };

    template<>
    struct is_integral<int> : public integral_constant<bool, true> {
    };

    template<>
    struct is_integral<long int> : public integral_constant<bool, true> {
    };

    template<>
    struct is_integral<long long int> : public integral_constant<bool, true> {
    };

    template<>
    struct is_integral<unsigned char> : public integral_constant<bool, true> {
    };

    template<>
    struct is_integral<unsigned short int> : public integral_constant<bool, true> {
    };

    template<>
    struct is_integral<unsigned int> : public integral_constant<bool, true> {
    };

    template<>
    struct is_integral<unsigned long int> : public integral_constant<bool, true> {
    };

    template<>
    struct is_integral<unsigned long long int> : public integral_constant<bool, true> {
    };


    template<class InputIterator1, class InputIterator2>
    bool equal(InputIterator1 first1, InputIterator1 last1,
               InputIterator2 first2) {
        while (first1 != last1) {
            if (!(*first1 == *first2))
                return false;
            ++first1;
            ++first2;
        }
        return true;
    }

    template<class InputIterator1, class InputIterator2>
    bool lexicographical_compare(InputIterator1 first1, InputIterator1 last1,
                                 InputIterator2 first2, InputIterator2 last2) {
        while (first1 != last1) {
            if (first2 == last2 || *first2 < *first1)
                return false;
            else if (*first1 < *first2)
                return true;
            ++first1;
            ++first2;
        }
        return (first2 != last2);
    }

    template<class T1, class T2>
    struct pair {
    public:
        typedef T1 first_type;
        typedef T2 second_type;

        first_type first;
        second_type second;

        pair() : first(), second() {}

        template<class U, class V>
        pair(const pair<U, V> &pr):first(pr.first), second(pr.secondx) {}

        pair(const pair &copy) : first(copy.first), second(copy.second) {}

        pair(const first_type &a, const second_type &b) : first(a), second(b) {}

        pair &operator=(const pair &pr) {
            this->first = pr.first;
            this->second = pr.second;
            return (*this);
        }
    };

    template<class T1, class T2>
    struct pair<const T1, T2> {
    public:
        typedef T1 first_type;
        typedef T2 second_type;

        first_type first;
        second_type second;

        pair() : first(), second() {}

        template<class U, class V>
        pair(const pair<U, V> &pr):first(pr.first), second(pr.second) {}

        pair(const pair &copy) : first(copy.first), second(copy.second) {}

        pair(const first_type &a, const second_type &b) : first(a), second(b) {}

        pair &operator=(const pair &pr) {
            this->first = pr.first;
            this->second = pr.second;
            return (*this);
        }
    };


    template<class T1, class T2>
    pair<T1, T2> make_pair(T1 x, T2 y) {
        return (pair<T1, T2>(x, y));
    }
}

#endif