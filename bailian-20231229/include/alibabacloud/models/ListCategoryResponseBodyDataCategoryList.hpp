// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATEGORYRESPONSEBODYDATACATEGORYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCATEGORYRESPONSEBODYDATACATEGORYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListCategoryResponseBodyDataCategoryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCategoryResponseBodyDataCategoryList& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(ParentCategoryId, parentCategoryId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCategoryResponseBodyDataCategoryList& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(ParentCategoryId, parentCategoryId_);
    };
    ListCategoryResponseBodyDataCategoryList() = default ;
    ListCategoryResponseBodyDataCategoryList(const ListCategoryResponseBodyDataCategoryList &) = default ;
    ListCategoryResponseBodyDataCategoryList(ListCategoryResponseBodyDataCategoryList &&) = default ;
    ListCategoryResponseBodyDataCategoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCategoryResponseBodyDataCategoryList() = default ;
    ListCategoryResponseBodyDataCategoryList& operator=(const ListCategoryResponseBodyDataCategoryList &) = default ;
    ListCategoryResponseBodyDataCategoryList& operator=(ListCategoryResponseBodyDataCategoryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryId_ != nullptr
        && this->categoryName_ != nullptr && this->categoryType_ != nullptr && this->isDefault_ != nullptr && this->parentCategoryId_ != nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline ListCategoryResponseBodyDataCategoryList& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline ListCategoryResponseBodyDataCategoryList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline string categoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, "") };
    inline ListCategoryResponseBodyDataCategoryList& setCategoryType(string categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline ListCategoryResponseBodyDataCategoryList& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // parentCategoryId Field Functions 
    bool hasParentCategoryId() const { return this->parentCategoryId_ != nullptr;};
    void deleteParentCategoryId() { this->parentCategoryId_ = nullptr;};
    inline string parentCategoryId() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryId_, "") };
    inline ListCategoryResponseBodyDataCategoryList& setParentCategoryId(string parentCategoryId) { DARABONBA_PTR_SET_VALUE(parentCategoryId_, parentCategoryId) };


  protected:
    std::shared_ptr<string> categoryId_ = nullptr;
    std::shared_ptr<string> categoryName_ = nullptr;
    std::shared_ptr<string> categoryType_ = nullptr;
    std::shared_ptr<bool> isDefault_ = nullptr;
    std::shared_ptr<string> parentCategoryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
