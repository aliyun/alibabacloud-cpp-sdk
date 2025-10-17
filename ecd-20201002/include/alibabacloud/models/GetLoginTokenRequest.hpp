// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class GetLoginTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthenticationCode, authenticationCode_);
      DARABONBA_PTR_TO_JSON(AvailableFeatures, availableFeatures_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientName, clientName_);
      DARABONBA_PTR_TO_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(CurrentStage, currentStage_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(KeepAlive, keepAlive_);
      DARABONBA_PTR_TO_JSON(KeepAliveToken, keepAliveToken_);
      DARABONBA_PTR_TO_JSON(NewPassword, newPassword_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OldPassword, oldPassword_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TokenCode, tokenCode_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoginTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthenticationCode, authenticationCode_);
      DARABONBA_PTR_FROM_JSON(AvailableFeatures, availableFeatures_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
      DARABONBA_PTR_FROM_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(CurrentStage, currentStage_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(KeepAlive, keepAlive_);
      DARABONBA_PTR_FROM_JSON(KeepAliveToken, keepAliveToken_);
      DARABONBA_PTR_FROM_JSON(NewPassword, newPassword_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OldPassword, oldPassword_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TokenCode, tokenCode_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetLoginTokenRequest() = default ;
    GetLoginTokenRequest(const GetLoginTokenRequest &) = default ;
    GetLoginTokenRequest(GetLoginTokenRequest &&) = default ;
    GetLoginTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginTokenRequest() = default ;
    GetLoginTokenRequest& operator=(const GetLoginTokenRequest &) = default ;
    GetLoginTokenRequest& operator=(GetLoginTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authenticationCode_ == nullptr
        && return this->availableFeatures_ == nullptr && return this->clientId_ == nullptr && return this->clientName_ == nullptr && return this->clientOS_ == nullptr && return this->clientType_ == nullptr
        && return this->clientVersion_ == nullptr && return this->currentStage_ == nullptr && return this->directoryId_ == nullptr && return this->endUserId_ == nullptr && return this->keepAlive_ == nullptr
        && return this->keepAliveToken_ == nullptr && return this->newPassword_ == nullptr && return this->officeSiteId_ == nullptr && return this->oldPassword_ == nullptr && return this->password_ == nullptr
        && return this->regionId_ == nullptr && return this->sessionId_ == nullptr && return this->tokenCode_ == nullptr && return this->uuid_ == nullptr; };
    // authenticationCode Field Functions 
    bool hasAuthenticationCode() const { return this->authenticationCode_ != nullptr;};
    void deleteAuthenticationCode() { this->authenticationCode_ = nullptr;};
    inline string authenticationCode() const { DARABONBA_PTR_GET_DEFAULT(authenticationCode_, "") };
    inline GetLoginTokenRequest& setAuthenticationCode(string authenticationCode) { DARABONBA_PTR_SET_VALUE(authenticationCode_, authenticationCode) };


    // availableFeatures Field Functions 
    bool hasAvailableFeatures() const { return this->availableFeatures_ != nullptr;};
    void deleteAvailableFeatures() { this->availableFeatures_ = nullptr;};
    inline const map<string, string> & availableFeatures() const { DARABONBA_PTR_GET_CONST(availableFeatures_, map<string, string>) };
    inline map<string, string> availableFeatures() { DARABONBA_PTR_GET(availableFeatures_, map<string, string>) };
    inline GetLoginTokenRequest& setAvailableFeatures(const map<string, string> & availableFeatures) { DARABONBA_PTR_SET_VALUE(availableFeatures_, availableFeatures) };
    inline GetLoginTokenRequest& setAvailableFeatures(map<string, string> && availableFeatures) { DARABONBA_PTR_SET_RVALUE(availableFeatures_, availableFeatures) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline GetLoginTokenRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientName Field Functions 
    bool hasClientName() const { return this->clientName_ != nullptr;};
    void deleteClientName() { this->clientName_ = nullptr;};
    inline string clientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
    inline GetLoginTokenRequest& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


    // clientOS Field Functions 
    bool hasClientOS() const { return this->clientOS_ != nullptr;};
    void deleteClientOS() { this->clientOS_ = nullptr;};
    inline string clientOS() const { DARABONBA_PTR_GET_DEFAULT(clientOS_, "") };
    inline GetLoginTokenRequest& setClientOS(string clientOS) { DARABONBA_PTR_SET_VALUE(clientOS_, clientOS) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string clientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline GetLoginTokenRequest& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string clientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline GetLoginTokenRequest& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // currentStage Field Functions 
    bool hasCurrentStage() const { return this->currentStage_ != nullptr;};
    void deleteCurrentStage() { this->currentStage_ = nullptr;};
    inline string currentStage() const { DARABONBA_PTR_GET_DEFAULT(currentStage_, "") };
    inline GetLoginTokenRequest& setCurrentStage(string currentStage) { DARABONBA_PTR_SET_VALUE(currentStage_, currentStage) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline GetLoginTokenRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline GetLoginTokenRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // keepAlive Field Functions 
    bool hasKeepAlive() const { return this->keepAlive_ != nullptr;};
    void deleteKeepAlive() { this->keepAlive_ = nullptr;};
    inline bool keepAlive() const { DARABONBA_PTR_GET_DEFAULT(keepAlive_, false) };
    inline GetLoginTokenRequest& setKeepAlive(bool keepAlive) { DARABONBA_PTR_SET_VALUE(keepAlive_, keepAlive) };


    // keepAliveToken Field Functions 
    bool hasKeepAliveToken() const { return this->keepAliveToken_ != nullptr;};
    void deleteKeepAliveToken() { this->keepAliveToken_ = nullptr;};
    inline string keepAliveToken() const { DARABONBA_PTR_GET_DEFAULT(keepAliveToken_, "") };
    inline GetLoginTokenRequest& setKeepAliveToken(string keepAliveToken) { DARABONBA_PTR_SET_VALUE(keepAliveToken_, keepAliveToken) };


    // newPassword Field Functions 
    bool hasNewPassword() const { return this->newPassword_ != nullptr;};
    void deleteNewPassword() { this->newPassword_ = nullptr;};
    inline string newPassword() const { DARABONBA_PTR_GET_DEFAULT(newPassword_, "") };
    inline GetLoginTokenRequest& setNewPassword(string newPassword) { DARABONBA_PTR_SET_VALUE(newPassword_, newPassword) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline GetLoginTokenRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // oldPassword Field Functions 
    bool hasOldPassword() const { return this->oldPassword_ != nullptr;};
    void deleteOldPassword() { this->oldPassword_ = nullptr;};
    inline string oldPassword() const { DARABONBA_PTR_GET_DEFAULT(oldPassword_, "") };
    inline GetLoginTokenRequest& setOldPassword(string oldPassword) { DARABONBA_PTR_SET_VALUE(oldPassword_, oldPassword) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline GetLoginTokenRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetLoginTokenRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetLoginTokenRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // tokenCode Field Functions 
    bool hasTokenCode() const { return this->tokenCode_ != nullptr;};
    void deleteTokenCode() { this->tokenCode_ = nullptr;};
    inline string tokenCode() const { DARABONBA_PTR_GET_DEFAULT(tokenCode_, "") };
    inline GetLoginTokenRequest& setTokenCode(string tokenCode) { DARABONBA_PTR_SET_VALUE(tokenCode_, tokenCode) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetLoginTokenRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The verification code that is generated by the virtual MFA device. This parameter is required if you set `CurrentStage` to `MFAVerify`.
    std::shared_ptr<string> authenticationCode_ = nullptr;
    std::shared_ptr<map<string, string>> availableFeatures_ = nullptr;
    // The ID of the Alibaba Cloud Workspace client. The system generates a unique ID for each client.
    // 
    // This parameter is required.
    std::shared_ptr<string> clientId_ = nullptr;
    std::shared_ptr<string> clientName_ = nullptr;
    // The operating system (OS) of the device that runs an Alibaba Cloud Workspace client.
    std::shared_ptr<string> clientOS_ = nullptr;
    // The type of Alibaba Cloud Workspace clients.
    // 
    // Valid values:
    // 
    // *   HTML5: web client.
    // 
    // *   WINDOWS: Windows client.
    // 
    // *   MACOS: macOS client.
    // 
    // *   IOS: iOS client.
    // 
    // *   ANDROID: Android client.
    std::shared_ptr<string> clientType_ = nullptr;
    // The version of the client. When you use an Alibaba Cloud Workspace client, you can view the client version in the **About** dialog box on the client logon page.
    std::shared_ptr<string> clientVersion_ = nullptr;
    // The logon authentication stage. Valid values:
    // 
    // *   `ADPassword`: the stage to verify the identity of the Active Directory (AD) user. You must specify the value when the system verifies the identity of a convenience account or an AD account.
    // *   `MFABind: the stage to bind a virtual multi-factor authentication (MFA) device.`
    // *   `MFAVerify: the stage to verify the verification code that is generated by the virtual MFA device.`
    // *   `TokenVerify`: the stage to perform two-factor authentication on an Alibaba Cloud Workspace client (hereinafter referred to as the client).
    // *   `ChangePassword`: the stage to change the password of the user.
    // *   `KeepAliveVerify`: the stage to obtain LoginToken if KeepAliveToken is valid.
    std::shared_ptr<string> currentStage_ = nullptr;
    // The office network ID. This parameter has the same meaning as `OfficeSiteId`. We recommend that you replace `DirectoryId` with `OfficeSiteId`. You can specify a value for `DirectoryId` or `OfficeSiteId`.
    std::shared_ptr<string> directoryId_ = nullptr;
    // The name of the convenience user or the AD user. This parameter is required if you set `CurrentStage` to `ADPassword`.
    std::shared_ptr<string> endUserId_ = nullptr;
    // Specifies whether to keep the user logged on to the client. 
    // Valid values:
    // * null: Default value. Do not keep the user logged on to the client.
    // * true: Keep the user logged on to the client.
    // * false:  Do not keep the user logged on to the client.
    std::shared_ptr<bool> keepAlive_ = nullptr;
    // The token to keep logging on to an Alibaba Cloud Workspace client. When an end user logs on to the Alibaba Cloud Workspace client and select Auto Sign-in, `KeepAliveToken` is returned after you call this operation. Within the valid period of the returned token``, you can call the `GetLoginToken` operation and set `CurrentStage` to `KeepAliveVerify`. Then, you can obtain LoginToken. If you set `CurrentStage` to `KeepAliveVerify`, `KeepAliveToken` is required.
    std::shared_ptr<string> keepAliveToken_ = nullptr;
    // The new password. This parameter is required if you set `CurrentStage` to `ChangePassword`.
    std::shared_ptr<string> newPassword_ = nullptr;
    // The office network ID.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The current password. This parameter is required if you set `CurrentStage` to `ChangePassword`.
    std::shared_ptr<string> oldPassword_ = nullptr;
    // The password of the convenience user or the AD user. This parameter is required if you set `CurrentStage` to `ADPassword`.
    std::shared_ptr<string> password_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the regions supported by EDS.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the session.
    // 
    // *   If the virtual multi-factor authentication (MFA) device is not bound or two-factor authentication is not enabled for the client, you do not need to specify a value for `SessionId`.
    // *   If the virtual MFA device is not bound or two-factor authentication is enabled for the client, you must specify a value for `SessionId` to verify the user identity after you specify a value for `ADPassword`. The value of the `SessionId` parameter is returned only if the CurrentStage parameter is set to `ADPassword` when you call the `GetLoginToken` operation.
    std::shared_ptr<string> sessionId_ = nullptr;
    // If two-factor authentication is enabled for Alibaba Cloud Workspace terminals in the EDS console and the system detects that the current logon user is exposed to risks, the system sends a verification code to the email address of the user. This parameter is required if you set `CurrentStage` to `TokenVerify`.
    std::shared_ptr<string> tokenCode_ = nullptr;
    // The unique identifier of the client. When you use an Alibaba Cloud Workspace client, you can view the client version in the **About** dialog box on the client logon page.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
