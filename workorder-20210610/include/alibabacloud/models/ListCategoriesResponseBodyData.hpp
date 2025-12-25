// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATEGORIESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCATEGORIESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class ListCategoriesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCategoriesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
    };
    friend void from_json(const Darabonba::Json& j, ListCategoriesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
    };
    ListCategoriesResponseBodyData() = default ;
    ListCategoriesResponseBodyData(const ListCategoriesResponseBodyData &) = default ;
    ListCategoriesResponseBodyData(ListCategoriesResponseBodyData &&) = default ;
    ListCategoriesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCategoriesResponseBodyData() = default ;
    ListCategoriesResponseBodyData& operator=(const ListCategoriesResponseBodyData &) = default ;
    ListCategoriesResponseBodyData& operator=(ListCategoriesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && return this->categoryName_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline ListCategoriesResponseBodyData& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline ListCategoriesResponseBodyData& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


  protected:
    // The ID of the ticket issue category.
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    // The name of the ticket issue category.
    std::shared_ptr<string> categoryName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
