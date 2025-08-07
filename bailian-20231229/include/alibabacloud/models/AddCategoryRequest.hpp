// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(ParentCategoryId, parentCategoryId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(ParentCategoryId, parentCategoryId_);
    };
    AddCategoryRequest() = default ;
    AddCategoryRequest(const AddCategoryRequest &) = default ;
    AddCategoryRequest(AddCategoryRequest &&) = default ;
    AddCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCategoryRequest() = default ;
    AddCategoryRequest& operator=(const AddCategoryRequest &) = default ;
    AddCategoryRequest& operator=(AddCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryName_ != nullptr
        && this->categoryType_ != nullptr && this->parentCategoryId_ != nullptr; };
    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline AddCategoryRequest& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline string categoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, "") };
    inline AddCategoryRequest& setCategoryType(string categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // parentCategoryId Field Functions 
    bool hasParentCategoryId() const { return this->parentCategoryId_ != nullptr;};
    void deleteParentCategoryId() { this->parentCategoryId_ = nullptr;};
    inline string parentCategoryId() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryId_, "") };
    inline AddCategoryRequest& setParentCategoryId(string parentCategoryId) { DARABONBA_PTR_SET_VALUE(parentCategoryId_, parentCategoryId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> categoryName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> categoryType_ = nullptr;
    std::shared_ptr<string> parentCategoryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
