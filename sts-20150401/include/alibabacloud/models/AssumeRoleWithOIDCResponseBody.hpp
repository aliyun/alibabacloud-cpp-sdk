// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSUMEROLEWITHOIDCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSUMEROLEWITHOIDCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sts20150401
{
namespace Models
{
  class AssumeRoleWithOIDCResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssumeRoleWithOIDCResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssumedRoleUser, assumedRoleUser_);
      DARABONBA_PTR_TO_JSON(Credentials, credentials_);
      DARABONBA_PTR_TO_JSON(OIDCTokenInfo, OIDCTokenInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceIdentity, sourceIdentity_);
    };
    friend void from_json(const Darabonba::Json& j, AssumeRoleWithOIDCResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumedRoleUser, assumedRoleUser_);
      DARABONBA_PTR_FROM_JSON(Credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(OIDCTokenInfo, OIDCTokenInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceIdentity, sourceIdentity_);
    };
    AssumeRoleWithOIDCResponseBody() = default ;
    AssumeRoleWithOIDCResponseBody(const AssumeRoleWithOIDCResponseBody &) = default ;
    AssumeRoleWithOIDCResponseBody(AssumeRoleWithOIDCResponseBody &&) = default ;
    AssumeRoleWithOIDCResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssumeRoleWithOIDCResponseBody() = default ;
    AssumeRoleWithOIDCResponseBody& operator=(const AssumeRoleWithOIDCResponseBody &) = default ;
    AssumeRoleWithOIDCResponseBody& operator=(AssumeRoleWithOIDCResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OIDCTokenInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OIDCTokenInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ClientIds, clientIds_);
        DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_TO_JSON(IssuanceTime, issuanceTime_);
        DARABONBA_PTR_TO_JSON(Issuer, issuer_);
        DARABONBA_PTR_TO_JSON(Subject, subject_);
        DARABONBA_PTR_TO_JSON(VerificationInfo, verificationInfo_);
      };
      friend void from_json(const Darabonba::Json& j, OIDCTokenInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientIds, clientIds_);
        DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_FROM_JSON(IssuanceTime, issuanceTime_);
        DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
        DARABONBA_PTR_FROM_JSON(Subject, subject_);
        DARABONBA_PTR_FROM_JSON(VerificationInfo, verificationInfo_);
      };
      OIDCTokenInfo() = default ;
      OIDCTokenInfo(const OIDCTokenInfo &) = default ;
      OIDCTokenInfo(OIDCTokenInfo &&) = default ;
      OIDCTokenInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OIDCTokenInfo() = default ;
      OIDCTokenInfo& operator=(const OIDCTokenInfo &) = default ;
      OIDCTokenInfo& operator=(OIDCTokenInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientIds_ == nullptr
        && this->expirationTime_ == nullptr && this->issuanceTime_ == nullptr && this->issuer_ == nullptr && this->subject_ == nullptr && this->verificationInfo_ == nullptr; };
      // clientIds Field Functions 
      bool hasClientIds() const { return this->clientIds_ != nullptr;};
      void deleteClientIds() { this->clientIds_ = nullptr;};
      inline string getClientIds() const { DARABONBA_PTR_GET_DEFAULT(clientIds_, "") };
      inline OIDCTokenInfo& setClientIds(string clientIds) { DARABONBA_PTR_SET_VALUE(clientIds_, clientIds) };


      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline string getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, "") };
      inline OIDCTokenInfo& setExpirationTime(string expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // issuanceTime Field Functions 
      bool hasIssuanceTime() const { return this->issuanceTime_ != nullptr;};
      void deleteIssuanceTime() { this->issuanceTime_ = nullptr;};
      inline string getIssuanceTime() const { DARABONBA_PTR_GET_DEFAULT(issuanceTime_, "") };
      inline OIDCTokenInfo& setIssuanceTime(string issuanceTime) { DARABONBA_PTR_SET_VALUE(issuanceTime_, issuanceTime) };


      // issuer Field Functions 
      bool hasIssuer() const { return this->issuer_ != nullptr;};
      void deleteIssuer() { this->issuer_ = nullptr;};
      inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
      inline OIDCTokenInfo& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      // subject Field Functions 
      bool hasSubject() const { return this->subject_ != nullptr;};
      void deleteSubject() { this->subject_ = nullptr;};
      inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
      inline OIDCTokenInfo& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


      // verificationInfo Field Functions 
      bool hasVerificationInfo() const { return this->verificationInfo_ != nullptr;};
      void deleteVerificationInfo() { this->verificationInfo_ = nullptr;};
      inline string getVerificationInfo() const { DARABONBA_PTR_GET_DEFAULT(verificationInfo_, "") };
      inline OIDCTokenInfo& setVerificationInfo(string verificationInfo) { DARABONBA_PTR_SET_VALUE(verificationInfo_, verificationInfo) };


    protected:
      // The audience. If multiple audiences are returned, the audiences are separated by commas (,).
      // 
      // The audience is represented by the `aud` field in the OIDC Token.
      shared_ptr<string> clientIds_ {};
      // The time when the OIDC token expires.
      shared_ptr<string> expirationTime_ {};
      // The time when the OIDC token was issued.
      shared_ptr<string> issuanceTime_ {};
      // The URL of the issuer,
      // 
      // which is represented by the `iss` field in the OIDC Token.
      shared_ptr<string> issuer_ {};
      // The subject,
      // 
      // which is represented by the `sub` field in the OIDC Token.
      shared_ptr<string> subject_ {};
      // The verification information about the OIDC token. For more information, see [Manage an OIDC IdP](https://help.aliyun.com/document_detail/327123.html).
      shared_ptr<string> verificationInfo_ {};
    };

    class Credentials : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Credentials& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_TO_JSON(Expiration, expiration_);
        DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      };
      friend void from_json(const Darabonba::Json& j, Credentials& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
        DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      };
      Credentials() = default ;
      Credentials(const Credentials &) = default ;
      Credentials(Credentials &&) = default ;
      Credentials(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Credentials() = default ;
      Credentials& operator=(const Credentials &) = default ;
      Credentials& operator=(Credentials &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && this->accessKeySecret_ == nullptr && this->expiration_ == nullptr && this->securityToken_ == nullptr; };
      // accessKeyId Field Functions 
      bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
      void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
      inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
      inline Credentials& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


      // accessKeySecret Field Functions 
      bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
      void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
      inline string getAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
      inline Credentials& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


      // expiration Field Functions 
      bool hasExpiration() const { return this->expiration_ != nullptr;};
      void deleteExpiration() { this->expiration_ = nullptr;};
      inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
      inline Credentials& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


      // securityToken Field Functions 
      bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
      void deleteSecurityToken() { this->securityToken_ = nullptr;};
      inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
      inline Credentials& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    protected:
      // The AccessKey ID.
      shared_ptr<string> accessKeyId_ {};
      // The AccessKey secret.
      shared_ptr<string> accessKeySecret_ {};
      // The time when the STS token expires. The time is displayed in UTC.
      shared_ptr<string> expiration_ {};
      // The STS token.
      // 
      // > Alibaba Cloud STS does not impose limits on the length of STS tokens. We strongly recommend that you do not specify a maximum length for STS tokens.
      shared_ptr<string> securityToken_ {};
    };

    class AssumedRoleUser : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssumedRoleUser& obj) { 
        DARABONBA_PTR_TO_JSON(Arn, arn_);
        DARABONBA_PTR_TO_JSON(AssumedRoleId, assumedRoleId_);
      };
      friend void from_json(const Darabonba::Json& j, AssumedRoleUser& obj) { 
        DARABONBA_PTR_FROM_JSON(Arn, arn_);
        DARABONBA_PTR_FROM_JSON(AssumedRoleId, assumedRoleId_);
      };
      AssumedRoleUser() = default ;
      AssumedRoleUser(const AssumedRoleUser &) = default ;
      AssumedRoleUser(AssumedRoleUser &&) = default ;
      AssumedRoleUser(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssumedRoleUser() = default ;
      AssumedRoleUser& operator=(const AssumedRoleUser &) = default ;
      AssumedRoleUser& operator=(AssumedRoleUser &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->arn_ == nullptr
        && this->assumedRoleId_ == nullptr; };
      // arn Field Functions 
      bool hasArn() const { return this->arn_ != nullptr;};
      void deleteArn() { this->arn_ = nullptr;};
      inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
      inline AssumedRoleUser& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


      // assumedRoleId Field Functions 
      bool hasAssumedRoleId() const { return this->assumedRoleId_ != nullptr;};
      void deleteAssumedRoleId() { this->assumedRoleId_ = nullptr;};
      inline string getAssumedRoleId() const { DARABONBA_PTR_GET_DEFAULT(assumedRoleId_, "") };
      inline AssumedRoleUser& setAssumedRoleId(string assumedRoleId) { DARABONBA_PTR_SET_VALUE(assumedRoleId_, assumedRoleId) };


    protected:
      // The ARN of the temporary identity that you use to assume the RAM role.
      shared_ptr<string> arn_ {};
      // The ID of the temporary identity that you use to assume the RAM role.
      shared_ptr<string> assumedRoleId_ {};
    };

    virtual bool empty() const override { return this->assumedRoleUser_ == nullptr
        && this->credentials_ == nullptr && this->OIDCTokenInfo_ == nullptr && this->requestId_ == nullptr && this->sourceIdentity_ == nullptr; };
    // assumedRoleUser Field Functions 
    bool hasAssumedRoleUser() const { return this->assumedRoleUser_ != nullptr;};
    void deleteAssumedRoleUser() { this->assumedRoleUser_ = nullptr;};
    inline const AssumeRoleWithOIDCResponseBody::AssumedRoleUser & getAssumedRoleUser() const { DARABONBA_PTR_GET_CONST(assumedRoleUser_, AssumeRoleWithOIDCResponseBody::AssumedRoleUser) };
    inline AssumeRoleWithOIDCResponseBody::AssumedRoleUser getAssumedRoleUser() { DARABONBA_PTR_GET(assumedRoleUser_, AssumeRoleWithOIDCResponseBody::AssumedRoleUser) };
    inline AssumeRoleWithOIDCResponseBody& setAssumedRoleUser(const AssumeRoleWithOIDCResponseBody::AssumedRoleUser & assumedRoleUser) { DARABONBA_PTR_SET_VALUE(assumedRoleUser_, assumedRoleUser) };
    inline AssumeRoleWithOIDCResponseBody& setAssumedRoleUser(AssumeRoleWithOIDCResponseBody::AssumedRoleUser && assumedRoleUser) { DARABONBA_PTR_SET_RVALUE(assumedRoleUser_, assumedRoleUser) };


    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline const AssumeRoleWithOIDCResponseBody::Credentials & getCredentials() const { DARABONBA_PTR_GET_CONST(credentials_, AssumeRoleWithOIDCResponseBody::Credentials) };
    inline AssumeRoleWithOIDCResponseBody::Credentials getCredentials() { DARABONBA_PTR_GET(credentials_, AssumeRoleWithOIDCResponseBody::Credentials) };
    inline AssumeRoleWithOIDCResponseBody& setCredentials(const AssumeRoleWithOIDCResponseBody::Credentials & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
    inline AssumeRoleWithOIDCResponseBody& setCredentials(AssumeRoleWithOIDCResponseBody::Credentials && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


    // OIDCTokenInfo Field Functions 
    bool hasOIDCTokenInfo() const { return this->OIDCTokenInfo_ != nullptr;};
    void deleteOIDCTokenInfo() { this->OIDCTokenInfo_ = nullptr;};
    inline const AssumeRoleWithOIDCResponseBody::OIDCTokenInfo & getOIDCTokenInfo() const { DARABONBA_PTR_GET_CONST(OIDCTokenInfo_, AssumeRoleWithOIDCResponseBody::OIDCTokenInfo) };
    inline AssumeRoleWithOIDCResponseBody::OIDCTokenInfo getOIDCTokenInfo() { DARABONBA_PTR_GET(OIDCTokenInfo_, AssumeRoleWithOIDCResponseBody::OIDCTokenInfo) };
    inline AssumeRoleWithOIDCResponseBody& setOIDCTokenInfo(const AssumeRoleWithOIDCResponseBody::OIDCTokenInfo & oIDCTokenInfo) { DARABONBA_PTR_SET_VALUE(OIDCTokenInfo_, oIDCTokenInfo) };
    inline AssumeRoleWithOIDCResponseBody& setOIDCTokenInfo(AssumeRoleWithOIDCResponseBody::OIDCTokenInfo && oIDCTokenInfo) { DARABONBA_PTR_SET_RVALUE(OIDCTokenInfo_, oIDCTokenInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssumeRoleWithOIDCResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceIdentity Field Functions 
    bool hasSourceIdentity() const { return this->sourceIdentity_ != nullptr;};
    void deleteSourceIdentity() { this->sourceIdentity_ = nullptr;};
    inline string getSourceIdentity() const { DARABONBA_PTR_GET_DEFAULT(sourceIdentity_, "") };
    inline AssumeRoleWithOIDCResponseBody& setSourceIdentity(string sourceIdentity) { DARABONBA_PTR_SET_VALUE(sourceIdentity_, sourceIdentity) };


  protected:
    // The temporary identity that you use to assume the RAM role.
    shared_ptr<AssumeRoleWithOIDCResponseBody::AssumedRoleUser> assumedRoleUser_ {};
    // The access credentials.
    shared_ptr<AssumeRoleWithOIDCResponseBody::Credentials> credentials_ {};
    // The information about the OIDC token.
    shared_ptr<AssumeRoleWithOIDCResponseBody::OIDCTokenInfo> OIDCTokenInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<string> sourceIdentity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sts20150401
#endif
