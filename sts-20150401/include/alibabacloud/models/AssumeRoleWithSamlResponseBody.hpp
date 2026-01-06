// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSUMEROLEWITHSAMLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSUMEROLEWITHSAMLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sts20150401
{
namespace Models
{
  class AssumeRoleWithSAMLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssumeRoleWithSAMLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssumedRoleUser, assumedRoleUser_);
      DARABONBA_PTR_TO_JSON(Credentials, credentials_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SAMLAssertionInfo, SAMLAssertionInfo_);
      DARABONBA_PTR_TO_JSON(SourceIdentity, sourceIdentity_);
    };
    friend void from_json(const Darabonba::Json& j, AssumeRoleWithSAMLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumedRoleUser, assumedRoleUser_);
      DARABONBA_PTR_FROM_JSON(Credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SAMLAssertionInfo, SAMLAssertionInfo_);
      DARABONBA_PTR_FROM_JSON(SourceIdentity, sourceIdentity_);
    };
    AssumeRoleWithSAMLResponseBody() = default ;
    AssumeRoleWithSAMLResponseBody(const AssumeRoleWithSAMLResponseBody &) = default ;
    AssumeRoleWithSAMLResponseBody(AssumeRoleWithSAMLResponseBody &&) = default ;
    AssumeRoleWithSAMLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssumeRoleWithSAMLResponseBody() = default ;
    AssumeRoleWithSAMLResponseBody& operator=(const AssumeRoleWithSAMLResponseBody &) = default ;
    AssumeRoleWithSAMLResponseBody& operator=(AssumeRoleWithSAMLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SAMLAssertionInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SAMLAssertionInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Issuer, issuer_);
        DARABONBA_PTR_TO_JSON(Recipient, recipient_);
        DARABONBA_PTR_TO_JSON(Subject, subject_);
        DARABONBA_PTR_TO_JSON(SubjectType, subjectType_);
      };
      friend void from_json(const Darabonba::Json& j, SAMLAssertionInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
        DARABONBA_PTR_FROM_JSON(Recipient, recipient_);
        DARABONBA_PTR_FROM_JSON(Subject, subject_);
        DARABONBA_PTR_FROM_JSON(SubjectType, subjectType_);
      };
      SAMLAssertionInfo() = default ;
      SAMLAssertionInfo(const SAMLAssertionInfo &) = default ;
      SAMLAssertionInfo(SAMLAssertionInfo &&) = default ;
      SAMLAssertionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SAMLAssertionInfo() = default ;
      SAMLAssertionInfo& operator=(const SAMLAssertionInfo &) = default ;
      SAMLAssertionInfo& operator=(SAMLAssertionInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->issuer_ == nullptr
        && this->recipient_ == nullptr && this->subject_ == nullptr && this->subjectType_ == nullptr; };
      // issuer Field Functions 
      bool hasIssuer() const { return this->issuer_ != nullptr;};
      void deleteIssuer() { this->issuer_ = nullptr;};
      inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
      inline SAMLAssertionInfo& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      // recipient Field Functions 
      bool hasRecipient() const { return this->recipient_ != nullptr;};
      void deleteRecipient() { this->recipient_ = nullptr;};
      inline string getRecipient() const { DARABONBA_PTR_GET_DEFAULT(recipient_, "") };
      inline SAMLAssertionInfo& setRecipient(string recipient) { DARABONBA_PTR_SET_VALUE(recipient_, recipient) };


      // subject Field Functions 
      bool hasSubject() const { return this->subject_ != nullptr;};
      void deleteSubject() { this->subject_ = nullptr;};
      inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
      inline SAMLAssertionInfo& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


      // subjectType Field Functions 
      bool hasSubjectType() const { return this->subjectType_ != nullptr;};
      void deleteSubjectType() { this->subjectType_ = nullptr;};
      inline string getSubjectType() const { DARABONBA_PTR_GET_DEFAULT(subjectType_, "") };
      inline SAMLAssertionInfo& setSubjectType(string subjectType) { DARABONBA_PTR_SET_VALUE(subjectType_, subjectType) };


    protected:
      // The value in the `Issuer` element in the SAML assertion.
      shared_ptr<string> issuer_ {};
      // The `Recipient` attribute of the SubjectConfirmationData sub-element. SubjectConfirmationData is a sub-element of the `Subject` element in the SAML assertion.
      shared_ptr<string> recipient_ {};
      // The value in the NameID sub-element of the `Subject` element in the SAML assertion.
      shared_ptr<string> subject_ {};
      // The Format attribute of the `NameID` element in the SAML assertion. If the Format attribute is prefixed with `urn:oasis:names:tc:SAML:2.0:nameid-format:`, the prefix is not included in the value of this parameter. For example, if the value of the Format attribute is urn:oasis:names:tc:SAML:2.0:nameid-format:persistent/transient, the value of this parameter is `persistent/transient`.
      shared_ptr<string> subjectType_ {};
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
        && this->credentials_ == nullptr && this->requestId_ == nullptr && this->SAMLAssertionInfo_ == nullptr && this->sourceIdentity_ == nullptr; };
    // assumedRoleUser Field Functions 
    bool hasAssumedRoleUser() const { return this->assumedRoleUser_ != nullptr;};
    void deleteAssumedRoleUser() { this->assumedRoleUser_ = nullptr;};
    inline const AssumeRoleWithSAMLResponseBody::AssumedRoleUser & getAssumedRoleUser() const { DARABONBA_PTR_GET_CONST(assumedRoleUser_, AssumeRoleWithSAMLResponseBody::AssumedRoleUser) };
    inline AssumeRoleWithSAMLResponseBody::AssumedRoleUser getAssumedRoleUser() { DARABONBA_PTR_GET(assumedRoleUser_, AssumeRoleWithSAMLResponseBody::AssumedRoleUser) };
    inline AssumeRoleWithSAMLResponseBody& setAssumedRoleUser(const AssumeRoleWithSAMLResponseBody::AssumedRoleUser & assumedRoleUser) { DARABONBA_PTR_SET_VALUE(assumedRoleUser_, assumedRoleUser) };
    inline AssumeRoleWithSAMLResponseBody& setAssumedRoleUser(AssumeRoleWithSAMLResponseBody::AssumedRoleUser && assumedRoleUser) { DARABONBA_PTR_SET_RVALUE(assumedRoleUser_, assumedRoleUser) };


    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline const AssumeRoleWithSAMLResponseBody::Credentials & getCredentials() const { DARABONBA_PTR_GET_CONST(credentials_, AssumeRoleWithSAMLResponseBody::Credentials) };
    inline AssumeRoleWithSAMLResponseBody::Credentials getCredentials() { DARABONBA_PTR_GET(credentials_, AssumeRoleWithSAMLResponseBody::Credentials) };
    inline AssumeRoleWithSAMLResponseBody& setCredentials(const AssumeRoleWithSAMLResponseBody::Credentials & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
    inline AssumeRoleWithSAMLResponseBody& setCredentials(AssumeRoleWithSAMLResponseBody::Credentials && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssumeRoleWithSAMLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SAMLAssertionInfo Field Functions 
    bool hasSAMLAssertionInfo() const { return this->SAMLAssertionInfo_ != nullptr;};
    void deleteSAMLAssertionInfo() { this->SAMLAssertionInfo_ = nullptr;};
    inline const AssumeRoleWithSAMLResponseBody::SAMLAssertionInfo & getSAMLAssertionInfo() const { DARABONBA_PTR_GET_CONST(SAMLAssertionInfo_, AssumeRoleWithSAMLResponseBody::SAMLAssertionInfo) };
    inline AssumeRoleWithSAMLResponseBody::SAMLAssertionInfo getSAMLAssertionInfo() { DARABONBA_PTR_GET(SAMLAssertionInfo_, AssumeRoleWithSAMLResponseBody::SAMLAssertionInfo) };
    inline AssumeRoleWithSAMLResponseBody& setSAMLAssertionInfo(const AssumeRoleWithSAMLResponseBody::SAMLAssertionInfo & sAMLAssertionInfo) { DARABONBA_PTR_SET_VALUE(SAMLAssertionInfo_, sAMLAssertionInfo) };
    inline AssumeRoleWithSAMLResponseBody& setSAMLAssertionInfo(AssumeRoleWithSAMLResponseBody::SAMLAssertionInfo && sAMLAssertionInfo) { DARABONBA_PTR_SET_RVALUE(SAMLAssertionInfo_, sAMLAssertionInfo) };


    // sourceIdentity Field Functions 
    bool hasSourceIdentity() const { return this->sourceIdentity_ != nullptr;};
    void deleteSourceIdentity() { this->sourceIdentity_ = nullptr;};
    inline string getSourceIdentity() const { DARABONBA_PTR_GET_DEFAULT(sourceIdentity_, "") };
    inline AssumeRoleWithSAMLResponseBody& setSourceIdentity(string sourceIdentity) { DARABONBA_PTR_SET_VALUE(sourceIdentity_, sourceIdentity) };


  protected:
    // The temporary identity that you use to assume the RAM role.
    shared_ptr<AssumeRoleWithSAMLResponseBody::AssumedRoleUser> assumedRoleUser_ {};
    // The STS credentials.
    shared_ptr<AssumeRoleWithSAMLResponseBody::Credentials> credentials_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information in the SAML assertion.
    shared_ptr<AssumeRoleWithSAMLResponseBody::SAMLAssertionInfo> SAMLAssertionInfo_ {};
    shared_ptr<string> sourceIdentity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sts20150401
#endif
