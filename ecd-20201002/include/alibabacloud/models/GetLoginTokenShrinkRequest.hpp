// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINTOKENSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINTOKENSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class GetLoginTokenShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginTokenShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthenticationCode, authenticationCode_);
      DARABONBA_PTR_TO_JSON(AvailableFeatures, availableFeaturesShrink_);
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
    friend void from_json(const Darabonba::Json& j, GetLoginTokenShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthenticationCode, authenticationCode_);
      DARABONBA_PTR_FROM_JSON(AvailableFeatures, availableFeaturesShrink_);
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
    GetLoginTokenShrinkRequest() = default ;
    GetLoginTokenShrinkRequest(const GetLoginTokenShrinkRequest &) = default ;
    GetLoginTokenShrinkRequest(GetLoginTokenShrinkRequest &&) = default ;
    GetLoginTokenShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginTokenShrinkRequest() = default ;
    GetLoginTokenShrinkRequest& operator=(const GetLoginTokenShrinkRequest &) = default ;
    GetLoginTokenShrinkRequest& operator=(GetLoginTokenShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authenticationCode_ == nullptr
        && this->availableFeaturesShrink_ == nullptr && this->clientId_ == nullptr && this->clientName_ == nullptr && this->clientOS_ == nullptr && this->clientType_ == nullptr
        && this->clientVersion_ == nullptr && this->currentStage_ == nullptr && this->directoryId_ == nullptr && this->endUserId_ == nullptr && this->keepAlive_ == nullptr
        && this->keepAliveToken_ == nullptr && this->newPassword_ == nullptr && this->officeSiteId_ == nullptr && this->oldPassword_ == nullptr && this->password_ == nullptr
        && this->regionId_ == nullptr && this->sessionId_ == nullptr && this->tokenCode_ == nullptr && this->uuid_ == nullptr; };
    // authenticationCode Field Functions 
    bool hasAuthenticationCode() const { return this->authenticationCode_ != nullptr;};
    void deleteAuthenticationCode() { this->authenticationCode_ = nullptr;};
    inline string getAuthenticationCode() const { DARABONBA_PTR_GET_DEFAULT(authenticationCode_, "") };
    inline GetLoginTokenShrinkRequest& setAuthenticationCode(string authenticationCode) { DARABONBA_PTR_SET_VALUE(authenticationCode_, authenticationCode) };


    // availableFeaturesShrink Field Functions 
    bool hasAvailableFeaturesShrink() const { return this->availableFeaturesShrink_ != nullptr;};
    void deleteAvailableFeaturesShrink() { this->availableFeaturesShrink_ = nullptr;};
    inline string getAvailableFeaturesShrink() const { DARABONBA_PTR_GET_DEFAULT(availableFeaturesShrink_, "") };
    inline GetLoginTokenShrinkRequest& setAvailableFeaturesShrink(string availableFeaturesShrink) { DARABONBA_PTR_SET_VALUE(availableFeaturesShrink_, availableFeaturesShrink) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline GetLoginTokenShrinkRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientName Field Functions 
    bool hasClientName() const { return this->clientName_ != nullptr;};
    void deleteClientName() { this->clientName_ = nullptr;};
    inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
    inline GetLoginTokenShrinkRequest& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


    // clientOS Field Functions 
    bool hasClientOS() const { return this->clientOS_ != nullptr;};
    void deleteClientOS() { this->clientOS_ = nullptr;};
    inline string getClientOS() const { DARABONBA_PTR_GET_DEFAULT(clientOS_, "") };
    inline GetLoginTokenShrinkRequest& setClientOS(string clientOS) { DARABONBA_PTR_SET_VALUE(clientOS_, clientOS) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline GetLoginTokenShrinkRequest& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline GetLoginTokenShrinkRequest& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // currentStage Field Functions 
    bool hasCurrentStage() const { return this->currentStage_ != nullptr;};
    void deleteCurrentStage() { this->currentStage_ = nullptr;};
    inline string getCurrentStage() const { DARABONBA_PTR_GET_DEFAULT(currentStage_, "") };
    inline GetLoginTokenShrinkRequest& setCurrentStage(string currentStage) { DARABONBA_PTR_SET_VALUE(currentStage_, currentStage) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline GetLoginTokenShrinkRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline GetLoginTokenShrinkRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // keepAlive Field Functions 
    bool hasKeepAlive() const { return this->keepAlive_ != nullptr;};
    void deleteKeepAlive() { this->keepAlive_ = nullptr;};
    inline bool getKeepAlive() const { DARABONBA_PTR_GET_DEFAULT(keepAlive_, false) };
    inline GetLoginTokenShrinkRequest& setKeepAlive(bool keepAlive) { DARABONBA_PTR_SET_VALUE(keepAlive_, keepAlive) };


    // keepAliveToken Field Functions 
    bool hasKeepAliveToken() const { return this->keepAliveToken_ != nullptr;};
    void deleteKeepAliveToken() { this->keepAliveToken_ = nullptr;};
    inline string getKeepAliveToken() const { DARABONBA_PTR_GET_DEFAULT(keepAliveToken_, "") };
    inline GetLoginTokenShrinkRequest& setKeepAliveToken(string keepAliveToken) { DARABONBA_PTR_SET_VALUE(keepAliveToken_, keepAliveToken) };


    // newPassword Field Functions 
    bool hasNewPassword() const { return this->newPassword_ != nullptr;};
    void deleteNewPassword() { this->newPassword_ = nullptr;};
    inline string getNewPassword() const { DARABONBA_PTR_GET_DEFAULT(newPassword_, "") };
    inline GetLoginTokenShrinkRequest& setNewPassword(string newPassword) { DARABONBA_PTR_SET_VALUE(newPassword_, newPassword) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline GetLoginTokenShrinkRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // oldPassword Field Functions 
    bool hasOldPassword() const { return this->oldPassword_ != nullptr;};
    void deleteOldPassword() { this->oldPassword_ = nullptr;};
    inline string getOldPassword() const { DARABONBA_PTR_GET_DEFAULT(oldPassword_, "") };
    inline GetLoginTokenShrinkRequest& setOldPassword(string oldPassword) { DARABONBA_PTR_SET_VALUE(oldPassword_, oldPassword) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline GetLoginTokenShrinkRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetLoginTokenShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetLoginTokenShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // tokenCode Field Functions 
    bool hasTokenCode() const { return this->tokenCode_ != nullptr;};
    void deleteTokenCode() { this->tokenCode_ = nullptr;};
    inline string getTokenCode() const { DARABONBA_PTR_GET_DEFAULT(tokenCode_, "") };
    inline GetLoginTokenShrinkRequest& setTokenCode(string tokenCode) { DARABONBA_PTR_SET_VALUE(tokenCode_, tokenCode) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetLoginTokenShrinkRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The security code generated by the virtual MFA device. This parameter is required when `CurrentStage` is set to `MFAVerify`.
    shared_ptr<string> authenticationCode_ {};
    shared_ptr<string> availableFeaturesShrink_ {};
    // The unique ID generated by the client.
    // 
    // This parameter is required.
    shared_ptr<string> clientId_ {};
    shared_ptr<string> clientName_ {};
    // The operating system of the device on which the client runs.
    shared_ptr<string> clientOS_ {};
    // The type of the Elastic Desktop Service software client.
    shared_ptr<string> clientType_ {};
    // The client version. If you use the Elastic Desktop Service client, you can view this parameter in the **About** dialog box on the client logon page.
    shared_ptr<string> clientVersion_ {};
    // The current logon authentication stage. The stages are as follows:
    // 
    // - `ADPassword`: verifies user information. Specify this value when authenticating with the credentials of a convenience account or an AD account.
    // - `MFABind`: binds a virtual MFA device.
    // - `MFAVerify`: verifies the security code generated by the virtual MFA device.
    // - `TokenVerify`: performs client secondary authentication.
    // - `ChangePassword`: changes the user password.
    // - `KeepAliveVerify`: exchanges a valid KeepAliveToken for a LoginToken.
    shared_ptr<string> currentStage_ {};
    // The office network ID, which has the same meaning as `OfficeSiteId`. We recommend that you stop using `DirectoryId` and use `OfficeSiteId` instead. You can specify only one of `DirectoryId` and `OfficeSiteId`, not both.
    shared_ptr<string> directoryId_ {};
    // The username of the convenience user or AD user. This parameter is required when `CurrentStage` is set to `ADPassword`.
    shared_ptr<string> endUserId_ {};
    // Specifies whether to keep the logon session alive.
    shared_ptr<bool> keepAlive_ {};
    // The token used to keep the logon session alive. After a successful logon with the keep-alive option enabled, the operation returns a `KeepAliveToken`. While the `KeepAliveToken` is valid, you can call the `GetLoginToken` operation with `CurrentStage` set to `KeepAliveVerify` to exchange it for a logon credential (LoginToken). This parameter is required when `CurrentStage` is set to `KeepAliveVerify`.
    shared_ptr<string> keepAliveToken_ {};
    // The new password. This parameter is required when `CurrentStage` is set to `ChangePassword`.
    shared_ptr<string> newPassword_ {};
    // The office network ID.
    shared_ptr<string> officeSiteId_ {};
    // The old password. This parameter is required when `CurrentStage` is set to `ChangePassword`.
    shared_ptr<string> oldPassword_ {};
    // The password of the convenience user or AD user. This parameter is required when `CurrentStage` is set to `ADPassword`.
    shared_ptr<string> password_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The session ID for logon.
    // 
    // - If no virtual MFA device is bound or client secondary authentication is not enabled, you do not need to specify `SessionId`.
    // - If a virtual MFA device is bound or client secondary authentication is enabled, you must specify `SessionId` for the authentication stages after `ADPassword`. You can obtain `SessionId` from the response of the convenience account verification (when the `GetLoginToken` request is in the `ADPassword` stage).
    shared_ptr<string> sessionId_ {};
    // If client secondary authentication is enabled in the Elastic Desktop Service console and the current logon user is identified as risky, a secondary authentication verification code is sent to the end user\\"s email address. This parameter is required when `CurrentStage` is set to `TokenVerify`.
    shared_ptr<string> tokenCode_ {};
    // The unique identifier of the client. If you use the Elastic Desktop Service client, you can view this parameter in the **About** dialog box on the client logon page.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
