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
      DARABONBA_PTR_TO_JSON(ApplicationExtraInfo, applicationExtraInfo_);
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(CreatorUid, creatorUid_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(MainUid, mainUid_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DataAgentApplication& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ApplicationExtraInfo, applicationExtraInfo_);
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(CreatorUid, creatorUid_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(MainUid, mainUid_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
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
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->applicationExtraInfo_ == nullptr && this->creatorName_ == nullptr && this->creatorUid_ == nullptr
        && this->description_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->mainUid_ == nullptr && this->region_ == nullptr
        && this->sessionId_ == nullptr && this->status_ == nullptr && this->workspaceId_ == nullptr; };
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


    // applicationExtraInfo Field Functions 
    bool hasApplicationExtraInfo() const { return this->applicationExtraInfo_ != nullptr;};
    void deleteApplicationExtraInfo() { this->applicationExtraInfo_ = nullptr;};
    inline string getApplicationExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(applicationExtraInfo_, "") };
    inline DataAgentApplication& setApplicationExtraInfo(string applicationExtraInfo) { DARABONBA_PTR_SET_VALUE(applicationExtraInfo_, applicationExtraInfo) };


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


    // mainUid Field Functions 
    bool hasMainUid() const { return this->mainUid_ != nullptr;};
    void deleteMainUid() { this->mainUid_ = nullptr;};
    inline string getMainUid() const { DARABONBA_PTR_GET_DEFAULT(mainUid_, "") };
    inline DataAgentApplication& setMainUid(string mainUid) { DARABONBA_PTR_SET_VALUE(mainUid_, mainUid) };


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
    // The extension information of the application.
    shared_ptr<string> applicationExtraInfo_ {};
    // The name of the application creator.
    shared_ptr<string> creatorName_ {};
    // The UID of the application owner.
    shared_ptr<string> creatorUid_ {};
    // The description of the application. The description can be up to 250 characters in length.
    shared_ptr<string> description_ {};
    // The time when the application was created.
    shared_ptr<string> gmtCreated_ {};
    // The time when the application was last modified.
    shared_ptr<string> gmtModified_ {};
    // The UID of the Alibaba Cloud account.
    shared_ptr<string> mainUid_ {};
    // The region.
    shared_ptr<string> region_ {};
    // The ID of the current or most recently associated session.
    shared_ptr<string> sessionId_ {};
    // The status of the application. Valid values:
    // - REGISTERED
    // - DEPLOYING
    // - DEPLOYED
    shared_ptr<string> status_ {};
    // The ID of the workspace.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
