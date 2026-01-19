// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISBYVPCACCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISBYVPCACCESSRESPONSEBODY_HPP_
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
  class DescribeApisByVpcAccessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisByVpcAccessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiVpcAccessInfos, apiVpcAccessInfos_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisByVpcAccessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiVpcAccessInfos, apiVpcAccessInfos_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApisByVpcAccessResponseBody() = default ;
    DescribeApisByVpcAccessResponseBody(const DescribeApisByVpcAccessResponseBody &) = default ;
    DescribeApisByVpcAccessResponseBody(DescribeApisByVpcAccessResponseBody &&) = default ;
    DescribeApisByVpcAccessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisByVpcAccessResponseBody() = default ;
    DescribeApisByVpcAccessResponseBody& operator=(const DescribeApisByVpcAccessResponseBody &) = default ;
    DescribeApisByVpcAccessResponseBody& operator=(DescribeApisByVpcAccessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiVpcAccessInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiVpcAccessInfos& obj) { 
        DARABONBA_PTR_TO_JSON(ApiVpcAccessInfo, apiVpcAccessInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ApiVpcAccessInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiVpcAccessInfo, apiVpcAccessInfo_);
      };
      ApiVpcAccessInfos() = default ;
      ApiVpcAccessInfos(const ApiVpcAccessInfos &) = default ;
      ApiVpcAccessInfos(ApiVpcAccessInfos &&) = default ;
      ApiVpcAccessInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiVpcAccessInfos() = default ;
      ApiVpcAccessInfos& operator=(const ApiVpcAccessInfos &) = default ;
      ApiVpcAccessInfos& operator=(ApiVpcAccessInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiVpcAccessInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiVpcAccessInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Method, method_);
          DARABONBA_PTR_TO_JSON(Path, path_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(StageId, stageId_);
          DARABONBA_PTR_TO_JSON(StageName, stageName_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
        };
        friend void from_json(const Darabonba::Json& j, ApiVpcAccessInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Method, method_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(StageId, stageId_);
          DARABONBA_PTR_FROM_JSON(StageName, stageName_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
        };
        ApiVpcAccessInfo() = default ;
        ApiVpcAccessInfo(const ApiVpcAccessInfo &) = default ;
        ApiVpcAccessInfo(ApiVpcAccessInfo &&) = default ;
        ApiVpcAccessInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiVpcAccessInfo() = default ;
        ApiVpcAccessInfo& operator=(const ApiVpcAccessInfo &) = default ;
        ApiVpcAccessInfo& operator=(ApiVpcAccessInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->description_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->instanceId_ == nullptr
        && this->method_ == nullptr && this->path_ == nullptr && this->port_ == nullptr && this->regionId_ == nullptr && this->stageId_ == nullptr
        && this->stageName_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline ApiVpcAccessInfo& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline ApiVpcAccessInfo& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ApiVpcAccessInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ApiVpcAccessInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline ApiVpcAccessInfo& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline ApiVpcAccessInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline ApiVpcAccessInfo& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline ApiVpcAccessInfo& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline ApiVpcAccessInfo& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ApiVpcAccessInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // stageId Field Functions 
        bool hasStageId() const { return this->stageId_ != nullptr;};
        void deleteStageId() { this->stageId_ = nullptr;};
        inline string getStageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
        inline ApiVpcAccessInfo& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


        // stageName Field Functions 
        bool hasStageName() const { return this->stageName_ != nullptr;};
        void deleteStageName() { this->stageName_ = nullptr;};
        inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
        inline ApiVpcAccessInfo& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline ApiVpcAccessInfo& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcName Field Functions 
        bool hasVpcName() const { return this->vpcName_ != nullptr;};
        void deleteVpcName() { this->vpcName_ = nullptr;};
        inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
        inline ApiVpcAccessInfo& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


      protected:
        // The API ID.
        shared_ptr<string> apiId_ {};
        // The API name.
        shared_ptr<string> apiName_ {};
        // The description, which can be up to 200 characters in length.
        shared_ptr<string> description_ {};
        // The ID of the API group to which the API belongs.
        shared_ptr<string> groupId_ {};
        // The name of the API group to which the API belongs.
        shared_ptr<string> groupName_ {};
        // The instance ID or IP address in the VPC access authorization.
        shared_ptr<string> instanceId_ {};
        // The HTTP request method of the API.
        shared_ptr<string> method_ {};
        // The request path of the API.
        shared_ptr<string> path_ {};
        // The port number.
        shared_ptr<int32_t> port_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The environment ID.
        shared_ptr<string> stageId_ {};
        // The environment to which the API is published. Valid values:
        // 
        // *   **RELEASE**: the production environment
        // *   **PRE**: the staging environment
        // *   **TEST**: the test environment
        shared_ptr<string> stageName_ {};
        // vpc id
        shared_ptr<string> vpcId_ {};
        // The name of the VPC access authorization.
        shared_ptr<string> vpcName_ {};
      };

      virtual bool empty() const override { return this->apiVpcAccessInfo_ == nullptr; };
      // apiVpcAccessInfo Field Functions 
      bool hasApiVpcAccessInfo() const { return this->apiVpcAccessInfo_ != nullptr;};
      void deleteApiVpcAccessInfo() { this->apiVpcAccessInfo_ = nullptr;};
      inline const vector<ApiVpcAccessInfos::ApiVpcAccessInfo> & getApiVpcAccessInfo() const { DARABONBA_PTR_GET_CONST(apiVpcAccessInfo_, vector<ApiVpcAccessInfos::ApiVpcAccessInfo>) };
      inline vector<ApiVpcAccessInfos::ApiVpcAccessInfo> getApiVpcAccessInfo() { DARABONBA_PTR_GET(apiVpcAccessInfo_, vector<ApiVpcAccessInfos::ApiVpcAccessInfo>) };
      inline ApiVpcAccessInfos& setApiVpcAccessInfo(const vector<ApiVpcAccessInfos::ApiVpcAccessInfo> & apiVpcAccessInfo) { DARABONBA_PTR_SET_VALUE(apiVpcAccessInfo_, apiVpcAccessInfo) };
      inline ApiVpcAccessInfos& setApiVpcAccessInfo(vector<ApiVpcAccessInfos::ApiVpcAccessInfo> && apiVpcAccessInfo) { DARABONBA_PTR_SET_RVALUE(apiVpcAccessInfo_, apiVpcAccessInfo) };


    protected:
      shared_ptr<vector<ApiVpcAccessInfos::ApiVpcAccessInfo>> apiVpcAccessInfo_ {};
    };

    virtual bool empty() const override { return this->apiVpcAccessInfos_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // apiVpcAccessInfos Field Functions 
    bool hasApiVpcAccessInfos() const { return this->apiVpcAccessInfos_ != nullptr;};
    void deleteApiVpcAccessInfos() { this->apiVpcAccessInfos_ = nullptr;};
    inline const DescribeApisByVpcAccessResponseBody::ApiVpcAccessInfos & getApiVpcAccessInfos() const { DARABONBA_PTR_GET_CONST(apiVpcAccessInfos_, DescribeApisByVpcAccessResponseBody::ApiVpcAccessInfos) };
    inline DescribeApisByVpcAccessResponseBody::ApiVpcAccessInfos getApiVpcAccessInfos() { DARABONBA_PTR_GET(apiVpcAccessInfos_, DescribeApisByVpcAccessResponseBody::ApiVpcAccessInfos) };
    inline DescribeApisByVpcAccessResponseBody& setApiVpcAccessInfos(const DescribeApisByVpcAccessResponseBody::ApiVpcAccessInfos & apiVpcAccessInfos) { DARABONBA_PTR_SET_VALUE(apiVpcAccessInfos_, apiVpcAccessInfos) };
    inline DescribeApisByVpcAccessResponseBody& setApiVpcAccessInfos(DescribeApisByVpcAccessResponseBody::ApiVpcAccessInfos && apiVpcAccessInfos) { DARABONBA_PTR_SET_RVALUE(apiVpcAccessInfos_, apiVpcAccessInfos) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApisByVpcAccessResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApisByVpcAccessResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisByVpcAccessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApisByVpcAccessResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned API information. It is an array consisting of ApiInfo data.
    shared_ptr<DescribeApisByVpcAccessResponseBody::ApiVpcAccessInfos> apiVpcAccessInfos_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
