// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMPERSONSRESPONSEBODYCATEGORIESCATEGORY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMPERSONSRESPONSEBODYCATEGORIESCATEGORY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCustomPersonsResponseBodyCategoriesCategoryPersons.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListCustomPersonsResponseBodyCategoriesCategory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomPersonsResponseBodyCategoriesCategory& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryDescription, categoryDescription_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(Persons, persons_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomPersonsResponseBodyCategoriesCategory& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryDescription, categoryDescription_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(Persons, persons_);
    };
    ListCustomPersonsResponseBodyCategoriesCategory() = default ;
    ListCustomPersonsResponseBodyCategoriesCategory(const ListCustomPersonsResponseBodyCategoriesCategory &) = default ;
    ListCustomPersonsResponseBodyCategoriesCategory(ListCustomPersonsResponseBodyCategoriesCategory &&) = default ;
    ListCustomPersonsResponseBodyCategoriesCategory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomPersonsResponseBodyCategoriesCategory() = default ;
    ListCustomPersonsResponseBodyCategoriesCategory& operator=(const ListCustomPersonsResponseBodyCategoriesCategory &) = default ;
    ListCustomPersonsResponseBodyCategoriesCategory& operator=(ListCustomPersonsResponseBodyCategoriesCategory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryDescription_ == nullptr
        && return this->categoryId_ == nullptr && return this->categoryName_ == nullptr && return this->persons_ == nullptr; };
    // categoryDescription Field Functions 
    bool hasCategoryDescription() const { return this->categoryDescription_ != nullptr;};
    void deleteCategoryDescription() { this->categoryDescription_ = nullptr;};
    inline string categoryDescription() const { DARABONBA_PTR_GET_DEFAULT(categoryDescription_, "") };
    inline ListCustomPersonsResponseBodyCategoriesCategory& setCategoryDescription(string categoryDescription) { DARABONBA_PTR_SET_VALUE(categoryDescription_, categoryDescription) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline ListCustomPersonsResponseBodyCategoriesCategory& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline ListCustomPersonsResponseBodyCategoriesCategory& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // persons Field Functions 
    bool hasPersons() const { return this->persons_ != nullptr;};
    void deletePersons() { this->persons_ = nullptr;};
    inline const Models::ListCustomPersonsResponseBodyCategoriesCategoryPersons & persons() const { DARABONBA_PTR_GET_CONST(persons_, Models::ListCustomPersonsResponseBodyCategoriesCategoryPersons) };
    inline Models::ListCustomPersonsResponseBodyCategoriesCategoryPersons persons() { DARABONBA_PTR_GET(persons_, Models::ListCustomPersonsResponseBodyCategoriesCategoryPersons) };
    inline ListCustomPersonsResponseBodyCategoriesCategory& setPersons(const Models::ListCustomPersonsResponseBodyCategoriesCategoryPersons & persons) { DARABONBA_PTR_SET_VALUE(persons_, persons) };
    inline ListCustomPersonsResponseBodyCategoriesCategory& setPersons(Models::ListCustomPersonsResponseBodyCategoriesCategoryPersons && persons) { DARABONBA_PTR_SET_RVALUE(persons_, persons) };


  protected:
    // The description of the figure library.
    std::shared_ptr<string> categoryDescription_ = nullptr;
    // The ID of the figure library.
    std::shared_ptr<string> categoryId_ = nullptr;
    // The name of the figure library.
    std::shared_ptr<string> categoryName_ = nullptr;
    // The array of the figures.
    std::shared_ptr<Models::ListCustomPersonsResponseBodyCategoriesCategoryPersons> persons_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
