// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHOAUTHAUTHENTICATIONTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FETCHOAUTHAUTHENTICATIONTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class FetchOAuthAuthenticationTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchOAuthAuthenticationTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(authenticationTokenId, authenticationTokenId_);
      DARABONBA_PTR_TO_JSON(authenticationTokenType, authenticationTokenType_);
      DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(consumerType, consumerType_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(creatorType, creatorType_);
      DARABONBA_PTR_TO_JSON(credentialProviderId, credentialProviderId_);
      DARABONBA_PTR_TO_JSON(expirationTime, expirationTime_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(oauthAccessTokenContent, oauthAccessTokenContent_);
      DARABONBA_PTR_TO_JSON(revoked, revoked_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, FetchOAuthAuthenticationTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(authenticationTokenId, authenticationTokenId_);
      DARABONBA_PTR_FROM_JSON(authenticationTokenType, authenticationTokenType_);
      DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(consumerType, consumerType_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(creatorType, creatorType_);
      DARABONBA_PTR_FROM_JSON(credentialProviderId, credentialProviderId_);
      DARABONBA_PTR_FROM_JSON(expirationTime, expirationTime_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(oauthAccessTokenContent, oauthAccessTokenContent_);
      DARABONBA_PTR_FROM_JSON(revoked, revoked_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    FetchOAuthAuthenticationTokenResponseBody() = default ;
    FetchOAuthAuthenticationTokenResponseBody(const FetchOAuthAuthenticationTokenResponseBody &) = default ;
    FetchOAuthAuthenticationTokenResponseBody(FetchOAuthAuthenticationTokenResponseBody &&) = default ;
    FetchOAuthAuthenticationTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchOAuthAuthenticationTokenResponseBody() = default ;
    FetchOAuthAuthenticationTokenResponseBody& operator=(const FetchOAuthAuthenticationTokenResponseBody &) = default ;
    FetchOAuthAuthenticationTokenResponseBody& operator=(FetchOAuthAuthenticationTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OauthAccessTokenContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OauthAccessTokenContent& obj) { 
        DARABONBA_PTR_TO_JSON(accessTokenValue, accessTokenValue_);
        DARABONBA_PTR_TO_JSON(scope, scope_);
        DARABONBA_PTR_TO_JSON(tokenType, tokenType_);
      };
      friend void from_json(const Darabonba::Json& j, OauthAccessTokenContent& obj) { 
        DARABONBA_PTR_FROM_JSON(accessTokenValue, accessTokenValue_);
        DARABONBA_PTR_FROM_JSON(scope, scope_);
        DARABONBA_PTR_FROM_JSON(tokenType, tokenType_);
      };
      OauthAccessTokenContent() = default ;
      OauthAccessTokenContent(const OauthAccessTokenContent &) = default ;
      OauthAccessTokenContent(OauthAccessTokenContent &&) = default ;
      OauthAccessTokenContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OauthAccessTokenContent() = default ;
      OauthAccessTokenContent& operator=(const OauthAccessTokenContent &) = default ;
      OauthAccessTokenContent& operator=(OauthAccessTokenContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessTokenValue_ == nullptr
        && this->scope_ == nullptr && this->tokenType_ == nullptr; };
      // accessTokenValue Field Functions 
      bool hasAccessTokenValue() const { return this->accessTokenValue_ != nullptr;};
      void deleteAccessTokenValue() { this->accessTokenValue_ = nullptr;};
      inline string getAccessTokenValue() const { DARABONBA_PTR_GET_DEFAULT(accessTokenValue_, "") };
      inline OauthAccessTokenContent& setAccessTokenValue(string accessTokenValue) { DARABONBA_PTR_SET_VALUE(accessTokenValue_, accessTokenValue) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline OauthAccessTokenContent& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // tokenType Field Functions 
      bool hasTokenType() const { return this->tokenType_ != nullptr;};
      void deleteTokenType() { this->tokenType_ = nullptr;};
      inline string getTokenType() const { DARABONBA_PTR_GET_DEFAULT(tokenType_, "") };
      inline OauthAccessTokenContent& setTokenType(string tokenType) { DARABONBA_PTR_SET_VALUE(tokenType_, tokenType) };


    protected:
      shared_ptr<string> accessTokenValue_ {};
      shared_ptr<string> scope_ {};
      shared_ptr<string> tokenType_ {};
    };

    virtual bool empty() const override { return this->authenticationTokenId_ == nullptr
        && this->authenticationTokenType_ == nullptr && this->consumerId_ == nullptr && this->consumerType_ == nullptr && this->createTime_ == nullptr && this->creatorId_ == nullptr
        && this->creatorType_ == nullptr && this->credentialProviderId_ == nullptr && this->expirationTime_ == nullptr && this->instanceId_ == nullptr && this->oauthAccessTokenContent_ == nullptr
        && this->revoked_ == nullptr && this->updateTime_ == nullptr; };
    // authenticationTokenId Field Functions 
    bool hasAuthenticationTokenId() const { return this->authenticationTokenId_ != nullptr;};
    void deleteAuthenticationTokenId() { this->authenticationTokenId_ = nullptr;};
    inline string getAuthenticationTokenId() const { DARABONBA_PTR_GET_DEFAULT(authenticationTokenId_, "") };
    inline FetchOAuthAuthenticationTokenResponseBody& setAuthenticationTokenId(string authenticationTokenId) { DARABONBA_PTR_SET_VALUE(authenticationTokenId_, authenticationTokenId) };


    // authenticationTokenType Field Functions 
    bool hasAuthenticationTokenType() const { return this->authenticationTokenType_ != nullptr;};
    void deleteAuthenticationTokenType() { this->authenticationTokenType_ = nullptr;};
    inline string getAuthenticationTokenType() const { DARABONBA_PTR_GET_DEFAULT(authenticationTokenType_, "") };
    inline FetchOAuthAuthenticationTokenResponseBody& setAuthenticationTokenType(string authenticationTokenType) { DARABONBA_PTR_SET_VALUE(authenticationTokenType_, authenticationTokenType) };


    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
    inline FetchOAuthAuthenticationTokenResponseBody& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // consumerType Field Functions 
    bool hasConsumerType() const { return this->consumerType_ != nullptr;};
    void deleteConsumerType() { this->consumerType_ = nullptr;};
    inline string getConsumerType() const { DARABONBA_PTR_GET_DEFAULT(consumerType_, "") };
    inline FetchOAuthAuthenticationTokenResponseBody& setConsumerType(string consumerType) { DARABONBA_PTR_SET_VALUE(consumerType_, consumerType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline FetchOAuthAuthenticationTokenResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline FetchOAuthAuthenticationTokenResponseBody& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // creatorType Field Functions 
    bool hasCreatorType() const { return this->creatorType_ != nullptr;};
    void deleteCreatorType() { this->creatorType_ = nullptr;};
    inline string getCreatorType() const { DARABONBA_PTR_GET_DEFAULT(creatorType_, "") };
    inline FetchOAuthAuthenticationTokenResponseBody& setCreatorType(string creatorType) { DARABONBA_PTR_SET_VALUE(creatorType_, creatorType) };


    // credentialProviderId Field Functions 
    bool hasCredentialProviderId() const { return this->credentialProviderId_ != nullptr;};
    void deleteCredentialProviderId() { this->credentialProviderId_ = nullptr;};
    inline string getCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderId_, "") };
    inline FetchOAuthAuthenticationTokenResponseBody& setCredentialProviderId(string credentialProviderId) { DARABONBA_PTR_SET_VALUE(credentialProviderId_, credentialProviderId) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline int64_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
    inline FetchOAuthAuthenticationTokenResponseBody& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline FetchOAuthAuthenticationTokenResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // oauthAccessTokenContent Field Functions 
    bool hasOauthAccessTokenContent() const { return this->oauthAccessTokenContent_ != nullptr;};
    void deleteOauthAccessTokenContent() { this->oauthAccessTokenContent_ = nullptr;};
    inline const FetchOAuthAuthenticationTokenResponseBody::OauthAccessTokenContent & getOauthAccessTokenContent() const { DARABONBA_PTR_GET_CONST(oauthAccessTokenContent_, FetchOAuthAuthenticationTokenResponseBody::OauthAccessTokenContent) };
    inline FetchOAuthAuthenticationTokenResponseBody::OauthAccessTokenContent getOauthAccessTokenContent() { DARABONBA_PTR_GET(oauthAccessTokenContent_, FetchOAuthAuthenticationTokenResponseBody::OauthAccessTokenContent) };
    inline FetchOAuthAuthenticationTokenResponseBody& setOauthAccessTokenContent(const FetchOAuthAuthenticationTokenResponseBody::OauthAccessTokenContent & oauthAccessTokenContent) { DARABONBA_PTR_SET_VALUE(oauthAccessTokenContent_, oauthAccessTokenContent) };
    inline FetchOAuthAuthenticationTokenResponseBody& setOauthAccessTokenContent(FetchOAuthAuthenticationTokenResponseBody::OauthAccessTokenContent && oauthAccessTokenContent) { DARABONBA_PTR_SET_RVALUE(oauthAccessTokenContent_, oauthAccessTokenContent) };


    // revoked Field Functions 
    bool hasRevoked() const { return this->revoked_ != nullptr;};
    void deleteRevoked() { this->revoked_ = nullptr;};
    inline bool getRevoked() const { DARABONBA_PTR_GET_DEFAULT(revoked_, false) };
    inline FetchOAuthAuthenticationTokenResponseBody& setRevoked(bool revoked) { DARABONBA_PTR_SET_VALUE(revoked_, revoked) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline FetchOAuthAuthenticationTokenResponseBody& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    shared_ptr<string> authenticationTokenId_ {};
    shared_ptr<string> authenticationTokenType_ {};
    shared_ptr<string> consumerId_ {};
    shared_ptr<string> consumerType_ {};
    shared_ptr<int64_t> createTime_ {};
    shared_ptr<string> creatorId_ {};
    shared_ptr<string> creatorType_ {};
    shared_ptr<string> credentialProviderId_ {};
    shared_ptr<int64_t> expirationTime_ {};
    // EIAM实例ID。
    shared_ptr<string> instanceId_ {};
    shared_ptr<FetchOAuthAuthenticationTokenResponseBody::OauthAccessTokenContent> oauthAccessTokenContent_ {};
    shared_ptr<bool> revoked_ {};
    shared_ptr<int64_t> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
