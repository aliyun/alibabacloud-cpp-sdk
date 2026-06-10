// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCATEGORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCategoryResponseBody() = default ;
    ListCategoryResponseBody(const ListCategoryResponseBody &) = default ;
    ListCategoryResponseBody(ListCategoryResponseBody &&) = default ;
    ListCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCategoryResponseBody() = default ;
    ListCategoryResponseBody& operator=(const ListCategoryResponseBody &) = default ;
    ListCategoryResponseBody& operator=(ListCategoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Categories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Categories& obj) { 
        DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ParentCategoryId, parentCategoryId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Categories& obj) { 
        DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ParentCategoryId, parentCategoryId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Categories() = default ;
      Categories(const Categories &) = default ;
      Categories(Categories &&) = default ;
      Categories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Categories() = default ;
      Categories& operator=(const Categories &) = default ;
      Categories& operator=(Categories &&) = default ;
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
      inline Categories& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
      inline Categories& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Categories& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parentCategoryId Field Functions 
      bool hasParentCategoryId() const { return this->parentCategoryId_ != nullptr;};
      void deleteParentCategoryId() { this->parentCategoryId_ = nullptr;};
      inline int64_t getParentCategoryId() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryId_, 0L) };
      inline Categories& setParentCategoryId(int64_t parentCategoryId) { DARABONBA_PTR_SET_VALUE(parentCategoryId_, parentCategoryId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Categories& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The business code.
      shared_ptr<string> bizCode_ {};
      // The category ID.
      shared_ptr<int64_t> categoryId_ {};
      // The category name.
      shared_ptr<string> name_ {};
      // The parent category ID.
      shared_ptr<int64_t> parentCategoryId_ {};
      // The status of the category. Valid values: `0` (Normal) and `-1` (Deleted).
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->categories_ == nullptr
        && this->requestId_ == nullptr; };
    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<ListCategoryResponseBody::Categories> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<ListCategoryResponseBody::Categories>) };
    inline vector<ListCategoryResponseBody::Categories> getCategories() { DARABONBA_PTR_GET(categories_, vector<ListCategoryResponseBody::Categories>) };
    inline ListCategoryResponseBody& setCategories(const vector<ListCategoryResponseBody::Categories> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline ListCategoryResponseBody& setCategories(vector<ListCategoryResponseBody::Categories> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array of categories.
    shared_ptr<vector<ListCategoryResponseBody::Categories>> categories_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
