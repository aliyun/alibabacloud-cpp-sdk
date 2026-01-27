// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPROVEFOTAUPDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPROVEFOTAUPDATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class ApproveFotaUpdateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApproveFotaUpdateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TargetStatus, targetStatus_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ApproveFotaUpdateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TargetStatus, targetStatus_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ApproveFotaUpdateRequest() = default ;
    ApproveFotaUpdateRequest(const ApproveFotaUpdateRequest &) = default ;
    ApproveFotaUpdateRequest(ApproveFotaUpdateRequest &&) = default ;
    ApproveFotaUpdateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApproveFotaUpdateRequest() = default ;
    ApproveFotaUpdateRequest& operator=(const ApproveFotaUpdateRequest &) = default ;
    ApproveFotaUpdateRequest& operator=(ApproveFotaUpdateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appVersion_ == nullptr
        && this->clientId_ == nullptr && this->desktopId_ == nullptr && this->loginToken_ == nullptr && this->regionId_ == nullptr && this->sessionId_ == nullptr
        && this->targetStatus_ == nullptr && this->uuid_ == nullptr; };
    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline ApproveFotaUpdateRequest& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline ApproveFotaUpdateRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline ApproveFotaUpdateRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string getLoginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline ApproveFotaUpdateRequest& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ApproveFotaUpdateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ApproveFotaUpdateRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // targetStatus Field Functions 
    bool hasTargetStatus() const { return this->targetStatus_ != nullptr;};
    void deleteTargetStatus() { this->targetStatus_ = nullptr;};
    inline string getTargetStatus() const { DARABONBA_PTR_GET_DEFAULT(targetStatus_, "") };
    inline ApproveFotaUpdateRequest& setTargetStatus(string targetStatus) { DARABONBA_PTR_SET_VALUE(targetStatus_, targetStatus) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ApproveFotaUpdateRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The application version.
    // 
    // This parameter is required.
    shared_ptr<string> appVersion_ {};
    // The client ID. The system generates a unique ID for each client.
    // 
    // This parameter is required.
    shared_ptr<string> clientId_ {};
    // The cloud computer ID.
    shared_ptr<string> desktopId_ {};
    // The logon token.
    // 
    // This parameter is required.
    shared_ptr<string> loginToken_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The session ID.
    shared_ptr<string> sessionId_ {};
    // The state of the cloud computer after the OTA update.
    // 
    // >  This parameter is not publicly available. After the OTA update is complete, the state of the cloud computer changes to `RUNNING`.
    // 
    // *   Set the value to running.
    shared_ptr<string> targetStatus_ {};
    // The unique identifier of the client. To view the unique identifier of an Alibaba Cloud Workspace client, go to the client logon page and click on "About."
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
