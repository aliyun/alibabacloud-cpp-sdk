// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETACATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMETACATEGORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MetaCategory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListMetaCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryList, categoryList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryList, categoryList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMetaCategoryResponseBody() = default ;
    ListMetaCategoryResponseBody(const ListMetaCategoryResponseBody &) = default ;
    ListMetaCategoryResponseBody(ListMetaCategoryResponseBody &&) = default ;
    ListMetaCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaCategoryResponseBody() = default ;
    ListMetaCategoryResponseBody& operator=(const ListMetaCategoryResponseBody &) = default ;
    ListMetaCategoryResponseBody& operator=(ListMetaCategoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CategoryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CategoryList& obj) { 
        DARABONBA_PTR_TO_JSON(MetaCategory, metaCategory_);
      };
      friend void from_json(const Darabonba::Json& j, CategoryList& obj) { 
        DARABONBA_PTR_FROM_JSON(MetaCategory, metaCategory_);
      };
      CategoryList() = default ;
      CategoryList(const CategoryList &) = default ;
      CategoryList(CategoryList &&) = default ;
      CategoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CategoryList() = default ;
      CategoryList& operator=(const CategoryList &) = default ;
      CategoryList& operator=(CategoryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->metaCategory_ == nullptr; };
      // metaCategory Field Functions 
      bool hasMetaCategory() const { return this->metaCategory_ != nullptr;};
      void deleteMetaCategory() { this->metaCategory_ = nullptr;};
      inline const vector<MetaCategory> & getMetaCategory() const { DARABONBA_PTR_GET_CONST(metaCategory_, vector<MetaCategory>) };
      inline vector<MetaCategory> getMetaCategory() { DARABONBA_PTR_GET(metaCategory_, vector<MetaCategory>) };
      inline CategoryList& setMetaCategory(const vector<MetaCategory> & metaCategory) { DARABONBA_PTR_SET_VALUE(metaCategory_, metaCategory) };
      inline CategoryList& setMetaCategory(vector<MetaCategory> && metaCategory) { DARABONBA_PTR_SET_RVALUE(metaCategory_, metaCategory) };


    protected:
      shared_ptr<vector<MetaCategory>> metaCategory_ {};
    };

    virtual bool empty() const override { return this->categoryList_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // categoryList Field Functions 
    bool hasCategoryList() const { return this->categoryList_ != nullptr;};
    void deleteCategoryList() { this->categoryList_ = nullptr;};
    inline const ListMetaCategoryResponseBody::CategoryList & getCategoryList() const { DARABONBA_PTR_GET_CONST(categoryList_, ListMetaCategoryResponseBody::CategoryList) };
    inline ListMetaCategoryResponseBody::CategoryList getCategoryList() { DARABONBA_PTR_GET(categoryList_, ListMetaCategoryResponseBody::CategoryList) };
    inline ListMetaCategoryResponseBody& setCategoryList(const ListMetaCategoryResponseBody::CategoryList & categoryList) { DARABONBA_PTR_SET_VALUE(categoryList_, categoryList) };
    inline ListMetaCategoryResponseBody& setCategoryList(ListMetaCategoryResponseBody::CategoryList && categoryList) { DARABONBA_PTR_SET_RVALUE(categoryList_, categoryList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListMetaCategoryResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListMetaCategoryResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMetaCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMetaCategoryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListMetaCategoryResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of categories.
    shared_ptr<ListMetaCategoryResponseBody::CategoryList> categoryList_ {};
    // The error code returned if the request fails.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request fails.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
