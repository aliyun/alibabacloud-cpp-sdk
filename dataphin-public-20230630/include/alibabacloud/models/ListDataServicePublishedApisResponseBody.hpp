// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEPUBLISHEDAPISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEPUBLISHEDAPISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServicePublishedApisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServicePublishedApisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServicePublishedApisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataServicePublishedApisResponseBody() = default ;
    ListDataServicePublishedApisResponseBody(const ListDataServicePublishedApisResponseBody &) = default ;
    ListDataServicePublishedApisResponseBody(ListDataServicePublishedApisResponseBody &&) = default ;
    ListDataServicePublishedApisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServicePublishedApisResponseBody() = default ;
    ListDataServicePublishedApisResponseBody& operator=(const ListDataServicePublishedApisResponseBody &) = default ;
    ListDataServicePublishedApisResponseBody& operator=(ListDataServicePublishedApisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(ApiList, apiList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiList, apiList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiList& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(AppCount, appCount_);
          DARABONBA_PTR_TO_JSON(AppInfoList, appInfoList_);
          DARABONBA_PTR_TO_JSON(ApplyStatus, applyStatus_);
          DARABONBA_PTR_TO_JSON(CallCount, callCount_);
          DARABONBA_PTR_TO_JSON(CreateType, createType_);
          DARABONBA_PTR_TO_JSON(CustomUpdateRate, customUpdateRate_);
          DARABONBA_PTR_TO_JSON(DeployTime, deployTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ExecuteMode, executeMode_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(LogicUnitNo, logicUnitNo_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(OwnerUserName, ownerUserName_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(UpdateRate, updateRate_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, ApiList& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(AppCount, appCount_);
          DARABONBA_PTR_FROM_JSON(AppInfoList, appInfoList_);
          DARABONBA_PTR_FROM_JSON(ApplyStatus, applyStatus_);
          DARABONBA_PTR_FROM_JSON(CallCount, callCount_);
          DARABONBA_PTR_FROM_JSON(CreateType, createType_);
          DARABONBA_PTR_FROM_JSON(CustomUpdateRate, customUpdateRate_);
          DARABONBA_PTR_FROM_JSON(DeployTime, deployTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ExecuteMode, executeMode_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(LogicUnitNo, logicUnitNo_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(OwnerUserName, ownerUserName_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(UpdateRate, updateRate_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        ApiList() = default ;
        ApiList(const ApiList &) = default ;
        ApiList(ApiList &&) = default ;
        ApiList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiList() = default ;
        ApiList& operator=(const ApiList &) = default ;
        ApiList& operator=(ApiList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AppInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AppInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(AppId, appId_);
            DARABONBA_PTR_TO_JSON(AppKey, appKey_);
            DARABONBA_PTR_TO_JSON(AppName, appName_);
          };
          friend void from_json(const Darabonba::Json& j, AppInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(AppId, appId_);
            DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
            DARABONBA_PTR_FROM_JSON(AppName, appName_);
          };
          AppInfoList() = default ;
          AppInfoList(const AppInfoList &) = default ;
          AppInfoList(AppInfoList &&) = default ;
          AppInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AppInfoList() = default ;
          AppInfoList& operator=(const AppInfoList &) = default ;
          AppInfoList& operator=(AppInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appId_ == nullptr
        && this->appKey_ == nullptr && this->appName_ == nullptr; };
          // appId Field Functions 
          bool hasAppId() const { return this->appId_ != nullptr;};
          void deleteAppId() { this->appId_ = nullptr;};
          inline int32_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
          inline AppInfoList& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


          // appKey Field Functions 
          bool hasAppKey() const { return this->appKey_ != nullptr;};
          void deleteAppKey() { this->appKey_ = nullptr;};
          inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
          inline AppInfoList& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


          // appName Field Functions 
          bool hasAppName() const { return this->appName_ != nullptr;};
          void deleteAppName() { this->appName_ = nullptr;};
          inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
          inline AppInfoList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        protected:
          shared_ptr<int32_t> appId_ {};
          // appKey
          shared_ptr<int64_t> appKey_ {};
          shared_ptr<string> appName_ {};
        };

        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->appCount_ == nullptr && this->appInfoList_ == nullptr && this->applyStatus_ == nullptr && this->callCount_ == nullptr
        && this->createType_ == nullptr && this->customUpdateRate_ == nullptr && this->deployTime_ == nullptr && this->description_ == nullptr && this->executeMode_ == nullptr
        && this->groupId_ == nullptr && this->groupName_ == nullptr && this->logicUnitNo_ == nullptr && this->mode_ == nullptr && this->owner_ == nullptr
        && this->ownerUserName_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr && this->updateRate_ == nullptr && this->updateTime_ == nullptr
        && this->version_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline int64_t getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
        inline ApiList& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline ApiList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // appCount Field Functions 
        bool hasAppCount() const { return this->appCount_ != nullptr;};
        void deleteAppCount() { this->appCount_ = nullptr;};
        inline int32_t getAppCount() const { DARABONBA_PTR_GET_DEFAULT(appCount_, 0) };
        inline ApiList& setAppCount(int32_t appCount) { DARABONBA_PTR_SET_VALUE(appCount_, appCount) };


        // appInfoList Field Functions 
        bool hasAppInfoList() const { return this->appInfoList_ != nullptr;};
        void deleteAppInfoList() { this->appInfoList_ = nullptr;};
        inline const vector<ApiList::AppInfoList> & getAppInfoList() const { DARABONBA_PTR_GET_CONST(appInfoList_, vector<ApiList::AppInfoList>) };
        inline vector<ApiList::AppInfoList> getAppInfoList() { DARABONBA_PTR_GET(appInfoList_, vector<ApiList::AppInfoList>) };
        inline ApiList& setAppInfoList(const vector<ApiList::AppInfoList> & appInfoList) { DARABONBA_PTR_SET_VALUE(appInfoList_, appInfoList) };
        inline ApiList& setAppInfoList(vector<ApiList::AppInfoList> && appInfoList) { DARABONBA_PTR_SET_RVALUE(appInfoList_, appInfoList) };


        // applyStatus Field Functions 
        bool hasApplyStatus() const { return this->applyStatus_ != nullptr;};
        void deleteApplyStatus() { this->applyStatus_ = nullptr;};
        inline int32_t getApplyStatus() const { DARABONBA_PTR_GET_DEFAULT(applyStatus_, 0) };
        inline ApiList& setApplyStatus(int32_t applyStatus) { DARABONBA_PTR_SET_VALUE(applyStatus_, applyStatus) };


        // callCount Field Functions 
        bool hasCallCount() const { return this->callCount_ != nullptr;};
        void deleteCallCount() { this->callCount_ = nullptr;};
        inline int32_t getCallCount() const { DARABONBA_PTR_GET_DEFAULT(callCount_, 0) };
        inline ApiList& setCallCount(int32_t callCount) { DARABONBA_PTR_SET_VALUE(callCount_, callCount) };


        // createType Field Functions 
        bool hasCreateType() const { return this->createType_ != nullptr;};
        void deleteCreateType() { this->createType_ = nullptr;};
        inline int32_t getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, 0) };
        inline ApiList& setCreateType(int32_t createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


        // customUpdateRate Field Functions 
        bool hasCustomUpdateRate() const { return this->customUpdateRate_ != nullptr;};
        void deleteCustomUpdateRate() { this->customUpdateRate_ = nullptr;};
        inline string getCustomUpdateRate() const { DARABONBA_PTR_GET_DEFAULT(customUpdateRate_, "") };
        inline ApiList& setCustomUpdateRate(string customUpdateRate) { DARABONBA_PTR_SET_VALUE(customUpdateRate_, customUpdateRate) };


        // deployTime Field Functions 
        bool hasDeployTime() const { return this->deployTime_ != nullptr;};
        void deleteDeployTime() { this->deployTime_ = nullptr;};
        inline string getDeployTime() const { DARABONBA_PTR_GET_DEFAULT(deployTime_, "") };
        inline ApiList& setDeployTime(string deployTime) { DARABONBA_PTR_SET_VALUE(deployTime_, deployTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ApiList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // executeMode Field Functions 
        bool hasExecuteMode() const { return this->executeMode_ != nullptr;};
        void deleteExecuteMode() { this->executeMode_ = nullptr;};
        inline int32_t getExecuteMode() const { DARABONBA_PTR_GET_DEFAULT(executeMode_, 0) };
        inline ApiList& setExecuteMode(int32_t executeMode) { DARABONBA_PTR_SET_VALUE(executeMode_, executeMode) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline int32_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
        inline ApiList& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline ApiList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // logicUnitNo Field Functions 
        bool hasLogicUnitNo() const { return this->logicUnitNo_ != nullptr;};
        void deleteLogicUnitNo() { this->logicUnitNo_ = nullptr;};
        inline int64_t getLogicUnitNo() const { DARABONBA_PTR_GET_DEFAULT(logicUnitNo_, 0L) };
        inline ApiList& setLogicUnitNo(int64_t logicUnitNo) { DARABONBA_PTR_SET_VALUE(logicUnitNo_, logicUnitNo) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline int32_t getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
        inline ApiList& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline ApiList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // ownerUserName Field Functions 
        bool hasOwnerUserName() const { return this->ownerUserName_ != nullptr;};
        void deleteOwnerUserName() { this->ownerUserName_ = nullptr;};
        inline string getOwnerUserName() const { DARABONBA_PTR_GET_DEFAULT(ownerUserName_, "") };
        inline ApiList& setOwnerUserName(string ownerUserName) { DARABONBA_PTR_SET_VALUE(ownerUserName_, ownerUserName) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int32_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
        inline ApiList& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline ApiList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // updateRate Field Functions 
        bool hasUpdateRate() const { return this->updateRate_ != nullptr;};
        void deleteUpdateRate() { this->updateRate_ = nullptr;};
        inline int32_t getUpdateRate() const { DARABONBA_PTR_GET_DEFAULT(updateRate_, 0) };
        inline ApiList& setUpdateRate(int32_t updateRate) { DARABONBA_PTR_SET_VALUE(updateRate_, updateRate) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline ApiList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline ApiList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<int64_t> apiId_ {};
        shared_ptr<string> apiName_ {};
        shared_ptr<int32_t> appCount_ {};
        shared_ptr<vector<ApiList::AppInfoList>> appInfoList_ {};
        shared_ptr<int32_t> applyStatus_ {};
        shared_ptr<int32_t> callCount_ {};
        shared_ptr<int32_t> createType_ {};
        shared_ptr<string> customUpdateRate_ {};
        shared_ptr<string> deployTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<int32_t> executeMode_ {};
        shared_ptr<int32_t> groupId_ {};
        shared_ptr<string> groupName_ {};
        shared_ptr<int64_t> logicUnitNo_ {};
        shared_ptr<int32_t> mode_ {};
        shared_ptr<string> owner_ {};
        shared_ptr<string> ownerUserName_ {};
        shared_ptr<int32_t> projectId_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<int32_t> updateRate_ {};
        shared_ptr<string> updateTime_ {};
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->apiList_ == nullptr
        && this->totalCount_ == nullptr; };
      // apiList Field Functions 
      bool hasApiList() const { return this->apiList_ != nullptr;};
      void deleteApiList() { this->apiList_ = nullptr;};
      inline const vector<PageResult::ApiList> & getApiList() const { DARABONBA_PTR_GET_CONST(apiList_, vector<PageResult::ApiList>) };
      inline vector<PageResult::ApiList> getApiList() { DARABONBA_PTR_GET(apiList_, vector<PageResult::ApiList>) };
      inline PageResult& setApiList(const vector<PageResult::ApiList> & apiList) { DARABONBA_PTR_SET_VALUE(apiList_, apiList) };
      inline PageResult& setApiList(vector<PageResult::ApiList> && apiList) { DARABONBA_PTR_SET_RVALUE(apiList_, apiList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageResult::ApiList>> apiList_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDataServicePublishedApisResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDataServicePublishedApisResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDataServicePublishedApisResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListDataServicePublishedApisResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListDataServicePublishedApisResponseBody::PageResult) };
    inline ListDataServicePublishedApisResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListDataServicePublishedApisResponseBody::PageResult) };
    inline ListDataServicePublishedApisResponseBody& setPageResult(const ListDataServicePublishedApisResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListDataServicePublishedApisResponseBody& setPageResult(ListDataServicePublishedApisResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataServicePublishedApisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataServicePublishedApisResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListDataServicePublishedApisResponseBody::PageResult> pageResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
