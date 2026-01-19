// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISBYIPCONTROLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISBYIPCONTROLRESPONSEBODY_HPP_
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
  class DescribeApisByIpControlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisByIpControlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiInfos, apiInfos_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisByIpControlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiInfos, apiInfos_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApisByIpControlResponseBody() = default ;
    DescribeApisByIpControlResponseBody(const DescribeApisByIpControlResponseBody &) = default ;
    DescribeApisByIpControlResponseBody(DescribeApisByIpControlResponseBody &&) = default ;
    DescribeApisByIpControlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisByIpControlResponseBody() = default ;
    DescribeApisByIpControlResponseBody& operator=(const DescribeApisByIpControlResponseBody &) = default ;
    DescribeApisByIpControlResponseBody& operator=(DescribeApisByIpControlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiInfos& obj) { 
        DARABONBA_PTR_TO_JSON(ApiInfo, apiInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ApiInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiInfo, apiInfo_);
      };
      ApiInfos() = default ;
      ApiInfos(const ApiInfos &) = default ;
      ApiInfos(ApiInfos &&) = default ;
      ApiInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiInfos() = default ;
      ApiInfos& operator=(const ApiInfos &) = default ;
      ApiInfos& operator=(ApiInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(BoundTime, boundTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(StageName, stageName_);
          DARABONBA_PTR_TO_JSON(Visibility, visibility_);
        };
        friend void from_json(const Darabonba::Json& j, ApiInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(BoundTime, boundTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(StageName, stageName_);
          DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
        };
        ApiInfo() = default ;
        ApiInfo(const ApiInfo &) = default ;
        ApiInfo(ApiInfo &&) = default ;
        ApiInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiInfo() = default ;
        ApiInfo& operator=(const ApiInfo &) = default ;
        ApiInfo& operator=(ApiInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->boundTime_ == nullptr && this->description_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr
        && this->regionId_ == nullptr && this->stageName_ == nullptr && this->visibility_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline ApiInfo& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline ApiInfo& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // boundTime Field Functions 
        bool hasBoundTime() const { return this->boundTime_ != nullptr;};
        void deleteBoundTime() { this->boundTime_ = nullptr;};
        inline string getBoundTime() const { DARABONBA_PTR_GET_DEFAULT(boundTime_, "") };
        inline ApiInfo& setBoundTime(string boundTime) { DARABONBA_PTR_SET_VALUE(boundTime_, boundTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ApiInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ApiInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline ApiInfo& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ApiInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // stageName Field Functions 
        bool hasStageName() const { return this->stageName_ != nullptr;};
        void deleteStageName() { this->stageName_ = nullptr;};
        inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
        inline ApiInfo& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


        // visibility Field Functions 
        bool hasVisibility() const { return this->visibility_ != nullptr;};
        void deleteVisibility() { this->visibility_ = nullptr;};
        inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
        inline ApiInfo& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


      protected:
        // The ID of the API.
        shared_ptr<string> apiId_ {};
        // The name of the API
        shared_ptr<string> apiName_ {};
        // The time of API binding.
        shared_ptr<string> boundTime_ {};
        // The description of the API.
        shared_ptr<string> description_ {};
        // The ID of the API group.
        shared_ptr<string> groupId_ {};
        // The name of the API group.
        shared_ptr<string> groupName_ {};
        // The region in which the API is located.
        shared_ptr<string> regionId_ {};
        // The name of the runtime environment. Valid values:
        // 
        // *   **RELEASE**
        // *   **TEST.
        shared_ptr<string> stageName_ {};
        // The visibility of the API. Valid values:
        // 
        // *   **PUBLIC**
        // *   **PRIVATE**
        shared_ptr<string> visibility_ {};
      };

      virtual bool empty() const override { return this->apiInfo_ == nullptr; };
      // apiInfo Field Functions 
      bool hasApiInfo() const { return this->apiInfo_ != nullptr;};
      void deleteApiInfo() { this->apiInfo_ = nullptr;};
      inline const vector<ApiInfos::ApiInfo> & getApiInfo() const { DARABONBA_PTR_GET_CONST(apiInfo_, vector<ApiInfos::ApiInfo>) };
      inline vector<ApiInfos::ApiInfo> getApiInfo() { DARABONBA_PTR_GET(apiInfo_, vector<ApiInfos::ApiInfo>) };
      inline ApiInfos& setApiInfo(const vector<ApiInfos::ApiInfo> & apiInfo) { DARABONBA_PTR_SET_VALUE(apiInfo_, apiInfo) };
      inline ApiInfos& setApiInfo(vector<ApiInfos::ApiInfo> && apiInfo) { DARABONBA_PTR_SET_RVALUE(apiInfo_, apiInfo) };


    protected:
      shared_ptr<vector<ApiInfos::ApiInfo>> apiInfo_ {};
    };

    virtual bool empty() const override { return this->apiInfos_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // apiInfos Field Functions 
    bool hasApiInfos() const { return this->apiInfos_ != nullptr;};
    void deleteApiInfos() { this->apiInfos_ = nullptr;};
    inline const DescribeApisByIpControlResponseBody::ApiInfos & getApiInfos() const { DARABONBA_PTR_GET_CONST(apiInfos_, DescribeApisByIpControlResponseBody::ApiInfos) };
    inline DescribeApisByIpControlResponseBody::ApiInfos getApiInfos() { DARABONBA_PTR_GET(apiInfos_, DescribeApisByIpControlResponseBody::ApiInfos) };
    inline DescribeApisByIpControlResponseBody& setApiInfos(const DescribeApisByIpControlResponseBody::ApiInfos & apiInfos) { DARABONBA_PTR_SET_VALUE(apiInfos_, apiInfos) };
    inline DescribeApisByIpControlResponseBody& setApiInfos(DescribeApisByIpControlResponseBody::ApiInfos && apiInfos) { DARABONBA_PTR_SET_RVALUE(apiInfos_, apiInfos) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApisByIpControlResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApisByIpControlResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisByIpControlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApisByIpControlResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned API information. It is an array of ApiInfo data.
    shared_ptr<DescribeApisByIpControlResponseBody::ApiInfos> apiInfos_ {};
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
