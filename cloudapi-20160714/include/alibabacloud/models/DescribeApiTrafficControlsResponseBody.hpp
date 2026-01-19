// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPITRAFFICCONTROLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPITRAFFICCONTROLSRESPONSEBODY_HPP_
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
  class DescribeApiTrafficControlsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiTrafficControlsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiTrafficControls, apiTrafficControls_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiTrafficControlsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiTrafficControls, apiTrafficControls_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApiTrafficControlsResponseBody() = default ;
    DescribeApiTrafficControlsResponseBody(const DescribeApiTrafficControlsResponseBody &) = default ;
    DescribeApiTrafficControlsResponseBody(DescribeApiTrafficControlsResponseBody &&) = default ;
    DescribeApiTrafficControlsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiTrafficControlsResponseBody() = default ;
    DescribeApiTrafficControlsResponseBody& operator=(const DescribeApiTrafficControlsResponseBody &) = default ;
    DescribeApiTrafficControlsResponseBody& operator=(DescribeApiTrafficControlsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiTrafficControls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiTrafficControls& obj) { 
        DARABONBA_PTR_TO_JSON(ApiTrafficControlItem, apiTrafficControlItem_);
      };
      friend void from_json(const Darabonba::Json& j, ApiTrafficControls& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiTrafficControlItem, apiTrafficControlItem_);
      };
      ApiTrafficControls() = default ;
      ApiTrafficControls(const ApiTrafficControls &) = default ;
      ApiTrafficControls(ApiTrafficControls &&) = default ;
      ApiTrafficControls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiTrafficControls() = default ;
      ApiTrafficControls& operator=(const ApiTrafficControls &) = default ;
      ApiTrafficControls& operator=(ApiTrafficControls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiTrafficControlItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiTrafficControlItem& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(BoundTime, boundTime_);
          DARABONBA_PTR_TO_JSON(TrafficControlId, trafficControlId_);
          DARABONBA_PTR_TO_JSON(TrafficControlName, trafficControlName_);
        };
        friend void from_json(const Darabonba::Json& j, ApiTrafficControlItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(BoundTime, boundTime_);
          DARABONBA_PTR_FROM_JSON(TrafficControlId, trafficControlId_);
          DARABONBA_PTR_FROM_JSON(TrafficControlName, trafficControlName_);
        };
        ApiTrafficControlItem() = default ;
        ApiTrafficControlItem(const ApiTrafficControlItem &) = default ;
        ApiTrafficControlItem(ApiTrafficControlItem &&) = default ;
        ApiTrafficControlItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiTrafficControlItem() = default ;
        ApiTrafficControlItem& operator=(const ApiTrafficControlItem &) = default ;
        ApiTrafficControlItem& operator=(ApiTrafficControlItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->boundTime_ == nullptr && this->trafficControlId_ == nullptr && this->trafficControlName_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline ApiTrafficControlItem& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline ApiTrafficControlItem& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // boundTime Field Functions 
        bool hasBoundTime() const { return this->boundTime_ != nullptr;};
        void deleteBoundTime() { this->boundTime_ = nullptr;};
        inline string getBoundTime() const { DARABONBA_PTR_GET_DEFAULT(boundTime_, "") };
        inline ApiTrafficControlItem& setBoundTime(string boundTime) { DARABONBA_PTR_SET_VALUE(boundTime_, boundTime) };


        // trafficControlId Field Functions 
        bool hasTrafficControlId() const { return this->trafficControlId_ != nullptr;};
        void deleteTrafficControlId() { this->trafficControlId_ = nullptr;};
        inline string getTrafficControlId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlId_, "") };
        inline ApiTrafficControlItem& setTrafficControlId(string trafficControlId) { DARABONBA_PTR_SET_VALUE(trafficControlId_, trafficControlId) };


        // trafficControlName Field Functions 
        bool hasTrafficControlName() const { return this->trafficControlName_ != nullptr;};
        void deleteTrafficControlName() { this->trafficControlName_ = nullptr;};
        inline string getTrafficControlName() const { DARABONBA_PTR_GET_DEFAULT(trafficControlName_, "") };
        inline ApiTrafficControlItem& setTrafficControlName(string trafficControlName) { DARABONBA_PTR_SET_VALUE(trafficControlName_, trafficControlName) };


      protected:
        // The ID of the API.
        shared_ptr<string> apiId_ {};
        // API operation
        shared_ptr<string> apiName_ {};
        // The binding time of the throttling policy.
        shared_ptr<string> boundTime_ {};
        // The ID of the throttling policy.
        shared_ptr<string> trafficControlId_ {};
        // The name of the throttling policy.
        shared_ptr<string> trafficControlName_ {};
      };

      virtual bool empty() const override { return this->apiTrafficControlItem_ == nullptr; };
      // apiTrafficControlItem Field Functions 
      bool hasApiTrafficControlItem() const { return this->apiTrafficControlItem_ != nullptr;};
      void deleteApiTrafficControlItem() { this->apiTrafficControlItem_ = nullptr;};
      inline const vector<ApiTrafficControls::ApiTrafficControlItem> & getApiTrafficControlItem() const { DARABONBA_PTR_GET_CONST(apiTrafficControlItem_, vector<ApiTrafficControls::ApiTrafficControlItem>) };
      inline vector<ApiTrafficControls::ApiTrafficControlItem> getApiTrafficControlItem() { DARABONBA_PTR_GET(apiTrafficControlItem_, vector<ApiTrafficControls::ApiTrafficControlItem>) };
      inline ApiTrafficControls& setApiTrafficControlItem(const vector<ApiTrafficControls::ApiTrafficControlItem> & apiTrafficControlItem) { DARABONBA_PTR_SET_VALUE(apiTrafficControlItem_, apiTrafficControlItem) };
      inline ApiTrafficControls& setApiTrafficControlItem(vector<ApiTrafficControls::ApiTrafficControlItem> && apiTrafficControlItem) { DARABONBA_PTR_SET_RVALUE(apiTrafficControlItem_, apiTrafficControlItem) };


    protected:
      shared_ptr<vector<ApiTrafficControls::ApiTrafficControlItem>> apiTrafficControlItem_ {};
    };

    virtual bool empty() const override { return this->apiTrafficControls_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // apiTrafficControls Field Functions 
    bool hasApiTrafficControls() const { return this->apiTrafficControls_ != nullptr;};
    void deleteApiTrafficControls() { this->apiTrafficControls_ = nullptr;};
    inline const DescribeApiTrafficControlsResponseBody::ApiTrafficControls & getApiTrafficControls() const { DARABONBA_PTR_GET_CONST(apiTrafficControls_, DescribeApiTrafficControlsResponseBody::ApiTrafficControls) };
    inline DescribeApiTrafficControlsResponseBody::ApiTrafficControls getApiTrafficControls() { DARABONBA_PTR_GET(apiTrafficControls_, DescribeApiTrafficControlsResponseBody::ApiTrafficControls) };
    inline DescribeApiTrafficControlsResponseBody& setApiTrafficControls(const DescribeApiTrafficControlsResponseBody::ApiTrafficControls & apiTrafficControls) { DARABONBA_PTR_SET_VALUE(apiTrafficControls_, apiTrafficControls) };
    inline DescribeApiTrafficControlsResponseBody& setApiTrafficControls(DescribeApiTrafficControlsResponseBody::ApiTrafficControls && apiTrafficControls) { DARABONBA_PTR_SET_RVALUE(apiTrafficControls_, apiTrafficControls) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApiTrafficControlsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApiTrafficControlsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiTrafficControlsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApiTrafficControlsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned throttling policy information. It is an array consisting of ApiTrafficControlItem data.
    shared_ptr<DescribeApiTrafficControlsResponseBody::ApiTrafficControls> apiTrafficControls_ {};
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
