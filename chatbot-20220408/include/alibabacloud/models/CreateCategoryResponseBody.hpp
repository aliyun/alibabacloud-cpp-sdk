// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECATEGORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreateCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCategoryResponseBody() = default ;
    CreateCategoryResponseBody(const CreateCategoryResponseBody &) = default ;
    CreateCategoryResponseBody(CreateCategoryResponseBody &&) = default ;
    CreateCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCategoryResponseBody() = default ;
    CreateCategoryResponseBody& operator=(const CreateCategoryResponseBody &) = default ;
    CreateCategoryResponseBody& operator=(CreateCategoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Category : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Category& obj) { 
        DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ParentCategoryId, parentCategoryId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Category& obj) { 
        DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ParentCategoryId, parentCategoryId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->bizCode_ == nullptr
        && this->categoryId_ == nullptr && this->name_ == nullptr && this->parentCategoryId_ == nullptr && this->status_ == nullptr; };
      // bizCode Field Functions 
      bool hasBizCode() const { return this->bizCode_ != nullptr;};
      void deleteBizCode() { this->bizCode_ = nullptr;};
      inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
      inline Category& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
      inline Category& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Category& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parentCategoryId Field Functions 
      bool hasParentCategoryId() const { return this->parentCategoryId_ != nullptr;};
      void deleteParentCategoryId() { this->parentCategoryId_ = nullptr;};
      inline int64_t getParentCategoryId() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryId_, 0L) };
      inline Category& setParentCategoryId(int64_t parentCategoryId) { DARABONBA_PTR_SET_VALUE(parentCategoryId_, parentCategoryId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Category& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The business code.
      shared_ptr<string> bizCode_ {};
      // The category ID.
      shared_ptr<int64_t> categoryId_ {};
      // The category name.
      shared_ptr<string> name_ {};
      // The ID of the parent category.
      shared_ptr<int64_t> parentCategoryId_ {};
      // The category status. A value of -1 indicates that the category has been deleted, but this change has not been published. A value of 0 indicates Normal.
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->category_ == nullptr
        && this->requestId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline const CreateCategoryResponseBody::Category & getCategory() const { DARABONBA_PTR_GET_CONST(category_, CreateCategoryResponseBody::Category) };
    inline CreateCategoryResponseBody::Category getCategory() { DARABONBA_PTR_GET(category_, CreateCategoryResponseBody::Category) };
    inline CreateCategoryResponseBody& setCategory(const CreateCategoryResponseBody::Category & category) { DARABONBA_PTR_SET_VALUE(category_, category) };
    inline CreateCategoryResponseBody& setCategory(CreateCategoryResponseBody::Category && category) { DARABONBA_PTR_SET_RVALUE(category_, category) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the created category.
    shared_ptr<CreateCategoryResponseBody::Category> category_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
