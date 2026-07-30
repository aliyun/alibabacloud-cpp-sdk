// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOAUTHAUTHORIZATIONSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOAUTHAUTHORIZATIONSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GetOAuthAuthorizationSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOAuthAuthorizationSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(authenticationTokenId, authenticationTokenId_);
      DARABONBA_PTR_TO_JSON(authorizationUrl, authorizationUrl_);
      DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(consumerType, consumerType_);
      DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(creatorType, creatorType_);
      DARABONBA_PTR_TO_JSON(credentialProviderIdentifier, credentialProviderIdentifier_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorDescription, errorDescription_);
      DARABONBA_PTR_TO_JSON(expirationTime, expirationTime_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(sessionStatus, sessionStatus_);
      DARABONBA_PTR_TO_JSON(sessionUri, sessionUri_);
    };
    friend void from_json(const Darabonba::Json& j, GetOAuthAuthorizationSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(authenticationTokenId, authenticationTokenId_);
      DARABONBA_PTR_FROM_JSON(authorizationUrl, authorizationUrl_);
      DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(consumerType, consumerType_);
      DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(creatorType, creatorType_);
      DARABONBA_PTR_FROM_JSON(credentialProviderIdentifier, credentialProviderIdentifier_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorDescription, errorDescription_);
      DARABONBA_PTR_FROM_JSON(expirationTime, expirationTime_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(sessionStatus, sessionStatus_);
      DARABONBA_PTR_FROM_JSON(sessionUri, sessionUri_);
    };
    GetOAuthAuthorizationSessionResponseBody() = default ;
    GetOAuthAuthorizationSessionResponseBody(const GetOAuthAuthorizationSessionResponseBody &) = default ;
    GetOAuthAuthorizationSessionResponseBody(GetOAuthAuthorizationSessionResponseBody &&) = default ;
    GetOAuthAuthorizationSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOAuthAuthorizationSessionResponseBody() = default ;
    GetOAuthAuthorizationSessionResponseBody& operator=(const GetOAuthAuthorizationSessionResponseBody &) = default ;
    GetOAuthAuthorizationSessionResponseBody& operator=(GetOAuthAuthorizationSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authenticationTokenId_ == nullptr
        && this->authorizationUrl_ == nullptr && this->consumerId_ == nullptr && this->consumerType_ == nullptr && this->creatorId_ == nullptr && this->creatorType_ == nullptr
        && this->credentialProviderIdentifier_ == nullptr && this->errorCode_ == nullptr && this->errorDescription_ == nullptr && this->expirationTime_ == nullptr && this->instanceId_ == nullptr
        && this->sessionId_ == nullptr && this->sessionStatus_ == nullptr && this->sessionUri_ == nullptr; };
    // authenticationTokenId Field Functions 
    bool hasAuthenticationTokenId() const { return this->authenticationTokenId_ != nullptr;};
    void deleteAuthenticationTokenId() { this->authenticationTokenId_ = nullptr;};
    inline string getAuthenticationTokenId() const { DARABONBA_PTR_GET_DEFAULT(authenticationTokenId_, "") };
    inline GetOAuthAuthorizationSessionResponseBody& setAuthenticationTokenId(string authenticationTokenId) { DARABONBA_PTR_SET_VALUE(authenticationTokenId_, authenticationTokenId) };


    // authorizationUrl Field Functions 
    bool hasAuthorizationUrl() const { return this->authorizationUrl_ != nullptr;};
    void deleteAuthorizationUrl() { this->authorizationUrl_ = nullptr;};
    inline string getAuthorizationUrl() const { DARABONBA_PTR_GET_DEFAULT(authorizationUrl_, "") };
    inline GetOAuthAuthorizationSessionResponseBody& setAuthorizationUrl(string authorizationUrl) { DARABONBA_PTR_SET_VALUE(authorizationUrl_, authorizationUrl) };


    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
    inline GetOAuthAuthorizationSessionResponseBody& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // consumerType Field Functions 
    bool hasConsumerType() const { return this->consumerType_ != nullptr;};
    void deleteConsumerType() { this->consumerType_ = nullptr;};
    inline string getConsumerType() const { DARABONBA_PTR_GET_DEFAULT(consumerType_, "") };
    inline GetOAuthAuthorizationSessionResponseBody& setConsumerType(string consumerType) { DARABONBA_PTR_SET_VALUE(consumerType_, consumerType) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GetOAuthAuthorizationSessionResponseBody& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // creatorType Field Functions 
    bool hasCreatorType() const { return this->creatorType_ != nullptr;};
    void deleteCreatorType() { this->creatorType_ = nullptr;};
    inline string getCreatorType() const { DARABONBA_PTR_GET_DEFAULT(creatorType_, "") };
    inline GetOAuthAuthorizationSessionResponseBody& setCreatorType(string creatorType) { DARABONBA_PTR_SET_VALUE(creatorType_, creatorType) };


    // credentialProviderIdentifier Field Functions 
    bool hasCredentialProviderIdentifier() const { return this->credentialProviderIdentifier_ != nullptr;};
    void deleteCredentialProviderIdentifier() { this->credentialProviderIdentifier_ = nullptr;};
    inline string getCredentialProviderIdentifier() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderIdentifier_, "") };
    inline GetOAuthAuthorizationSessionResponseBody& setCredentialProviderIdentifier(string credentialProviderIdentifier) { DARABONBA_PTR_SET_VALUE(credentialProviderIdentifier_, credentialProviderIdentifier) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetOAuthAuthorizationSessionResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorDescription Field Functions 
    bool hasErrorDescription() const { return this->errorDescription_ != nullptr;};
    void deleteErrorDescription() { this->errorDescription_ = nullptr;};
    inline string getErrorDescription() const { DARABONBA_PTR_GET_DEFAULT(errorDescription_, "") };
    inline GetOAuthAuthorizationSessionResponseBody& setErrorDescription(string errorDescription) { DARABONBA_PTR_SET_VALUE(errorDescription_, errorDescription) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline int64_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
    inline GetOAuthAuthorizationSessionResponseBody& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetOAuthAuthorizationSessionResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetOAuthAuthorizationSessionResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sessionStatus Field Functions 
    bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
    void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
    inline string getSessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, "") };
    inline GetOAuthAuthorizationSessionResponseBody& setSessionStatus(string sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


    // sessionUri Field Functions 
    bool hasSessionUri() const { return this->sessionUri_ != nullptr;};
    void deleteSessionUri() { this->sessionUri_ = nullptr;};
    inline string getSessionUri() const { DARABONBA_PTR_GET_DEFAULT(sessionUri_, "") };
    inline GetOAuthAuthorizationSessionResponseBody& setSessionUri(string sessionUri) { DARABONBA_PTR_SET_VALUE(sessionUri_, sessionUri) };


  protected:
    // The authentication token ID.
    shared_ptr<string> authenticationTokenId_ {};
    // The user authorization URL.
    shared_ptr<string> authorizationUrl_ {};
    // The authentication token consumer ID.
    shared_ptr<string> consumerId_ {};
    // The authentication token consumer type.
    shared_ptr<string> consumerType_ {};
    // The authentication token creator ID.
    shared_ptr<string> creatorId_ {};
    // The authentication token creator type.
    shared_ptr<string> creatorType_ {};
    // The credential provider business identifier.
    shared_ptr<string> credentialProviderIdentifier_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error description.
    shared_ptr<string> errorDescription_ {};
    // The authentication token expiration time. UNIX timestamp in milliseconds.
    shared_ptr<int64_t> expirationTime_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The authorization session ID.
    shared_ptr<string> sessionId_ {};
    // The authorization session status.
    shared_ptr<string> sessionStatus_ {};
    // The authorization session URI.
    shared_ptr<string> sessionUri_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
