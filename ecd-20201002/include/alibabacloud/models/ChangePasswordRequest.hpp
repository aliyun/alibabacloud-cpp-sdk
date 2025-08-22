// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class ChangePasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangePasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_TO_JSON(NewPassword, newPassword_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OldPassword, oldPassword_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangePasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_FROM_JSON(NewPassword, newPassword_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OldPassword, oldPassword_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    ChangePasswordRequest() = default ;
    ChangePasswordRequest(const ChangePasswordRequest &) = default ;
    ChangePasswordRequest(ChangePasswordRequest &&) = default ;
    ChangePasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangePasswordRequest() = default ;
    ChangePasswordRequest& operator=(const ChangePasswordRequest &) = default ;
    ChangePasswordRequest& operator=(ChangePasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientId_ != nullptr
        && this->endUserId_ != nullptr && this->loginToken_ != nullptr && this->newPassword_ != nullptr && this->officeSiteId_ != nullptr && this->oldPassword_ != nullptr
        && this->regionId_ != nullptr && this->sessionId_ != nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline ChangePasswordRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline ChangePasswordRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string loginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline ChangePasswordRequest& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // newPassword Field Functions 
    bool hasNewPassword() const { return this->newPassword_ != nullptr;};
    void deleteNewPassword() { this->newPassword_ = nullptr;};
    inline string newPassword() const { DARABONBA_PTR_GET_DEFAULT(newPassword_, "") };
    inline ChangePasswordRequest& setNewPassword(string newPassword) { DARABONBA_PTR_SET_VALUE(newPassword_, newPassword) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ChangePasswordRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // oldPassword Field Functions 
    bool hasOldPassword() const { return this->oldPassword_ != nullptr;};
    void deleteOldPassword() { this->oldPassword_ = nullptr;};
    inline string oldPassword() const { DARABONBA_PTR_GET_DEFAULT(oldPassword_, "") };
    inline ChangePasswordRequest& setOldPassword(string oldPassword) { DARABONBA_PTR_SET_VALUE(oldPassword_, oldPassword) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ChangePasswordRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ChangePasswordRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // The client ID. The system generates a unique ID for each client.
    // 
    // This parameter is required.
    std::shared_ptr<string> clientId_ = nullptr;
    // The user ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The logon token.
    // 
    // This parameter is required.
    std::shared_ptr<string> loginToken_ = nullptr;
    // The new password.
    // 
    // This parameter is required.
    std::shared_ptr<string> newPassword_ = nullptr;
    // The office network ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The current password.
    // 
    // This parameter is required.
    std::shared_ptr<string> oldPassword_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The session ID.
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
