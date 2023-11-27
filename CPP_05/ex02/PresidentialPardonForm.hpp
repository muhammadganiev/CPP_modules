#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm {
    private:
        std::string _target;
    public: 
        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const & other);
        PresidentialPardonForm(std::string const & target);
        PresidentialPardonForm(std::string const * target);
        PresidentialPardonForm & operator=(PresidentialPardonForm const & other);
        ~PresidentialPardonForm();

        void execute(const Bureaucrat& executor) const;
};

#endif
