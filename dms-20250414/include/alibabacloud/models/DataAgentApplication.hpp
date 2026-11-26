// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAAGENTAPPLICATION_HPP_
#define ALIBABACLOUD_MODELS_DATAAGENTAPPLICATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DataAgentApplication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataAgentApplication& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppUrl, appUrl_);
      DARABONBA_PTR_TO_JSON(ApplicationExtraInfo, applicationExtraInfo_);
      DARABONBA_PTR_TO_JSON(ApplicationRevision, applicationRevision_);
      DARABONBA_PTR_TO_JSON(AvailabilityErrorCode, availabilityErrorCode_);
      DARABONBA_PTR_TO_JSON(AvailabilityErrorMessage, availabilityErrorMessage_);
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(CreatorUid, creatorUid_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(LastRequest, lastRequest_);
      DARABONBA_PTR_TO_JSON(MainUid, mainUid_);
      DARABONBA_PTR_TO_JSON(ObservationStale, observationStale_);
      DARABONBA_PTR_TO_JSON(Ready, ready_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DataAgentApplication& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppUrl, appUrl_);
      DARABONBA_PTR_FROM_JSON(ApplicationExtraInfo, applicationExtraInfo_);
      DARABONBA_PTR_FROM_JSON(ApplicationRevision, applicationRevision_);
      DARABONBA_PTR_FROM_JSON(AvailabilityErrorCode, availabilityErrorCode_);
      DARABONBA_PTR_FROM_JSON(AvailabilityErrorMessage, availabilityErrorMessage_);
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(CreatorUid, creatorUid_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(LastRequest, lastRequest_);
      DARABONBA_PTR_FROM_JSON(MainUid, mainUid_);
      DARABONBA_PTR_FROM_JSON(ObservationStale, observationStale_);
      DARABONBA_PTR_FROM_JSON(Ready, ready_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DataAgentApplication() = default ;
    DataAgentApplication(const DataAgentApplication &) = default ;
    DataAgentApplication(DataAgentApplication &&) = default ;
    DataAgentApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataAgentApplication() = default ;
    DataAgentApplication& operator=(const DataAgentApplication &) = default ;
    DataAgentApplication& operator=(DataAgentApplication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LastRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LastRequest& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      };
      friend void from_json(const Darabonba::Json& j, LastRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      };
      LastRequest() = default ;
      LastRequest(const LastRequest &) = default ;
      LastRequest(LastRequest &&) = default ;
      LastRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LastRequest() = default ;
      LastRequest& operator=(const LastRequest &) = default ;
      LastRequest& operator=(LastRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline LastRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline LastRequest& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline LastRequest& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    protected:
      // The control action. Valid values:
      // - DEPLOY
      // - STOP
      // - RESTART
      // - DELETE
      shared_ptr<string> action_ {};
      // The error code for the failure of the most recent user control request. If no error occurs, this parameter is empty.
      shared_ptr<string> errorCode_ {};
      // The summary of the failure cause for the most recent user control request. If no error occurs, this parameter is empty.
      shared_ptr<string> errorMessage_ {};
    };

    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->appUrl_ == nullptr && this->applicationExtraInfo_ == nullptr && this->applicationRevision_ == nullptr
        && this->availabilityErrorCode_ == nullptr && this->availabilityErrorMessage_ == nullptr && this->creatorName_ == nullptr && this->creatorUid_ == nullptr && this->description_ == nullptr
        && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->lastRequest_ == nullptr && this->mainUid_ == nullptr && this->observationStale_ == nullptr
        && this->ready_ == nullptr && this->region_ == nullptr && this->sessionId_ == nullptr && this->status_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr && this->workspaceId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline DataAgentApplication& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DataAgentApplication& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DataAgentApplication& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appUrl Field Functions 
    bool hasAppUrl() const { return this->appUrl_ != nullptr;};
    void deleteAppUrl() { this->appUrl_ = nullptr;};
    inline string getAppUrl() const { DARABONBA_PTR_GET_DEFAULT(appUrl_, "") };
    inline DataAgentApplication& setAppUrl(string appUrl) { DARABONBA_PTR_SET_VALUE(appUrl_, appUrl) };


    // applicationExtraInfo Field Functions 
    bool hasApplicationExtraInfo() const { return this->applicationExtraInfo_ != nullptr;};
    void deleteApplicationExtraInfo() { this->applicationExtraInfo_ = nullptr;};
    inline string getApplicationExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(applicationExtraInfo_, "") };
    inline DataAgentApplication& setApplicationExtraInfo(string applicationExtraInfo) { DARABONBA_PTR_SET_VALUE(applicationExtraInfo_, applicationExtraInfo) };


    // applicationRevision Field Functions 
    bool hasApplicationRevision() const { return this->applicationRevision_ != nullptr;};
    void deleteApplicationRevision() { this->applicationRevision_ = nullptr;};
    inline int64_t getApplicationRevision() const { DARABONBA_PTR_GET_DEFAULT(applicationRevision_, 0L) };
    inline DataAgentApplication& setApplicationRevision(int64_t applicationRevision) { DARABONBA_PTR_SET_VALUE(applicationRevision_, applicationRevision) };


    // availabilityErrorCode Field Functions 
    bool hasAvailabilityErrorCode() const { return this->availabilityErrorCode_ != nullptr;};
    void deleteAvailabilityErrorCode() { this->availabilityErrorCode_ = nullptr;};
    inline string getAvailabilityErrorCode() const { DARABONBA_PTR_GET_DEFAULT(availabilityErrorCode_, "") };
    inline DataAgentApplication& setAvailabilityErrorCode(string availabilityErrorCode) { DARABONBA_PTR_SET_VALUE(availabilityErrorCode_, availabilityErrorCode) };


    // availabilityErrorMessage Field Functions 
    bool hasAvailabilityErrorMessage() const { return this->availabilityErrorMessage_ != nullptr;};
    void deleteAvailabilityErrorMessage() { this->availabilityErrorMessage_ = nullptr;};
    inline string getAvailabilityErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(availabilityErrorMessage_, "") };
    inline DataAgentApplication& setAvailabilityErrorMessage(string availabilityErrorMessage) { DARABONBA_PTR_SET_VALUE(availabilityErrorMessage_, availabilityErrorMessage) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline DataAgentApplication& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // creatorUid Field Functions 
    bool hasCreatorUid() const { return this->creatorUid_ != nullptr;};
    void deleteCreatorUid() { this->creatorUid_ = nullptr;};
    inline string getCreatorUid() const { DARABONBA_PTR_GET_DEFAULT(creatorUid_, "") };
    inline DataAgentApplication& setCreatorUid(string creatorUid) { DARABONBA_PTR_SET_VALUE(creatorUid_, creatorUid) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DataAgentApplication& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DataAgentApplication& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DataAgentApplication& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // lastRequest Field Functions 
    bool hasLastRequest() const { return this->lastRequest_ != nullptr;};
    void deleteLastRequest() { this->lastRequest_ = nullptr;};
    inline const DataAgentApplication::LastRequest & getLastRequest() const { DARABONBA_PTR_GET_CONST(lastRequest_, DataAgentApplication::LastRequest) };
    inline DataAgentApplication::LastRequest getLastRequest() { DARABONBA_PTR_GET(lastRequest_, DataAgentApplication::LastRequest) };
    inline DataAgentApplication& setLastRequest(const DataAgentApplication::LastRequest & lastRequest) { DARABONBA_PTR_SET_VALUE(lastRequest_, lastRequest) };
    inline DataAgentApplication& setLastRequest(DataAgentApplication::LastRequest && lastRequest) { DARABONBA_PTR_SET_RVALUE(lastRequest_, lastRequest) };


    // mainUid Field Functions 
    bool hasMainUid() const { return this->mainUid_ != nullptr;};
    void deleteMainUid() { this->mainUid_ = nullptr;};
    inline string getMainUid() const { DARABONBA_PTR_GET_DEFAULT(mainUid_, "") };
    inline DataAgentApplication& setMainUid(string mainUid) { DARABONBA_PTR_SET_VALUE(mainUid_, mainUid) };


    // observationStale Field Functions 
    bool hasObservationStale() const { return this->observationStale_ != nullptr;};
    void deleteObservationStale() { this->observationStale_ = nullptr;};
    inline bool getObservationStale() const { DARABONBA_PTR_GET_DEFAULT(observationStale_, false) };
    inline DataAgentApplication& setObservationStale(bool observationStale) { DARABONBA_PTR_SET_VALUE(observationStale_, observationStale) };


    // ready Field Functions 
    bool hasReady() const { return this->ready_ != nullptr;};
    void deleteReady() { this->ready_ = nullptr;};
    inline bool getReady() const { DARABONBA_PTR_GET_DEFAULT(ready_, false) };
    inline DataAgentApplication& setReady(bool ready) { DARABONBA_PTR_SET_VALUE(ready_, ready) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DataAgentApplication& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DataAgentApplication& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DataAgentApplication& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DataAgentApplication& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DataAgentApplication& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DataAgentApplication& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The ID of the currently associated Data Agent.
    shared_ptr<string> agentId_ {};
    // The stable identifier of the application.
    shared_ptr<string> appId_ {};
    // The name of the application.
    shared_ptr<string> appName_ {};
    // The access URL of the application. This URL is generated and returned as-is by RM when the deployment snapshot ready=true, and is not filtered again based on Status or ObservationStale. If not provided, this parameter is empty or omitted.
    shared_ptr<string> appUrl_ {};
    // The extended information of the application.
    shared_ptr<string> applicationExtraInfo_ {};
    // The control revision number of the application. The initial value is 0. This number increments after a control request is accepted and can be passed as ExpectedRevision.
    shared_ptr<int64_t> applicationRevision_ {};
    // The error code for the current service unavailability, which is expressed separately from the error code of the most recent control request. If no error occurs, this parameter is empty.
    shared_ptr<string> availabilityErrorCode_ {};
    // The summary of the cause for the current service unavailability. If no error occurs, this parameter is empty.
    shared_ptr<string> availabilityErrorMessage_ {};
    // The name of the application creator.
    shared_ptr<string> creatorName_ {};
    // The UID of the application owner.
    shared_ptr<string> creatorUid_ {};
    // The description of the application, which can be up to 250 characters in length.
    shared_ptr<string> description_ {};
    // The time when the application was created.
    shared_ptr<string> gmtCreated_ {};
    // The time when the application was last modified.
    shared_ptr<string> gmtModified_ {};
    // The most recent user control request. If no control request has been made, this parameter is empty.
    shared_ptr<DataAgentApplication::LastRequest> lastRequest_ {};
    // The UID of the Alibaba Cloud account.
    shared_ptr<string> mainUid_ {};
    // Specifies whether the runtime or service observation is missing or stale. If this parameter is set to true, the availability information may be outdated.
    shared_ptr<bool> observationStale_ {};
    // Specifies whether the current platform service is available. This does not indicate whether the most recent control request succeeded or whether the business components are healthy.
    shared_ptr<bool> ready_ {};
    // The region.
    shared_ptr<string> region_ {};
    // The ID of the current or most recently associated session.
    shared_ptr<string> sessionId_ {};
    // The status of the application. Valid values:
    // - REGISTERED
    // - PREPARING
    // - WAITING_AGREEMENT: Indicates that the system is waiting for the owner of the target workspace to sign a valid agreement. The original deployment or restart request is still being executed. After the agreement is signed, RM automatically resumes the original request.
    // - SEALING
    // - REVIEWING
    // - DEPLOYING
    // - DEPLOYED
    // - DEPLOY_FAILED
    // - STOPPING
    // - STOPPED
    // - STOP_FAILED
    // - RECOVERING
    // - UNAVAILABLE
    // - DELETING
    // - DELETE_FAILED
    // - DELETED: The logical deletion terminal state. The application no longer appears in List or Describe operations.
    shared_ptr<string> status_ {};
    // The ID of the vSwitch used for the actual deployment of the currently running application. If no resources are currently running, this parameter is empty.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the VPC used for the actual deployment of the currently running application. If no resources are currently running, this parameter is empty.
    shared_ptr<string> vpcId_ {};
    // The ID of the workspace.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
