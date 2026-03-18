// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEJWTAUTHENTICATIONTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEJWTAUTHENTICATIONTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GenerateJwtAuthenticationTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateJwtAuthenticationTokenResponseBody& obj) { 
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
      DARABONBA_PTR_TO_JSON(jwtContent, jwtContent_);
      DARABONBA_PTR_TO_JSON(revoked, revoked_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateJwtAuthenticationTokenResponseBody& obj) { 
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
      DARABONBA_PTR_FROM_JSON(jwtContent, jwtContent_);
      DARABONBA_PTR_FROM_JSON(revoked, revoked_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    GenerateJwtAuthenticationTokenResponseBody() = default ;
    GenerateJwtAuthenticationTokenResponseBody(const GenerateJwtAuthenticationTokenResponseBody &) = default ;
    GenerateJwtAuthenticationTokenResponseBody(GenerateJwtAuthenticationTokenResponseBody &&) = default ;
    GenerateJwtAuthenticationTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateJwtAuthenticationTokenResponseBody() = default ;
    GenerateJwtAuthenticationTokenResponseBody& operator=(const GenerateJwtAuthenticationTokenResponseBody &) = default ;
    GenerateJwtAuthenticationTokenResponseBody& operator=(GenerateJwtAuthenticationTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JwtContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JwtContent& obj) { 
        DARABONBA_PTR_TO_JSON(derivedShortToken, derivedShortToken_);
        DARABONBA_PTR_TO_JSON(jwtValue, jwtValue_);
      };
      friend void from_json(const Darabonba::Json& j, JwtContent& obj) { 
        DARABONBA_PTR_FROM_JSON(derivedShortToken, derivedShortToken_);
        DARABONBA_PTR_FROM_JSON(jwtValue, jwtValue_);
      };
      JwtContent() = default ;
      JwtContent(const JwtContent &) = default ;
      JwtContent(JwtContent &&) = default ;
      JwtContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JwtContent() = default ;
      JwtContent& operator=(const JwtContent &) = default ;
      JwtContent& operator=(JwtContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->derivedShortToken_ == nullptr
        && this->jwtValue_ == nullptr; };
      // derivedShortToken Field Functions 
      bool hasDerivedShortToken() const { return this->derivedShortToken_ != nullptr;};
      void deleteDerivedShortToken() { this->derivedShortToken_ = nullptr;};
      inline string getDerivedShortToken() const { DARABONBA_PTR_GET_DEFAULT(derivedShortToken_, "") };
      inline JwtContent& setDerivedShortToken(string derivedShortToken) { DARABONBA_PTR_SET_VALUE(derivedShortToken_, derivedShortToken) };


      // jwtValue Field Functions 
      bool hasJwtValue() const { return this->jwtValue_ != nullptr;};
      void deleteJwtValue() { this->jwtValue_ = nullptr;};
      inline string getJwtValue() const { DARABONBA_PTR_GET_DEFAULT(jwtValue_, "") };
      inline JwtContent& setJwtValue(string jwtValue) { DARABONBA_PTR_SET_VALUE(jwtValue_, jwtValue) };


    protected:
      shared_ptr<string> derivedShortToken_ {};
      shared_ptr<string> jwtValue_ {};
    };

    virtual bool empty() const override { return this->authenticationTokenId_ == nullptr
        && this->authenticationTokenType_ == nullptr && this->consumerId_ == nullptr && this->consumerType_ == nullptr && this->createTime_ == nullptr && this->creatorId_ == nullptr
        && this->creatorType_ == nullptr && this->credentialProviderId_ == nullptr && this->expirationTime_ == nullptr && this->instanceId_ == nullptr && this->jwtContent_ == nullptr
        && this->revoked_ == nullptr && this->updateTime_ == nullptr; };
    // authenticationTokenId Field Functions 
    bool hasAuthenticationTokenId() const { return this->authenticationTokenId_ != nullptr;};
    void deleteAuthenticationTokenId() { this->authenticationTokenId_ = nullptr;};
    inline string getAuthenticationTokenId() const { DARABONBA_PTR_GET_DEFAULT(authenticationTokenId_, "") };
    inline GenerateJwtAuthenticationTokenResponseBody& setAuthenticationTokenId(string authenticationTokenId) { DARABONBA_PTR_SET_VALUE(authenticationTokenId_, authenticationTokenId) };


    // authenticationTokenType Field Functions 
    bool hasAuthenticationTokenType() const { return this->authenticationTokenType_ != nullptr;};
    void deleteAuthenticationTokenType() { this->authenticationTokenType_ = nullptr;};
    inline string getAuthenticationTokenType() const { DARABONBA_PTR_GET_DEFAULT(authenticationTokenType_, "") };
    inline GenerateJwtAuthenticationTokenResponseBody& setAuthenticationTokenType(string authenticationTokenType) { DARABONBA_PTR_SET_VALUE(authenticationTokenType_, authenticationTokenType) };


    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
    inline GenerateJwtAuthenticationTokenResponseBody& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // consumerType Field Functions 
    bool hasConsumerType() const { return this->consumerType_ != nullptr;};
    void deleteConsumerType() { this->consumerType_ = nullptr;};
    inline string getConsumerType() const { DARABONBA_PTR_GET_DEFAULT(consumerType_, "") };
    inline GenerateJwtAuthenticationTokenResponseBody& setConsumerType(string consumerType) { DARABONBA_PTR_SET_VALUE(consumerType_, consumerType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GenerateJwtAuthenticationTokenResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GenerateJwtAuthenticationTokenResponseBody& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // creatorType Field Functions 
    bool hasCreatorType() const { return this->creatorType_ != nullptr;};
    void deleteCreatorType() { this->creatorType_ = nullptr;};
    inline string getCreatorType() const { DARABONBA_PTR_GET_DEFAULT(creatorType_, "") };
    inline GenerateJwtAuthenticationTokenResponseBody& setCreatorType(string creatorType) { DARABONBA_PTR_SET_VALUE(creatorType_, creatorType) };


    // credentialProviderId Field Functions 
    bool hasCredentialProviderId() const { return this->credentialProviderId_ != nullptr;};
    void deleteCredentialProviderId() { this->credentialProviderId_ = nullptr;};
    inline string getCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderId_, "") };
    inline GenerateJwtAuthenticationTokenResponseBody& setCredentialProviderId(string credentialProviderId) { DARABONBA_PTR_SET_VALUE(credentialProviderId_, credentialProviderId) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline int64_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
    inline GenerateJwtAuthenticationTokenResponseBody& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GenerateJwtAuthenticationTokenResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jwtContent Field Functions 
    bool hasJwtContent() const { return this->jwtContent_ != nullptr;};
    void deleteJwtContent() { this->jwtContent_ = nullptr;};
    inline const GenerateJwtAuthenticationTokenResponseBody::JwtContent & getJwtContent() const { DARABONBA_PTR_GET_CONST(jwtContent_, GenerateJwtAuthenticationTokenResponseBody::JwtContent) };
    inline GenerateJwtAuthenticationTokenResponseBody::JwtContent getJwtContent() { DARABONBA_PTR_GET(jwtContent_, GenerateJwtAuthenticationTokenResponseBody::JwtContent) };
    inline GenerateJwtAuthenticationTokenResponseBody& setJwtContent(const GenerateJwtAuthenticationTokenResponseBody::JwtContent & jwtContent) { DARABONBA_PTR_SET_VALUE(jwtContent_, jwtContent) };
    inline GenerateJwtAuthenticationTokenResponseBody& setJwtContent(GenerateJwtAuthenticationTokenResponseBody::JwtContent && jwtContent) { DARABONBA_PTR_SET_RVALUE(jwtContent_, jwtContent) };


    // revoked Field Functions 
    bool hasRevoked() const { return this->revoked_ != nullptr;};
    void deleteRevoked() { this->revoked_ = nullptr;};
    inline bool getRevoked() const { DARABONBA_PTR_GET_DEFAULT(revoked_, false) };
    inline GenerateJwtAuthenticationTokenResponseBody& setRevoked(bool revoked) { DARABONBA_PTR_SET_VALUE(revoked_, revoked) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GenerateJwtAuthenticationTokenResponseBody& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


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
    shared_ptr<GenerateJwtAuthenticationTokenResponseBody::JwtContent> jwtContent_ {};
    shared_ptr<bool> revoked_ {};
    shared_ptr<int64_t> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
