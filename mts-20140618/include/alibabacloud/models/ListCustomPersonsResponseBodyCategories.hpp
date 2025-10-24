// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMPERSONSRESPONSEBODYCATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMPERSONSRESPONSEBODYCATEGORIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCustomPersonsResponseBodyCategoriesCategory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListCustomPersonsResponseBodyCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomPersonsResponseBodyCategories& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomPersonsResponseBodyCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
    };
    ListCustomPersonsResponseBodyCategories() = default ;
    ListCustomPersonsResponseBodyCategories(const ListCustomPersonsResponseBodyCategories &) = default ;
    ListCustomPersonsResponseBodyCategories(ListCustomPersonsResponseBodyCategories &&) = default ;
    ListCustomPersonsResponseBodyCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomPersonsResponseBodyCategories() = default ;
    ListCustomPersonsResponseBodyCategories& operator=(const ListCustomPersonsResponseBodyCategories &) = default ;
    ListCustomPersonsResponseBodyCategories& operator=(ListCustomPersonsResponseBodyCategories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline const vector<Models::ListCustomPersonsResponseBodyCategoriesCategory> & category() const { DARABONBA_PTR_GET_CONST(category_, vector<Models::ListCustomPersonsResponseBodyCategoriesCategory>) };
    inline vector<Models::ListCustomPersonsResponseBodyCategoriesCategory> category() { DARABONBA_PTR_GET(category_, vector<Models::ListCustomPersonsResponseBodyCategoriesCategory>) };
    inline ListCustomPersonsResponseBodyCategories& setCategory(const vector<Models::ListCustomPersonsResponseBodyCategoriesCategory> & category) { DARABONBA_PTR_SET_VALUE(category_, category) };
    inline ListCustomPersonsResponseBodyCategories& setCategory(vector<Models::ListCustomPersonsResponseBodyCategoriesCategory> && category) { DARABONBA_PTR_SET_RVALUE(category_, category) };


  protected:
    std::shared_ptr<vector<Models::ListCustomPersonsResponseBodyCategoriesCategory>> category_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
