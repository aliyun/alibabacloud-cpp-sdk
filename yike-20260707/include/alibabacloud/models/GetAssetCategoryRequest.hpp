// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETCATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETASSETCATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class GetAssetCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
    };
    GetAssetCategoryRequest() = default ;
    GetAssetCategoryRequest(const GetAssetCategoryRequest &) = default ;
    GetAssetCategoryRequest(GetAssetCategoryRequest &&) = default ;
    GetAssetCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetCategoryRequest() = default ;
    GetAssetCategoryRequest& operator=(const GetAssetCategoryRequest &) = default ;
    GetAssetCategoryRequest& operator=(GetAssetCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline GetAssetCategoryRequest& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


  protected:
    // The category ID. You can obtain the category ID by using the following methods:
    // 
    // - When you create a category by calling the CreateAssetCategory operation, the category ID is the value of CategoryId in the response.
    // 
    // - When you query the category list by calling the ListAssetCategories operation, the category ID is the value of CategoryId in the corresponding entry in the response.
    shared_ptr<int64_t> categoryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
