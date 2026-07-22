// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEASSETCATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEASSETCATEGORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class CreateAssetCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAssetCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAssetCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAssetCategoryResponseBody() = default ;
    CreateAssetCategoryResponseBody(const CreateAssetCategoryResponseBody &) = default ;
    CreateAssetCategoryResponseBody(CreateAssetCategoryResponseBody &&) = default ;
    CreateAssetCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAssetCategoryResponseBody() = default ;
    CreateAssetCategoryResponseBody& operator=(const CreateAssetCategoryResponseBody &) = default ;
    CreateAssetCategoryResponseBody& operator=(CreateAssetCategoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Category : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Category& obj) { 
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      };
      friend void from_json(const Darabonba::Json& j, Category& obj) { 
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      };
      Category() = default ;
      Category(const Category &) = default ;
      Category(Category &&) = default ;
      Category(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Category() = default ;
      Category& operator=(const Category &) = default ;
      Category& operator=(Category &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->categoryName_ == nullptr && this->level_ == nullptr && this->parentId_ == nullptr; };
      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
      inline Category& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // categoryName Field Functions 
      bool hasCategoryName() const { return this->categoryName_ != nullptr;};
      void deleteCategoryName() { this->categoryName_ = nullptr;};
      inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
      inline Category& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline int64_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
      inline Category& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
      inline Category& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    protected:
      shared_ptr<int64_t> categoryId_ {};
      shared_ptr<string> categoryName_ {};
      shared_ptr<int64_t> level_ {};
      shared_ptr<int64_t> parentId_ {};
    };

    virtual bool empty() const override { return this->category_ == nullptr
        && this->requestId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline const CreateAssetCategoryResponseBody::Category & getCategory() const { DARABONBA_PTR_GET_CONST(category_, CreateAssetCategoryResponseBody::Category) };
    inline CreateAssetCategoryResponseBody::Category getCategory() { DARABONBA_PTR_GET(category_, CreateAssetCategoryResponseBody::Category) };
    inline CreateAssetCategoryResponseBody& setCategory(const CreateAssetCategoryResponseBody::Category & category) { DARABONBA_PTR_SET_VALUE(category_, category) };
    inline CreateAssetCategoryResponseBody& setCategory(CreateAssetCategoryResponseBody::Category && category) { DARABONBA_PTR_SET_RVALUE(category_, category) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAssetCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateAssetCategoryResponseBody::Category> category_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
