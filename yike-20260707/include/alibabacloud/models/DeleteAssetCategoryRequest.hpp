// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEASSETCATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEASSETCATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class DeleteAssetCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAssetCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAssetCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
    };
    DeleteAssetCategoryRequest() = default ;
    DeleteAssetCategoryRequest(const DeleteAssetCategoryRequest &) = default ;
    DeleteAssetCategoryRequest(DeleteAssetCategoryRequest &&) = default ;
    DeleteAssetCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAssetCategoryRequest() = default ;
    DeleteAssetCategoryRequest& operator=(const DeleteAssetCategoryRequest &) = default ;
    DeleteAssetCategoryRequest& operator=(DeleteAssetCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline DeleteAssetCategoryRequest& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> categoryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
