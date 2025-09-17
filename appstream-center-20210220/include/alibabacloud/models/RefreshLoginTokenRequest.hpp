// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHLOGINTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHLOGINTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210220
{
namespace Models
{
  class RefreshLoginTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshLoginTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(LoginIdentifier, loginIdentifier_);
      DARABONBA_PTR_TO_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(ProfileRegion, profileRegion_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshLoginTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(LoginIdentifier, loginIdentifier_);
      DARABONBA_PTR_FROM_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(ProfileRegion, profileRegion_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    RefreshLoginTokenRequest() = default ;
    RefreshLoginTokenRequest(const RefreshLoginTokenRequest &) = default ;
    RefreshLoginTokenRequest(RefreshLoginTokenRequest &&) = default ;
    RefreshLoginTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshLoginTokenRequest() = default ;
    RefreshLoginTokenRequest& operator=(const RefreshLoginTokenRequest &) = default ;
    RefreshLoginTokenRequest& operator=(RefreshLoginTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientId_ != nullptr
        && this->clientType_ != nullptr && this->endUserId_ != nullptr && this->loginIdentifier_ != nullptr && this->loginToken_ != nullptr && this->officeSiteId_ != nullptr
        && this->profileRegion_ != nullptr && this->sessionId_ != nullptr && this->uuid_ != nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline RefreshLoginTokenRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string clientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline RefreshLoginTokenRequest& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline RefreshLoginTokenRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // loginIdentifier Field Functions 
    bool hasLoginIdentifier() const { return this->loginIdentifier_ != nullptr;};
    void deleteLoginIdentifier() { this->loginIdentifier_ = nullptr;};
    inline string loginIdentifier() const { DARABONBA_PTR_GET_DEFAULT(loginIdentifier_, "") };
    inline RefreshLoginTokenRequest& setLoginIdentifier(string loginIdentifier) { DARABONBA_PTR_SET_VALUE(loginIdentifier_, loginIdentifier) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string loginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline RefreshLoginTokenRequest& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline RefreshLoginTokenRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // profileRegion Field Functions 
    bool hasProfileRegion() const { return this->profileRegion_ != nullptr;};
    void deleteProfileRegion() { this->profileRegion_ = nullptr;};
    inline string profileRegion() const { DARABONBA_PTR_GET_DEFAULT(profileRegion_, "") };
    inline RefreshLoginTokenRequest& setProfileRegion(string profileRegion) { DARABONBA_PTR_SET_VALUE(profileRegion_, profileRegion) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RefreshLoginTokenRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline RefreshLoginTokenRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clientId_ = nullptr;
    std::shared_ptr<string> clientType_ = nullptr;
    std::shared_ptr<string> endUserId_ = nullptr;
    std::shared_ptr<string> loginIdentifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> loginToken_ = nullptr;
    std::shared_ptr<string> officeSiteId_ = nullptr;
    std::shared_ptr<string> profileRegion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210220
#endif
