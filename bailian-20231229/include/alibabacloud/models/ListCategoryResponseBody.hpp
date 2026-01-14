// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCATEGORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CategoryList, categoryList_);
        DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CategoryList, categoryList_);
        DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CategoryList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CategoryList& obj) { 
          DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(ParentCategoryId, parentCategoryId_);
        };
        friend void from_json(const Darabonba::Json& j, CategoryList& obj) { 
          DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(ParentCategoryId, parentCategoryId_);
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
        virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->categoryName_ == nullptr && this->categoryType_ == nullptr && this->isDefault_ == nullptr && this->parentCategoryId_ == nullptr; };
        // categoryId Field Functions 
        bool hasCategoryId() const { return this->categoryId_ != nullptr;};
        void deleteCategoryId() { this->categoryId_ = nullptr;};
        inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
        inline CategoryList& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


        // categoryName Field Functions 
        bool hasCategoryName() const { return this->categoryName_ != nullptr;};
        void deleteCategoryName() { this->categoryName_ = nullptr;};
        inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
        inline CategoryList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


        // categoryType Field Functions 
        bool hasCategoryType() const { return this->categoryType_ != nullptr;};
        void deleteCategoryType() { this->categoryType_ = nullptr;};
        inline string getCategoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, "") };
        inline CategoryList& setCategoryType(string categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline CategoryList& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // parentCategoryId Field Functions 
        bool hasParentCategoryId() const { return this->parentCategoryId_ != nullptr;};
        void deleteParentCategoryId() { this->parentCategoryId_ = nullptr;};
        inline string getParentCategoryId() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryId_, "") };
        inline CategoryList& setParentCategoryId(string parentCategoryId) { DARABONBA_PTR_SET_VALUE(parentCategoryId_, parentCategoryId) };


      protected:
        shared_ptr<string> categoryId_ {};
        shared_ptr<string> categoryName_ {};
        shared_ptr<string> categoryType_ {};
        shared_ptr<bool> isDefault_ {};
        shared_ptr<string> parentCategoryId_ {};
      };

      virtual bool empty() const override { return this->categoryList_ == nullptr
        && this->hasNext_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
      // categoryList Field Functions 
      bool hasCategoryList() const { return this->categoryList_ != nullptr;};
      void deleteCategoryList() { this->categoryList_ = nullptr;};
      inline const vector<Data::CategoryList> & getCategoryList() const { DARABONBA_PTR_GET_CONST(categoryList_, vector<Data::CategoryList>) };
      inline vector<Data::CategoryList> getCategoryList() { DARABONBA_PTR_GET(categoryList_, vector<Data::CategoryList>) };
      inline Data& setCategoryList(const vector<Data::CategoryList> & categoryList) { DARABONBA_PTR_SET_VALUE(categoryList_, categoryList) };
      inline Data& setCategoryList(vector<Data::CategoryList> && categoryList) { DARABONBA_PTR_SET_RVALUE(categoryList_, categoryList) };


      // hasNext Field Functions 
      bool hasHasNext() const { return this->hasNext_ != nullptr;};
      void deleteHasNext() { this->hasNext_ = nullptr;};
      inline bool getHasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
      inline Data& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::CategoryList>> categoryList_ {};
      shared_ptr<bool> hasNext_ {};
      shared_ptr<int32_t> maxResults_ {};
      shared_ptr<string> nextToken_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCategoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCategoryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCategoryResponseBody::Data) };
    inline ListCategoryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCategoryResponseBody::Data) };
    inline ListCategoryResponseBody& setData(const ListCategoryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCategoryResponseBody& setData(ListCategoryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCategoryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCategoryResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCategoryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListCategoryResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
