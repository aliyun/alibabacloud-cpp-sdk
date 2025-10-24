// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMPERSONSRESPONSEBODYCATEGORIESCATEGORYPERSONS_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMPERSONSRESPONSEBODYCATEGORIESCATEGORYPERSONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListCustomPersonsResponseBodyCategoriesCategoryPersons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomPersonsResponseBodyCategoriesCategoryPersons& obj) { 
      DARABONBA_PTR_TO_JSON(Person, person_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomPersonsResponseBodyCategoriesCategoryPersons& obj) { 
      DARABONBA_PTR_FROM_JSON(Person, person_);
    };
    ListCustomPersonsResponseBodyCategoriesCategoryPersons() = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersons(const ListCustomPersonsResponseBodyCategoriesCategoryPersons &) = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersons(ListCustomPersonsResponseBodyCategoriesCategoryPersons &&) = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomPersonsResponseBodyCategoriesCategoryPersons() = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersons& operator=(const ListCustomPersonsResponseBodyCategoriesCategoryPersons &) = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersons& operator=(ListCustomPersonsResponseBodyCategoriesCategoryPersons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->person_ == nullptr; };
    // person Field Functions 
    bool hasPerson() const { return this->person_ != nullptr;};
    void deletePerson() { this->person_ = nullptr;};
    inline const vector<Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson> & person() const { DARABONBA_PTR_GET_CONST(person_, vector<Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson>) };
    inline vector<Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson> person() { DARABONBA_PTR_GET(person_, vector<Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson>) };
    inline ListCustomPersonsResponseBodyCategoriesCategoryPersons& setPerson(const vector<Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson> & person) { DARABONBA_PTR_SET_VALUE(person_, person) };
    inline ListCustomPersonsResponseBodyCategoriesCategoryPersons& setPerson(vector<Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson> && person) { DARABONBA_PTR_SET_RVALUE(person_, person) };


  protected:
    std::shared_ptr<vector<Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson>> person_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
