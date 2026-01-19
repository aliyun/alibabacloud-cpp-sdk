// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISWITHSTAGENAMEINTEGRATEDBYAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISWITHSTAGENAMEINTEGRATEDBYAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisWithStageNameIntegratedByAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisWithStageNameIntegratedByAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppApiRelationInfos, appApiRelationInfos_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisWithStageNameIntegratedByAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppApiRelationInfos, appApiRelationInfos_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApisWithStageNameIntegratedByAppResponseBody() = default ;
    DescribeApisWithStageNameIntegratedByAppResponseBody(const DescribeApisWithStageNameIntegratedByAppResponseBody &) = default ;
    DescribeApisWithStageNameIntegratedByAppResponseBody(DescribeApisWithStageNameIntegratedByAppResponseBody &&) = default ;
    DescribeApisWithStageNameIntegratedByAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisWithStageNameIntegratedByAppResponseBody() = default ;
    DescribeApisWithStageNameIntegratedByAppResponseBody& operator=(const DescribeApisWithStageNameIntegratedByAppResponseBody &) = default ;
    DescribeApisWithStageNameIntegratedByAppResponseBody& operator=(DescribeApisWithStageNameIntegratedByAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppApiRelationInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppApiRelationInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AppApiRelationInfo, appApiRelationInfo_);
      };
      friend void from_json(const Darabonba::Json& j, AppApiRelationInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AppApiRelationInfo, appApiRelationInfo_);
      };
      AppApiRelationInfos() = default ;
      AppApiRelationInfos(const AppApiRelationInfos &) = default ;
      AppApiRelationInfos(AppApiRelationInfos &&) = default ;
      AppApiRelationInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppApiRelationInfos() = default ;
      AppApiRelationInfos& operator=(const AppApiRelationInfos &) = default ;
      AppApiRelationInfos& operator=(AppApiRelationInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AppApiRelationInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppApiRelationInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(AuthorizationSource, authorizationSource_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(Method, method_);
          DARABONBA_PTR_TO_JSON(Operator, operator_);
          DARABONBA_PTR_TO_JSON(Path, path_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(StageNameAndAuth, stageNameAndAuth_);
        };
        friend void from_json(const Darabonba::Json& j, AppApiRelationInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(AuthorizationSource, authorizationSource_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(Method, method_);
          DARABONBA_PTR_FROM_JSON(Operator, operator_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(StageNameAndAuth, stageNameAndAuth_);
        };
        AppApiRelationInfo() = default ;
        AppApiRelationInfo(const AppApiRelationInfo &) = default ;
        AppApiRelationInfo(AppApiRelationInfo &&) = default ;
        AppApiRelationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppApiRelationInfo() = default ;
        AppApiRelationInfo& operator=(const AppApiRelationInfo &) = default ;
        AppApiRelationInfo& operator=(AppApiRelationInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->authorizationSource_ == nullptr && this->createdTime_ == nullptr && this->description_ == nullptr && this->groupId_ == nullptr
        && this->groupName_ == nullptr && this->method_ == nullptr && this->operator_ == nullptr && this->path_ == nullptr && this->regionId_ == nullptr
        && this->stageNameAndAuth_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline AppApiRelationInfo& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline AppApiRelationInfo& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // authorizationSource Field Functions 
        bool hasAuthorizationSource() const { return this->authorizationSource_ != nullptr;};
        void deleteAuthorizationSource() { this->authorizationSource_ = nullptr;};
        inline string getAuthorizationSource() const { DARABONBA_PTR_GET_DEFAULT(authorizationSource_, "") };
        inline AppApiRelationInfo& setAuthorizationSource(string authorizationSource) { DARABONBA_PTR_SET_VALUE(authorizationSource_, authorizationSource) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline AppApiRelationInfo& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AppApiRelationInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline AppApiRelationInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline AppApiRelationInfo& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline AppApiRelationInfo& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline AppApiRelationInfo& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline AppApiRelationInfo& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline AppApiRelationInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // stageNameAndAuth Field Functions 
        bool hasStageNameAndAuth() const { return this->stageNameAndAuth_ != nullptr;};
        void deleteStageNameAndAuth() { this->stageNameAndAuth_ = nullptr;};
        inline const map<string, string> & getStageNameAndAuth() const { DARABONBA_PTR_GET_CONST(stageNameAndAuth_, map<string, string>) };
        inline map<string, string> getStageNameAndAuth() { DARABONBA_PTR_GET(stageNameAndAuth_, map<string, string>) };
        inline AppApiRelationInfo& setStageNameAndAuth(const map<string, string> & stageNameAndAuth) { DARABONBA_PTR_SET_VALUE(stageNameAndAuth_, stageNameAndAuth) };
        inline AppApiRelationInfo& setStageNameAndAuth(map<string, string> && stageNameAndAuth) { DARABONBA_PTR_SET_RVALUE(stageNameAndAuth_, stageNameAndAuth) };


      protected:
        // The API ID.
        shared_ptr<string> apiId_ {};
        // The API name.
        shared_ptr<string> apiName_ {};
        // The authorization source.
        shared_ptr<string> authorizationSource_ {};
        // The time when the authorization was created.
        shared_ptr<string> createdTime_ {};
        // The API description.
        shared_ptr<string> description_ {};
        // The ID of the API group.
        shared_ptr<string> groupId_ {};
        // The name of the API group.
        shared_ptr<string> groupName_ {};
        // The request HTTP method of the API.
        shared_ptr<string> method_ {};
        // The authorizer. Valid values:
        // 
        // *   **PROVIDER:** the API owner
        // *   **CONSUMER:** the API caller
        shared_ptr<string> operator_ {};
        // The request path of the API.
        shared_ptr<string> path_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The mapping information between environments and authorizations.
        shared_ptr<map<string, string>> stageNameAndAuth_ {};
      };

      virtual bool empty() const override { return this->appApiRelationInfo_ == nullptr; };
      // appApiRelationInfo Field Functions 
      bool hasAppApiRelationInfo() const { return this->appApiRelationInfo_ != nullptr;};
      void deleteAppApiRelationInfo() { this->appApiRelationInfo_ = nullptr;};
      inline const vector<AppApiRelationInfos::AppApiRelationInfo> & getAppApiRelationInfo() const { DARABONBA_PTR_GET_CONST(appApiRelationInfo_, vector<AppApiRelationInfos::AppApiRelationInfo>) };
      inline vector<AppApiRelationInfos::AppApiRelationInfo> getAppApiRelationInfo() { DARABONBA_PTR_GET(appApiRelationInfo_, vector<AppApiRelationInfos::AppApiRelationInfo>) };
      inline AppApiRelationInfos& setAppApiRelationInfo(const vector<AppApiRelationInfos::AppApiRelationInfo> & appApiRelationInfo) { DARABONBA_PTR_SET_VALUE(appApiRelationInfo_, appApiRelationInfo) };
      inline AppApiRelationInfos& setAppApiRelationInfo(vector<AppApiRelationInfos::AppApiRelationInfo> && appApiRelationInfo) { DARABONBA_PTR_SET_RVALUE(appApiRelationInfo_, appApiRelationInfo) };


    protected:
      shared_ptr<vector<AppApiRelationInfos::AppApiRelationInfo>> appApiRelationInfo_ {};
    };

    virtual bool empty() const override { return this->appApiRelationInfos_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // appApiRelationInfos Field Functions 
    bool hasAppApiRelationInfos() const { return this->appApiRelationInfos_ != nullptr;};
    void deleteAppApiRelationInfos() { this->appApiRelationInfos_ = nullptr;};
    inline const DescribeApisWithStageNameIntegratedByAppResponseBody::AppApiRelationInfos & getAppApiRelationInfos() const { DARABONBA_PTR_GET_CONST(appApiRelationInfos_, DescribeApisWithStageNameIntegratedByAppResponseBody::AppApiRelationInfos) };
    inline DescribeApisWithStageNameIntegratedByAppResponseBody::AppApiRelationInfos getAppApiRelationInfos() { DARABONBA_PTR_GET(appApiRelationInfos_, DescribeApisWithStageNameIntegratedByAppResponseBody::AppApiRelationInfos) };
    inline DescribeApisWithStageNameIntegratedByAppResponseBody& setAppApiRelationInfos(const DescribeApisWithStageNameIntegratedByAppResponseBody::AppApiRelationInfos & appApiRelationInfos) { DARABONBA_PTR_SET_VALUE(appApiRelationInfos_, appApiRelationInfos) };
    inline DescribeApisWithStageNameIntegratedByAppResponseBody& setAppApiRelationInfos(DescribeApisWithStageNameIntegratedByAppResponseBody::AppApiRelationInfos && appApiRelationInfos) { DARABONBA_PTR_SET_RVALUE(appApiRelationInfos_, appApiRelationInfos) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApisWithStageNameIntegratedByAppResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApisWithStageNameIntegratedByAppResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisWithStageNameIntegratedByAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApisWithStageNameIntegratedByAppResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The authorization information of the API.
    shared_ptr<DescribeApisWithStageNameIntegratedByAppResponseBody::AppApiRelationInfos> appApiRelationInfos_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
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
