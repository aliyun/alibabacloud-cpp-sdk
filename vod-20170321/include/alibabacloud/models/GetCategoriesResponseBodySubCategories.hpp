// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATEGORIESRESPONSEBODYSUBCATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_GETCATEGORIESRESPONSEBODYSUBCATEGORIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCategoriesResponseBodySubCategoriesCategory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetCategoriesResponseBodySubCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCategoriesResponseBodySubCategories& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
    };
    friend void from_json(const Darabonba::Json& j, GetCategoriesResponseBodySubCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
    };
    GetCategoriesResponseBodySubCategories() = default ;
    GetCategoriesResponseBodySubCategories(const GetCategoriesResponseBodySubCategories &) = default ;
    GetCategoriesResponseBodySubCategories(GetCategoriesResponseBodySubCategories &&) = default ;
    GetCategoriesResponseBodySubCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCategoriesResponseBodySubCategories() = default ;
    GetCategoriesResponseBodySubCategories& operator=(const GetCategoriesResponseBodySubCategories &) = default ;
    GetCategoriesResponseBodySubCategories& operator=(GetCategoriesResponseBodySubCategories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline const vector<Models::GetCategoriesResponseBodySubCategoriesCategory> & category() const { DARABONBA_PTR_GET_CONST(category_, vector<Models::GetCategoriesResponseBodySubCategoriesCategory>) };
    inline vector<Models::GetCategoriesResponseBodySubCategoriesCategory> category() { DARABONBA_PTR_GET(category_, vector<Models::GetCategoriesResponseBodySubCategoriesCategory>) };
    inline GetCategoriesResponseBodySubCategories& setCategory(const vector<Models::GetCategoriesResponseBodySubCategoriesCategory> & category) { DARABONBA_PTR_SET_VALUE(category_, category) };
    inline GetCategoriesResponseBodySubCategories& setCategory(vector<Models::GetCategoriesResponseBodySubCategoriesCategory> && category) { DARABONBA_PTR_SET_RVALUE(category_, category) };


  protected:
    std::shared_ptr<vector<Models::GetCategoriesResponseBodySubCategoriesCategory>> category_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
