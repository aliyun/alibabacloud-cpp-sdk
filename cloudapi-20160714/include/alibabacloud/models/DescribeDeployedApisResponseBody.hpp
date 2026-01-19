// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPISRESPONSEBODY_HPP_
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
  class DescribeDeployedApisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployedApisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeployedApis, deployedApis_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployedApisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployedApis, deployedApis_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDeployedApisResponseBody() = default ;
    DescribeDeployedApisResponseBody(const DescribeDeployedApisResponseBody &) = default ;
    DescribeDeployedApisResponseBody(DescribeDeployedApisResponseBody &&) = default ;
    DescribeDeployedApisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployedApisResponseBody() = default ;
    DescribeDeployedApisResponseBody& operator=(const DescribeDeployedApisResponseBody &) = default ;
    DescribeDeployedApisResponseBody& operator=(DescribeDeployedApisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeployedApis : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeployedApis& obj) { 
        DARABONBA_PTR_TO_JSON(DeployedApiItem, deployedApiItem_);
      };
      friend void from_json(const Darabonba::Json& j, DeployedApis& obj) { 
        DARABONBA_PTR_FROM_JSON(DeployedApiItem, deployedApiItem_);
      };
      DeployedApis() = default ;
      DeployedApis(const DeployedApis &) = default ;
      DeployedApis(DeployedApis &&) = default ;
      DeployedApis(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeployedApis() = default ;
      DeployedApis& operator=(const DeployedApis &) = default ;
      DeployedApis& operator=(DeployedApis &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DeployedApiItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeployedApiItem& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiMethod, apiMethod_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(ApiPath, apiPath_);
          DARABONBA_PTR_TO_JSON(DeployedTime, deployedTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(StageName, stageName_);
          DARABONBA_PTR_TO_JSON(Visibility, visibility_);
        };
        friend void from_json(const Darabonba::Json& j, DeployedApiItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiMethod, apiMethod_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(ApiPath, apiPath_);
          DARABONBA_PTR_FROM_JSON(DeployedTime, deployedTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(StageName, stageName_);
          DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
        };
        DeployedApiItem() = default ;
        DeployedApiItem(const DeployedApiItem &) = default ;
        DeployedApiItem(DeployedApiItem &&) = default ;
        DeployedApiItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeployedApiItem() = default ;
        DeployedApiItem& operator=(const DeployedApiItem &) = default ;
        DeployedApiItem& operator=(DeployedApiItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiMethod_ == nullptr && this->apiName_ == nullptr && this->apiPath_ == nullptr && this->deployedTime_ == nullptr && this->description_ == nullptr
        && this->groupId_ == nullptr && this->groupName_ == nullptr && this->regionId_ == nullptr && this->stageName_ == nullptr && this->visibility_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline DeployedApiItem& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiMethod Field Functions 
        bool hasApiMethod() const { return this->apiMethod_ != nullptr;};
        void deleteApiMethod() { this->apiMethod_ = nullptr;};
        inline string getApiMethod() const { DARABONBA_PTR_GET_DEFAULT(apiMethod_, "") };
        inline DeployedApiItem& setApiMethod(string apiMethod) { DARABONBA_PTR_SET_VALUE(apiMethod_, apiMethod) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline DeployedApiItem& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // apiPath Field Functions 
        bool hasApiPath() const { return this->apiPath_ != nullptr;};
        void deleteApiPath() { this->apiPath_ = nullptr;};
        inline string getApiPath() const { DARABONBA_PTR_GET_DEFAULT(apiPath_, "") };
        inline DeployedApiItem& setApiPath(string apiPath) { DARABONBA_PTR_SET_VALUE(apiPath_, apiPath) };


        // deployedTime Field Functions 
        bool hasDeployedTime() const { return this->deployedTime_ != nullptr;};
        void deleteDeployedTime() { this->deployedTime_ = nullptr;};
        inline string getDeployedTime() const { DARABONBA_PTR_GET_DEFAULT(deployedTime_, "") };
        inline DeployedApiItem& setDeployedTime(string deployedTime) { DARABONBA_PTR_SET_VALUE(deployedTime_, deployedTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DeployedApiItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline DeployedApiItem& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline DeployedApiItem& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DeployedApiItem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // stageName Field Functions 
        bool hasStageName() const { return this->stageName_ != nullptr;};
        void deleteStageName() { this->stageName_ = nullptr;};
        inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
        inline DeployedApiItem& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


        // visibility Field Functions 
        bool hasVisibility() const { return this->visibility_ != nullptr;};
        void deleteVisibility() { this->visibility_ = nullptr;};
        inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
        inline DeployedApiItem& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


      protected:
        // The ID of the API.
        shared_ptr<string> apiId_ {};
        // The HTTP method of the API request.
        shared_ptr<string> apiMethod_ {};
        // The name of the API.
        shared_ptr<string> apiName_ {};
        // The request path of the API.
        shared_ptr<string> apiPath_ {};
        // The publising time (UTC) of the API.
        shared_ptr<string> deployedTime_ {};
        // The description of the API.
        shared_ptr<string> description_ {};
        // The ID of the API group.
        shared_ptr<string> groupId_ {};
        // The name of the group to which the API belongs.
        shared_ptr<string> groupName_ {};
        // The region where the API is located.
        shared_ptr<string> regionId_ {};
        // The name of the runtime environment. Valid values:
        // 
        // *   **RELEASE**
        // *   **TEST**
        shared_ptr<string> stageName_ {};
        // Indicates whether the API is public. Valid values:
        // 
        // *   **PUBLIC**
        // *   **PRIVATE**
        shared_ptr<string> visibility_ {};
      };

      virtual bool empty() const override { return this->deployedApiItem_ == nullptr; };
      // deployedApiItem Field Functions 
      bool hasDeployedApiItem() const { return this->deployedApiItem_ != nullptr;};
      void deleteDeployedApiItem() { this->deployedApiItem_ = nullptr;};
      inline const vector<DeployedApis::DeployedApiItem> & getDeployedApiItem() const { DARABONBA_PTR_GET_CONST(deployedApiItem_, vector<DeployedApis::DeployedApiItem>) };
      inline vector<DeployedApis::DeployedApiItem> getDeployedApiItem() { DARABONBA_PTR_GET(deployedApiItem_, vector<DeployedApis::DeployedApiItem>) };
      inline DeployedApis& setDeployedApiItem(const vector<DeployedApis::DeployedApiItem> & deployedApiItem) { DARABONBA_PTR_SET_VALUE(deployedApiItem_, deployedApiItem) };
      inline DeployedApis& setDeployedApiItem(vector<DeployedApis::DeployedApiItem> && deployedApiItem) { DARABONBA_PTR_SET_RVALUE(deployedApiItem_, deployedApiItem) };


    protected:
      shared_ptr<vector<DeployedApis::DeployedApiItem>> deployedApiItem_ {};
    };

    virtual bool empty() const override { return this->deployedApis_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // deployedApis Field Functions 
    bool hasDeployedApis() const { return this->deployedApis_ != nullptr;};
    void deleteDeployedApis() { this->deployedApis_ = nullptr;};
    inline const DescribeDeployedApisResponseBody::DeployedApis & getDeployedApis() const { DARABONBA_PTR_GET_CONST(deployedApis_, DescribeDeployedApisResponseBody::DeployedApis) };
    inline DescribeDeployedApisResponseBody::DeployedApis getDeployedApis() { DARABONBA_PTR_GET(deployedApis_, DescribeDeployedApisResponseBody::DeployedApis) };
    inline DescribeDeployedApisResponseBody& setDeployedApis(const DescribeDeployedApisResponseBody::DeployedApis & deployedApis) { DARABONBA_PTR_SET_VALUE(deployedApis_, deployedApis) };
    inline DescribeDeployedApisResponseBody& setDeployedApis(DescribeDeployedApisResponseBody::DeployedApis && deployedApis) { DARABONBA_PTR_SET_RVALUE(deployedApis_, deployedApis) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDeployedApisResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDeployedApisResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDeployedApisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDeployedApisResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned API information. It is an array consisting of DeployedApiItem data.
    shared_ptr<DescribeDeployedApisResponseBody::DeployedApis> deployedApis_ {};
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
