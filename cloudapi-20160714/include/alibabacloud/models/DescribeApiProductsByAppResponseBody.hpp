// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIPRODUCTSBYAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIPRODUCTSBYAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiProductsByAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiProductsByAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiProductInfoList, apiProductInfoList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiProductsByAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiProductInfoList, apiProductInfoList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApiProductsByAppResponseBody() = default ;
    DescribeApiProductsByAppResponseBody(const DescribeApiProductsByAppResponseBody &) = default ;
    DescribeApiProductsByAppResponseBody(DescribeApiProductsByAppResponseBody &&) = default ;
    DescribeApiProductsByAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiProductsByAppResponseBody() = default ;
    DescribeApiProductsByAppResponseBody& operator=(const DescribeApiProductsByAppResponseBody &) = default ;
    DescribeApiProductsByAppResponseBody& operator=(DescribeApiProductsByAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiProductInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiProductInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(ApiProductInfo, apiProductInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ApiProductInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiProductInfo, apiProductInfo_);
      };
      ApiProductInfoList() = default ;
      ApiProductInfoList(const ApiProductInfoList &) = default ;
      ApiProductInfoList(ApiProductInfoList &&) = default ;
      ApiProductInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiProductInfoList() = default ;
      ApiProductInfoList& operator=(const ApiProductInfoList &) = default ;
      ApiProductInfoList& operator=(ApiProductInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiProductInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiProductInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ApiProductId, apiProductId_);
        };
        friend void from_json(const Darabonba::Json& j, ApiProductInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiProductId, apiProductId_);
        };
        ApiProductInfo() = default ;
        ApiProductInfo(const ApiProductInfo &) = default ;
        ApiProductInfo(ApiProductInfo &&) = default ;
        ApiProductInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiProductInfo() = default ;
        ApiProductInfo& operator=(const ApiProductInfo &) = default ;
        ApiProductInfo& operator=(ApiProductInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiProductId_ == nullptr; };
        // apiProductId Field Functions 
        bool hasApiProductId() const { return this->apiProductId_ != nullptr;};
        void deleteApiProductId() { this->apiProductId_ = nullptr;};
        inline string getApiProductId() const { DARABONBA_PTR_GET_DEFAULT(apiProductId_, "") };
        inline ApiProductInfo& setApiProductId(string apiProductId) { DARABONBA_PTR_SET_VALUE(apiProductId_, apiProductId) };


      protected:
        // The ID of the API product.
        shared_ptr<string> apiProductId_ {};
      };

      virtual bool empty() const override { return this->apiProductInfo_ == nullptr; };
      // apiProductInfo Field Functions 
      bool hasApiProductInfo() const { return this->apiProductInfo_ != nullptr;};
      void deleteApiProductInfo() { this->apiProductInfo_ = nullptr;};
      inline const vector<ApiProductInfoList::ApiProductInfo> & getApiProductInfo() const { DARABONBA_PTR_GET_CONST(apiProductInfo_, vector<ApiProductInfoList::ApiProductInfo>) };
      inline vector<ApiProductInfoList::ApiProductInfo> getApiProductInfo() { DARABONBA_PTR_GET(apiProductInfo_, vector<ApiProductInfoList::ApiProductInfo>) };
      inline ApiProductInfoList& setApiProductInfo(const vector<ApiProductInfoList::ApiProductInfo> & apiProductInfo) { DARABONBA_PTR_SET_VALUE(apiProductInfo_, apiProductInfo) };
      inline ApiProductInfoList& setApiProductInfo(vector<ApiProductInfoList::ApiProductInfo> && apiProductInfo) { DARABONBA_PTR_SET_RVALUE(apiProductInfo_, apiProductInfo) };


    protected:
      shared_ptr<vector<ApiProductInfoList::ApiProductInfo>> apiProductInfo_ {};
    };

    virtual bool empty() const override { return this->apiProductInfoList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // apiProductInfoList Field Functions 
    bool hasApiProductInfoList() const { return this->apiProductInfoList_ != nullptr;};
    void deleteApiProductInfoList() { this->apiProductInfoList_ = nullptr;};
    inline const DescribeApiProductsByAppResponseBody::ApiProductInfoList & getApiProductInfoList() const { DARABONBA_PTR_GET_CONST(apiProductInfoList_, DescribeApiProductsByAppResponseBody::ApiProductInfoList) };
    inline DescribeApiProductsByAppResponseBody::ApiProductInfoList getApiProductInfoList() { DARABONBA_PTR_GET(apiProductInfoList_, DescribeApiProductsByAppResponseBody::ApiProductInfoList) };
    inline DescribeApiProductsByAppResponseBody& setApiProductInfoList(const DescribeApiProductsByAppResponseBody::ApiProductInfoList & apiProductInfoList) { DARABONBA_PTR_SET_VALUE(apiProductInfoList_, apiProductInfoList) };
    inline DescribeApiProductsByAppResponseBody& setApiProductInfoList(DescribeApiProductsByAppResponseBody::ApiProductInfoList && apiProductInfoList) { DARABONBA_PTR_SET_RVALUE(apiProductInfoList_, apiProductInfoList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApiProductsByAppResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApiProductsByAppResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiProductsByAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApiProductsByAppResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about API products.
    shared_ptr<DescribeApiProductsByAppResponseBody::ApiProductInfoList> apiProductInfoList_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
