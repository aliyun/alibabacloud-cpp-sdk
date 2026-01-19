// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBASICSEARCHPAGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBASICSEARCHPAGELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeBasicSearchPageListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBasicSearchPageListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBasicSearchPageListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeBasicSearchPageListResponseBody() = default ;
    DescribeBasicSearchPageListResponseBody(const DescribeBasicSearchPageListResponseBody &) = default ;
    DescribeBasicSearchPageListResponseBody(DescribeBasicSearchPageListResponseBody &&) = default ;
    DescribeBasicSearchPageListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBasicSearchPageListResponseBody() = default ;
    DescribeBasicSearchPageListResponseBody& operator=(const DescribeBasicSearchPageListResponseBody &) = default ;
    DescribeBasicSearchPageListResponseBody& operator=(DescribeBasicSearchPageListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(data, data_);
        DARABONBA_PTR_TO_JSON(header, header_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalItem, totalItem_);
        DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(data, data_);
        DARABONBA_PTR_FROM_JSON(header, header_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalItem, totalItem_);
        DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Header : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Header& obj) { 
          DARABONBA_PTR_TO_JSON(fieldName, fieldName_);
          DARABONBA_PTR_TO_JSON(fieldTitle, fieldTitle_);
          DARABONBA_PTR_TO_JSON(isDefault, isDefault_);
        };
        friend void from_json(const Darabonba::Json& j, Header& obj) { 
          DARABONBA_PTR_FROM_JSON(fieldName, fieldName_);
          DARABONBA_PTR_FROM_JSON(fieldTitle, fieldTitle_);
          DARABONBA_PTR_FROM_JSON(isDefault, isDefault_);
        };
        Header() = default ;
        Header(const Header &) = default ;
        Header(Header &&) = default ;
        Header(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Header() = default ;
        Header& operator=(const Header &) = default ;
        Header& operator=(Header &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fieldName_ == nullptr
        && this->fieldTitle_ == nullptr && this->isDefault_ == nullptr; };
        // fieldName Field Functions 
        bool hasFieldName() const { return this->fieldName_ != nullptr;};
        void deleteFieldName() { this->fieldName_ = nullptr;};
        inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
        inline Header& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


        // fieldTitle Field Functions 
        bool hasFieldTitle() const { return this->fieldTitle_ != nullptr;};
        void deleteFieldTitle() { this->fieldTitle_ = nullptr;};
        inline string getFieldTitle() const { DARABONBA_PTR_GET_DEFAULT(fieldTitle_, "") };
        inline Header& setFieldTitle(string fieldTitle) { DARABONBA_PTR_SET_VALUE(fieldTitle_, fieldTitle) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline Header& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      protected:
        // Field name
        shared_ptr<string> fieldName_ {};
        // Field title.
        shared_ptr<string> fieldTitle_ {};
        // Whether it is a default display field (displayed in the response, not used as a parameter)
        // - true: Yes
        // - false: No
        shared_ptr<bool> isDefault_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->data_ == nullptr && this->header_ == nullptr && this->pageSize_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
      inline ResultObject& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Darabonba::Json> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getData() { DARABONBA_PTR_GET(data_, vector<Darabonba::Json>) };
      inline ResultObject& setData(const vector<Darabonba::Json> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline ResultObject& setData(vector<Darabonba::Json> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // header Field Functions 
      bool hasHeader() const { return this->header_ != nullptr;};
      void deleteHeader() { this->header_ = nullptr;};
      inline const vector<ResultObject::Header> & getHeader() const { DARABONBA_PTR_GET_CONST(header_, vector<ResultObject::Header>) };
      inline vector<ResultObject::Header> getHeader() { DARABONBA_PTR_GET(header_, vector<ResultObject::Header>) };
      inline ResultObject& setHeader(const vector<ResultObject::Header> & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
      inline ResultObject& setHeader(vector<ResultObject::Header> && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline ResultObject& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalItem Field Functions 
      bool hasTotalItem() const { return this->totalItem_ != nullptr;};
      void deleteTotalItem() { this->totalItem_ = nullptr;};
      inline int64_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0L) };
      inline ResultObject& setTotalItem(int64_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


      // totalPage Field Functions 
      bool hasTotalPage() const { return this->totalPage_ != nullptr;};
      void deleteTotalPage() { this->totalPage_ = nullptr;};
      inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
      inline ResultObject& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    protected:
      // Current page number in pagination queries.
      shared_ptr<int64_t> currentPage_ {};
      // Returned data object
      shared_ptr<vector<Darabonba::Json>> data_ {};
      // Table header
      shared_ptr<vector<ResultObject::Header>> header_ {};
      // Page size, with a default value of 10
      shared_ptr<int64_t> pageSize_ {};
      // Total number of items
      shared_ptr<int64_t> totalItem_ {};
      // Total number of pages
      shared_ptr<int64_t> totalPage_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBasicSearchPageListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeBasicSearchPageListResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeBasicSearchPageListResponseBody::ResultObject) };
    inline DescribeBasicSearchPageListResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeBasicSearchPageListResponseBody::ResultObject) };
    inline DescribeBasicSearchPageListResponseBody& setResultObject(const DescribeBasicSearchPageListResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeBasicSearchPageListResponseBody& setResultObject(DescribeBasicSearchPageListResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<DescribeBasicSearchPageListResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
