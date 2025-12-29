// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIRFLOWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIRFLOWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListAirflowsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAirflowsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Root, root_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAirflowsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Root, root_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAirflowsResponseBody() = default ;
    ListAirflowsResponseBody(const ListAirflowsResponseBody &) = default ;
    ListAirflowsResponseBody(ListAirflowsResponseBody &&) = default ;
    ListAirflowsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAirflowsResponseBody() = default ;
    ListAirflowsResponseBody& operator=(const ListAirflowsResponseBody &) = default ;
    ListAirflowsResponseBody& operator=(ListAirflowsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Root : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Root& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Root& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Root() = default ;
      Root(const Root &) = default ;
      Root(Root &&) = default ;
      Root(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Root() = default ;
      Root& operator=(const Root &) = default ;
      Root& operator=(Root &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AirflowId, airflowId_);
          DARABONBA_PTR_TO_JSON(AirflowName, airflowName_);
          DARABONBA_PTR_TO_JSON(AppSpec, appSpec_);
          DARABONBA_PTR_TO_JSON(AppType, appType_);
          DARABONBA_PTR_TO_JSON(CustomAirflowCfg, customAirflowCfg_);
          DARABONBA_PTR_TO_JSON(DagsDir, dagsDir_);
          DARABONBA_PTR_TO_JSON(DeployErrorMsg, deployErrorMsg_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
          DARABONBA_PTR_TO_JSON(OssPath, ossPath_);
          DARABONBA_PTR_TO_JSON(PluginsDir, pluginsDir_);
          DARABONBA_PTR_TO_JSON(RequirementFile, requirementFile_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(StartupFile, startupFile_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(WorkerServerlessReplicas, workerServerlessReplicas_);
          DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AirflowId, airflowId_);
          DARABONBA_PTR_FROM_JSON(AirflowName, airflowName_);
          DARABONBA_PTR_FROM_JSON(AppSpec, appSpec_);
          DARABONBA_PTR_FROM_JSON(AppType, appType_);
          DARABONBA_PTR_FROM_JSON(CustomAirflowCfg, customAirflowCfg_);
          DARABONBA_PTR_FROM_JSON(DagsDir, dagsDir_);
          DARABONBA_PTR_FROM_JSON(DeployErrorMsg, deployErrorMsg_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
          DARABONBA_PTR_FROM_JSON(OssPath, ossPath_);
          DARABONBA_PTR_FROM_JSON(PluginsDir, pluginsDir_);
          DARABONBA_PTR_FROM_JSON(RequirementFile, requirementFile_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(StartupFile, startupFile_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(WorkerServerlessReplicas, workerServerlessReplicas_);
          DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->airflowId_ == nullptr
        && this->airflowName_ == nullptr && this->appSpec_ == nullptr && this->appType_ == nullptr && this->customAirflowCfg_ == nullptr && this->dagsDir_ == nullptr
        && this->deployErrorMsg_ == nullptr && this->description_ == nullptr && this->gmtCreated_ == nullptr && this->ossBucketName_ == nullptr && this->ossPath_ == nullptr
        && this->pluginsDir_ == nullptr && this->requirementFile_ == nullptr && this->securityGroupId_ == nullptr && this->startupFile_ == nullptr && this->status_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->workerServerlessReplicas_ == nullptr && this->workspaceId_ == nullptr && this->zoneId_ == nullptr; };
        // airflowId Field Functions 
        bool hasAirflowId() const { return this->airflowId_ != nullptr;};
        void deleteAirflowId() { this->airflowId_ = nullptr;};
        inline string getAirflowId() const { DARABONBA_PTR_GET_DEFAULT(airflowId_, "") };
        inline List& setAirflowId(string airflowId) { DARABONBA_PTR_SET_VALUE(airflowId_, airflowId) };


        // airflowName Field Functions 
        bool hasAirflowName() const { return this->airflowName_ != nullptr;};
        void deleteAirflowName() { this->airflowName_ = nullptr;};
        inline string getAirflowName() const { DARABONBA_PTR_GET_DEFAULT(airflowName_, "") };
        inline List& setAirflowName(string airflowName) { DARABONBA_PTR_SET_VALUE(airflowName_, airflowName) };


        // appSpec Field Functions 
        bool hasAppSpec() const { return this->appSpec_ != nullptr;};
        void deleteAppSpec() { this->appSpec_ = nullptr;};
        inline string getAppSpec() const { DARABONBA_PTR_GET_DEFAULT(appSpec_, "") };
        inline List& setAppSpec(string appSpec) { DARABONBA_PTR_SET_VALUE(appSpec_, appSpec) };


        // appType Field Functions 
        bool hasAppType() const { return this->appType_ != nullptr;};
        void deleteAppType() { this->appType_ = nullptr;};
        inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
        inline List& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


        // customAirflowCfg Field Functions 
        bool hasCustomAirflowCfg() const { return this->customAirflowCfg_ != nullptr;};
        void deleteCustomAirflowCfg() { this->customAirflowCfg_ = nullptr;};
        inline const vector<string> & getCustomAirflowCfg() const { DARABONBA_PTR_GET_CONST(customAirflowCfg_, vector<string>) };
        inline vector<string> getCustomAirflowCfg() { DARABONBA_PTR_GET(customAirflowCfg_, vector<string>) };
        inline List& setCustomAirflowCfg(const vector<string> & customAirflowCfg) { DARABONBA_PTR_SET_VALUE(customAirflowCfg_, customAirflowCfg) };
        inline List& setCustomAirflowCfg(vector<string> && customAirflowCfg) { DARABONBA_PTR_SET_RVALUE(customAirflowCfg_, customAirflowCfg) };


        // dagsDir Field Functions 
        bool hasDagsDir() const { return this->dagsDir_ != nullptr;};
        void deleteDagsDir() { this->dagsDir_ = nullptr;};
        inline string getDagsDir() const { DARABONBA_PTR_GET_DEFAULT(dagsDir_, "") };
        inline List& setDagsDir(string dagsDir) { DARABONBA_PTR_SET_VALUE(dagsDir_, dagsDir) };


        // deployErrorMsg Field Functions 
        bool hasDeployErrorMsg() const { return this->deployErrorMsg_ != nullptr;};
        void deleteDeployErrorMsg() { this->deployErrorMsg_ = nullptr;};
        inline string getDeployErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(deployErrorMsg_, "") };
        inline List& setDeployErrorMsg(string deployErrorMsg) { DARABONBA_PTR_SET_VALUE(deployErrorMsg_, deployErrorMsg) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline List& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // gmtCreated Field Functions 
        bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
        void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
        inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
        inline List& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


        // ossBucketName Field Functions 
        bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
        void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
        inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
        inline List& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


        // ossPath Field Functions 
        bool hasOssPath() const { return this->ossPath_ != nullptr;};
        void deleteOssPath() { this->ossPath_ = nullptr;};
        inline string getOssPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
        inline List& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


        // pluginsDir Field Functions 
        bool hasPluginsDir() const { return this->pluginsDir_ != nullptr;};
        void deletePluginsDir() { this->pluginsDir_ = nullptr;};
        inline string getPluginsDir() const { DARABONBA_PTR_GET_DEFAULT(pluginsDir_, "") };
        inline List& setPluginsDir(string pluginsDir) { DARABONBA_PTR_SET_VALUE(pluginsDir_, pluginsDir) };


        // requirementFile Field Functions 
        bool hasRequirementFile() const { return this->requirementFile_ != nullptr;};
        void deleteRequirementFile() { this->requirementFile_ = nullptr;};
        inline string getRequirementFile() const { DARABONBA_PTR_GET_DEFAULT(requirementFile_, "") };
        inline List& setRequirementFile(string requirementFile) { DARABONBA_PTR_SET_VALUE(requirementFile_, requirementFile) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline List& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // startupFile Field Functions 
        bool hasStartupFile() const { return this->startupFile_ != nullptr;};
        void deleteStartupFile() { this->startupFile_ = nullptr;};
        inline string getStartupFile() const { DARABONBA_PTR_GET_DEFAULT(startupFile_, "") };
        inline List& setStartupFile(string startupFile) { DARABONBA_PTR_SET_VALUE(startupFile_, startupFile) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline List& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline List& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // workerServerlessReplicas Field Functions 
        bool hasWorkerServerlessReplicas() const { return this->workerServerlessReplicas_ != nullptr;};
        void deleteWorkerServerlessReplicas() { this->workerServerlessReplicas_ = nullptr;};
        inline int32_t getWorkerServerlessReplicas() const { DARABONBA_PTR_GET_DEFAULT(workerServerlessReplicas_, 0) };
        inline List& setWorkerServerlessReplicas(int32_t workerServerlessReplicas) { DARABONBA_PTR_SET_VALUE(workerServerlessReplicas_, workerServerlessReplicas) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
        inline List& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline List& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> airflowId_ {};
        shared_ptr<string> airflowName_ {};
        shared_ptr<string> appSpec_ {};
        shared_ptr<string> appType_ {};
        shared_ptr<vector<string>> customAirflowCfg_ {};
        shared_ptr<string> dagsDir_ {};
        shared_ptr<string> deployErrorMsg_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> gmtCreated_ {};
        shared_ptr<string> ossBucketName_ {};
        shared_ptr<string> ossPath_ {};
        shared_ptr<string> pluginsDir_ {};
        shared_ptr<string> requirementFile_ {};
        shared_ptr<string> securityGroupId_ {};
        shared_ptr<string> startupFile_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> vSwitchId_ {};
        // VPC ID。
        shared_ptr<string> vpcId_ {};
        shared_ptr<int32_t> workerServerlessReplicas_ {};
        shared_ptr<string> workspaceId_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Root::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Root::List>) };
      inline vector<Root::List> getList() { DARABONBA_PTR_GET(list_, vector<Root::List>) };
      inline Root& setList(const vector<Root::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Root& setList(vector<Root::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Root& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Root::List>> list_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->root_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListAirflowsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListAirflowsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline ListAirflowsResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAirflowsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAirflowsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAirflowsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAirflowsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // root Field Functions 
    bool hasRoot() const { return this->root_ != nullptr;};
    void deleteRoot() { this->root_ = nullptr;};
    inline const ListAirflowsResponseBody::Root & getRoot() const { DARABONBA_PTR_GET_CONST(root_, ListAirflowsResponseBody::Root) };
    inline ListAirflowsResponseBody::Root getRoot() { DARABONBA_PTR_GET(root_, ListAirflowsResponseBody::Root) };
    inline ListAirflowsResponseBody& setRoot(const ListAirflowsResponseBody::Root & root) { DARABONBA_PTR_SET_VALUE(root_, root) };
    inline ListAirflowsResponseBody& setRoot(ListAirflowsResponseBody::Root && root) { DARABONBA_PTR_SET_RVALUE(root_, root) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAirflowsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<int64_t> httpStatusCode_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    // Reuqest ID。
    shared_ptr<string> requestId_ {};
    shared_ptr<ListAirflowsResponseBody::Root> root_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
