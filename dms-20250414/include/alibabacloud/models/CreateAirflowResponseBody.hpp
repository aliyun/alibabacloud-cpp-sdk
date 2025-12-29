// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAIRFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAIRFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateAirflowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAirflowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Root, root_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAirflowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Root, root_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateAirflowResponseBody() = default ;
    CreateAirflowResponseBody(const CreateAirflowResponseBody &) = default ;
    CreateAirflowResponseBody(CreateAirflowResponseBody &&) = default ;
    CreateAirflowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAirflowResponseBody() = default ;
    CreateAirflowResponseBody& operator=(const CreateAirflowResponseBody &) = default ;
    CreateAirflowResponseBody& operator=(CreateAirflowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Root : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Root& obj) { 
        DARABONBA_PTR_TO_JSON(AirflowId, airflowId_);
        DARABONBA_PTR_TO_JSON(AirflowName, airflowName_);
        DARABONBA_PTR_TO_JSON(AppSpec, appSpec_);
        DARABONBA_PTR_TO_JSON(AppType, appType_);
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
      friend void from_json(const Darabonba::Json& j, Root& obj) { 
        DARABONBA_PTR_FROM_JSON(AirflowId, airflowId_);
        DARABONBA_PTR_FROM_JSON(AirflowName, airflowName_);
        DARABONBA_PTR_FROM_JSON(AppSpec, appSpec_);
        DARABONBA_PTR_FROM_JSON(AppType, appType_);
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
      virtual bool empty() const override { return this->airflowId_ == nullptr
        && this->airflowName_ == nullptr && this->appSpec_ == nullptr && this->appType_ == nullptr && this->dagsDir_ == nullptr && this->deployErrorMsg_ == nullptr
        && this->description_ == nullptr && this->gmtCreated_ == nullptr && this->ossBucketName_ == nullptr && this->ossPath_ == nullptr && this->pluginsDir_ == nullptr
        && this->requirementFile_ == nullptr && this->securityGroupId_ == nullptr && this->startupFile_ == nullptr && this->status_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr && this->workerServerlessReplicas_ == nullptr && this->workspaceId_ == nullptr && this->zoneId_ == nullptr; };
      // airflowId Field Functions 
      bool hasAirflowId() const { return this->airflowId_ != nullptr;};
      void deleteAirflowId() { this->airflowId_ = nullptr;};
      inline string getAirflowId() const { DARABONBA_PTR_GET_DEFAULT(airflowId_, "") };
      inline Root& setAirflowId(string airflowId) { DARABONBA_PTR_SET_VALUE(airflowId_, airflowId) };


      // airflowName Field Functions 
      bool hasAirflowName() const { return this->airflowName_ != nullptr;};
      void deleteAirflowName() { this->airflowName_ = nullptr;};
      inline string getAirflowName() const { DARABONBA_PTR_GET_DEFAULT(airflowName_, "") };
      inline Root& setAirflowName(string airflowName) { DARABONBA_PTR_SET_VALUE(airflowName_, airflowName) };


      // appSpec Field Functions 
      bool hasAppSpec() const { return this->appSpec_ != nullptr;};
      void deleteAppSpec() { this->appSpec_ = nullptr;};
      inline string getAppSpec() const { DARABONBA_PTR_GET_DEFAULT(appSpec_, "") };
      inline Root& setAppSpec(string appSpec) { DARABONBA_PTR_SET_VALUE(appSpec_, appSpec) };


      // appType Field Functions 
      bool hasAppType() const { return this->appType_ != nullptr;};
      void deleteAppType() { this->appType_ = nullptr;};
      inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
      inline Root& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


      // dagsDir Field Functions 
      bool hasDagsDir() const { return this->dagsDir_ != nullptr;};
      void deleteDagsDir() { this->dagsDir_ = nullptr;};
      inline string getDagsDir() const { DARABONBA_PTR_GET_DEFAULT(dagsDir_, "") };
      inline Root& setDagsDir(string dagsDir) { DARABONBA_PTR_SET_VALUE(dagsDir_, dagsDir) };


      // deployErrorMsg Field Functions 
      bool hasDeployErrorMsg() const { return this->deployErrorMsg_ != nullptr;};
      void deleteDeployErrorMsg() { this->deployErrorMsg_ = nullptr;};
      inline string getDeployErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(deployErrorMsg_, "") };
      inline Root& setDeployErrorMsg(string deployErrorMsg) { DARABONBA_PTR_SET_VALUE(deployErrorMsg_, deployErrorMsg) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Root& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Root& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // ossBucketName Field Functions 
      bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
      void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
      inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
      inline Root& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


      // ossPath Field Functions 
      bool hasOssPath() const { return this->ossPath_ != nullptr;};
      void deleteOssPath() { this->ossPath_ = nullptr;};
      inline string getOssPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
      inline Root& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


      // pluginsDir Field Functions 
      bool hasPluginsDir() const { return this->pluginsDir_ != nullptr;};
      void deletePluginsDir() { this->pluginsDir_ = nullptr;};
      inline string getPluginsDir() const { DARABONBA_PTR_GET_DEFAULT(pluginsDir_, "") };
      inline Root& setPluginsDir(string pluginsDir) { DARABONBA_PTR_SET_VALUE(pluginsDir_, pluginsDir) };


      // requirementFile Field Functions 
      bool hasRequirementFile() const { return this->requirementFile_ != nullptr;};
      void deleteRequirementFile() { this->requirementFile_ = nullptr;};
      inline string getRequirementFile() const { DARABONBA_PTR_GET_DEFAULT(requirementFile_, "") };
      inline Root& setRequirementFile(string requirementFile) { DARABONBA_PTR_SET_VALUE(requirementFile_, requirementFile) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Root& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // startupFile Field Functions 
      bool hasStartupFile() const { return this->startupFile_ != nullptr;};
      void deleteStartupFile() { this->startupFile_ = nullptr;};
      inline string getStartupFile() const { DARABONBA_PTR_GET_DEFAULT(startupFile_, "") };
      inline Root& setStartupFile(string startupFile) { DARABONBA_PTR_SET_VALUE(startupFile_, startupFile) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Root& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Root& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Root& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // workerServerlessReplicas Field Functions 
      bool hasWorkerServerlessReplicas() const { return this->workerServerlessReplicas_ != nullptr;};
      void deleteWorkerServerlessReplicas() { this->workerServerlessReplicas_ = nullptr;};
      inline int32_t getWorkerServerlessReplicas() const { DARABONBA_PTR_GET_DEFAULT(workerServerlessReplicas_, 0) };
      inline Root& setWorkerServerlessReplicas(int32_t workerServerlessReplicas) { DARABONBA_PTR_SET_VALUE(workerServerlessReplicas_, workerServerlessReplicas) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Root& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Root& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> airflowId_ {};
      shared_ptr<string> airflowName_ {};
      shared_ptr<string> appSpec_ {};
      shared_ptr<string> appType_ {};
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

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->root_ == nullptr
        && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CreateAirflowResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateAirflowResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline CreateAirflowResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateAirflowResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAirflowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // root Field Functions 
    bool hasRoot() const { return this->root_ != nullptr;};
    void deleteRoot() { this->root_ = nullptr;};
    inline const CreateAirflowResponseBody::Root & getRoot() const { DARABONBA_PTR_GET_CONST(root_, CreateAirflowResponseBody::Root) };
    inline CreateAirflowResponseBody::Root getRoot() { DARABONBA_PTR_GET(root_, CreateAirflowResponseBody::Root) };
    inline CreateAirflowResponseBody& setRoot(const CreateAirflowResponseBody::Root & root) { DARABONBA_PTR_SET_VALUE(root_, root) };
    inline CreateAirflowResponseBody& setRoot(CreateAirflowResponseBody::Root && root) { DARABONBA_PTR_SET_RVALUE(root_, root) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateAirflowResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<int64_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<CreateAirflowResponseBody::Root> root_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
