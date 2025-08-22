// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class VerifyCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(Credential, credential_);
      DARABONBA_PTR_TO_JSON(CredentialType, credentialType_);
      DARABONBA_PTR_TO_JSON(EncryptedKey, encryptedKey_);
      DARABONBA_PTR_TO_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(Credential, credential_);
      DARABONBA_PTR_FROM_JSON(CredentialType, credentialType_);
      DARABONBA_PTR_FROM_JSON(EncryptedKey, encryptedKey_);
      DARABONBA_PTR_FROM_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    VerifyCredentialRequest() = default ;
    VerifyCredentialRequest(const VerifyCredentialRequest &) = default ;
    VerifyCredentialRequest(VerifyCredentialRequest &&) = default ;
    VerifyCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCredentialRequest() = default ;
    VerifyCredentialRequest& operator=(const VerifyCredentialRequest &) = default ;
    VerifyCredentialRequest& operator=(VerifyCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientId_ != nullptr
        && this->credential_ != nullptr && this->credentialType_ != nullptr && this->encryptedKey_ != nullptr && this->loginToken_ != nullptr && this->officeSiteId_ != nullptr
        && this->regionId_ != nullptr && this->sessionId_ != nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline VerifyCredentialRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // credential Field Functions 
    bool hasCredential() const { return this->credential_ != nullptr;};
    void deleteCredential() { this->credential_ = nullptr;};
    inline string credential() const { DARABONBA_PTR_GET_DEFAULT(credential_, "") };
    inline VerifyCredentialRequest& setCredential(string credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };


    // credentialType Field Functions 
    bool hasCredentialType() const { return this->credentialType_ != nullptr;};
    void deleteCredentialType() { this->credentialType_ = nullptr;};
    inline string credentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
    inline VerifyCredentialRequest& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


    // encryptedKey Field Functions 
    bool hasEncryptedKey() const { return this->encryptedKey_ != nullptr;};
    void deleteEncryptedKey() { this->encryptedKey_ = nullptr;};
    inline string encryptedKey() const { DARABONBA_PTR_GET_DEFAULT(encryptedKey_, "") };
    inline VerifyCredentialRequest& setEncryptedKey(string encryptedKey) { DARABONBA_PTR_SET_VALUE(encryptedKey_, encryptedKey) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string loginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline VerifyCredentialRequest& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline VerifyCredentialRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline VerifyCredentialRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline VerifyCredentialRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clientId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> credential_ = nullptr;
    std::shared_ptr<string> credentialType_ = nullptr;
    std::shared_ptr<string> encryptedKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> loginToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
