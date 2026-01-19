// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIIPCONTROLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIIPCONTROLSRESPONSEBODY_HPP_
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
  class DescribeApiIpControlsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiIpControlsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiIpControls, apiIpControls_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiIpControlsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiIpControls, apiIpControls_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApiIpControlsResponseBody() = default ;
    DescribeApiIpControlsResponseBody(const DescribeApiIpControlsResponseBody &) = default ;
    DescribeApiIpControlsResponseBody(DescribeApiIpControlsResponseBody &&) = default ;
    DescribeApiIpControlsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiIpControlsResponseBody() = default ;
    DescribeApiIpControlsResponseBody& operator=(const DescribeApiIpControlsResponseBody &) = default ;
    DescribeApiIpControlsResponseBody& operator=(DescribeApiIpControlsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiIpControls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiIpControls& obj) { 
        DARABONBA_PTR_TO_JSON(ApiIpControlItem, apiIpControlItem_);
      };
      friend void from_json(const Darabonba::Json& j, ApiIpControls& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiIpControlItem, apiIpControlItem_);
      };
      ApiIpControls() = default ;
      ApiIpControls(const ApiIpControls &) = default ;
      ApiIpControls(ApiIpControls &&) = default ;
      ApiIpControls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiIpControls() = default ;
      ApiIpControls& operator=(const ApiIpControls &) = default ;
      ApiIpControls& operator=(ApiIpControls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiIpControlItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiIpControlItem& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(BoundTime, boundTime_);
          DARABONBA_PTR_TO_JSON(IpControlId, ipControlId_);
          DARABONBA_PTR_TO_JSON(IpControlName, ipControlName_);
        };
        friend void from_json(const Darabonba::Json& j, ApiIpControlItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(BoundTime, boundTime_);
          DARABONBA_PTR_FROM_JSON(IpControlId, ipControlId_);
          DARABONBA_PTR_FROM_JSON(IpControlName, ipControlName_);
        };
        ApiIpControlItem() = default ;
        ApiIpControlItem(const ApiIpControlItem &) = default ;
        ApiIpControlItem(ApiIpControlItem &&) = default ;
        ApiIpControlItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiIpControlItem() = default ;
        ApiIpControlItem& operator=(const ApiIpControlItem &) = default ;
        ApiIpControlItem& operator=(ApiIpControlItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->boundTime_ == nullptr && this->ipControlId_ == nullptr && this->ipControlName_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline ApiIpControlItem& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline ApiIpControlItem& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // boundTime Field Functions 
        bool hasBoundTime() const { return this->boundTime_ != nullptr;};
        void deleteBoundTime() { this->boundTime_ = nullptr;};
        inline string getBoundTime() const { DARABONBA_PTR_GET_DEFAULT(boundTime_, "") };
        inline ApiIpControlItem& setBoundTime(string boundTime) { DARABONBA_PTR_SET_VALUE(boundTime_, boundTime) };


        // ipControlId Field Functions 
        bool hasIpControlId() const { return this->ipControlId_ != nullptr;};
        void deleteIpControlId() { this->ipControlId_ = nullptr;};
        inline string getIpControlId() const { DARABONBA_PTR_GET_DEFAULT(ipControlId_, "") };
        inline ApiIpControlItem& setIpControlId(string ipControlId) { DARABONBA_PTR_SET_VALUE(ipControlId_, ipControlId) };


        // ipControlName Field Functions 
        bool hasIpControlName() const { return this->ipControlName_ != nullptr;};
        void deleteIpControlName() { this->ipControlName_ = nullptr;};
        inline string getIpControlName() const { DARABONBA_PTR_GET_DEFAULT(ipControlName_, "") };
        inline ApiIpControlItem& setIpControlName(string ipControlName) { DARABONBA_PTR_SET_VALUE(ipControlName_, ipControlName) };


      protected:
        // The ID of the API.
        shared_ptr<string> apiId_ {};
        // The name of the API.
        shared_ptr<string> apiName_ {};
        // The time of binding.
        shared_ptr<string> boundTime_ {};
        // The ID of the ACL.
        shared_ptr<string> ipControlId_ {};
        // The name of the ACL.
        shared_ptr<string> ipControlName_ {};
      };

      virtual bool empty() const override { return this->apiIpControlItem_ == nullptr; };
      // apiIpControlItem Field Functions 
      bool hasApiIpControlItem() const { return this->apiIpControlItem_ != nullptr;};
      void deleteApiIpControlItem() { this->apiIpControlItem_ = nullptr;};
      inline const vector<ApiIpControls::ApiIpControlItem> & getApiIpControlItem() const { DARABONBA_PTR_GET_CONST(apiIpControlItem_, vector<ApiIpControls::ApiIpControlItem>) };
      inline vector<ApiIpControls::ApiIpControlItem> getApiIpControlItem() { DARABONBA_PTR_GET(apiIpControlItem_, vector<ApiIpControls::ApiIpControlItem>) };
      inline ApiIpControls& setApiIpControlItem(const vector<ApiIpControls::ApiIpControlItem> & apiIpControlItem) { DARABONBA_PTR_SET_VALUE(apiIpControlItem_, apiIpControlItem) };
      inline ApiIpControls& setApiIpControlItem(vector<ApiIpControls::ApiIpControlItem> && apiIpControlItem) { DARABONBA_PTR_SET_RVALUE(apiIpControlItem_, apiIpControlItem) };


    protected:
      shared_ptr<vector<ApiIpControls::ApiIpControlItem>> apiIpControlItem_ {};
    };

    virtual bool empty() const override { return this->apiIpControls_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // apiIpControls Field Functions 
    bool hasApiIpControls() const { return this->apiIpControls_ != nullptr;};
    void deleteApiIpControls() { this->apiIpControls_ = nullptr;};
    inline const DescribeApiIpControlsResponseBody::ApiIpControls & getApiIpControls() const { DARABONBA_PTR_GET_CONST(apiIpControls_, DescribeApiIpControlsResponseBody::ApiIpControls) };
    inline DescribeApiIpControlsResponseBody::ApiIpControls getApiIpControls() { DARABONBA_PTR_GET(apiIpControls_, DescribeApiIpControlsResponseBody::ApiIpControls) };
    inline DescribeApiIpControlsResponseBody& setApiIpControls(const DescribeApiIpControlsResponseBody::ApiIpControls & apiIpControls) { DARABONBA_PTR_SET_VALUE(apiIpControls_, apiIpControls) };
    inline DescribeApiIpControlsResponseBody& setApiIpControls(DescribeApiIpControlsResponseBody::ApiIpControls && apiIpControls) { DARABONBA_PTR_SET_RVALUE(apiIpControls_, apiIpControls) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApiIpControlsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApiIpControlsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiIpControlsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApiIpControlsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the ACLs. The information is an array of ApiIpControlItem data.
    shared_ptr<DescribeApiIpControlsResponseBody::ApiIpControls> apiIpControls_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
