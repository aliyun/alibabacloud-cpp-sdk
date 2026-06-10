// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECATEGORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DescribeCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCategoryResponseBody() = default ;
    DescribeCategoryResponseBody(const DescribeCategoryResponseBody &) = default ;
    DescribeCategoryResponseBody(DescribeCategoryResponseBody &&) = default ;
    DescribeCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCategoryResponseBody() = default ;
    DescribeCategoryResponseBody& operator=(const DescribeCategoryResponseBody &) = default ;
    DescribeCategoryResponseBody& operator=(DescribeCategoryResponseBody &&) = default ;
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
      // The ID of the category.
      shared_ptr<int64_t> categoryId_ {};
      // The name of the category.
      shared_ptr<string> name_ {};
      // The ID of the parent category. A value of -1 indicates the root directory.
      shared_ptr<int64_t> parentCategoryId_ {};
      // The status of the category. Valid values: 0 (Normal) or -1 (Deleted).
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->category_ == nullptr
        && this->requestId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline const DescribeCategoryResponseBody::Category & getCategory() const { DARABONBA_PTR_GET_CONST(category_, DescribeCategoryResponseBody::Category) };
    inline DescribeCategoryResponseBody::Category getCategory() { DARABONBA_PTR_GET(category_, DescribeCategoryResponseBody::Category) };
    inline DescribeCategoryResponseBody& setCategory(const DescribeCategoryResponseBody::Category & category) { DARABONBA_PTR_SET_VALUE(category_, category) };
    inline DescribeCategoryResponseBody& setCategory(DescribeCategoryResponseBody::Category && category) { DARABONBA_PTR_SET_RVALUE(category_, category) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The category information.
    shared_ptr<DescribeCategoryResponseBody::Category> category_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
