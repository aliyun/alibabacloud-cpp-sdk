// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSUMEROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSUMEROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sts20150401
{
namespace Models
{
  class AssumeRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssumeRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssumedRoleUser, assumedRoleUser_);
      DARABONBA_PTR_TO_JSON(Credentials, credentials_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceIdentity, sourceIdentity_);
    };
    friend void from_json(const Darabonba::Json& j, AssumeRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumedRoleUser, assumedRoleUser_);
      DARABONBA_PTR_FROM_JSON(Credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceIdentity, sourceIdentity_);
    };
    AssumeRoleResponseBody() = default ;
    AssumeRoleResponseBody(const AssumeRoleResponseBody &) = default ;
    AssumeRoleResponseBody(AssumeRoleResponseBody &&) = default ;
    AssumeRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssumeRoleResponseBody() = default ;
    AssumeRoleResponseBody& operator=(const AssumeRoleResponseBody &) = default ;
    AssumeRoleResponseBody& operator=(AssumeRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        && this->credentials_ == nullptr && this->requestId_ == nullptr && this->sourceIdentity_ == nullptr; };
    // assumedRoleUser Field Functions 
    bool hasAssumedRoleUser() const { return this->assumedRoleUser_ != nullptr;};
    void deleteAssumedRoleUser() { this->assumedRoleUser_ = nullptr;};
    inline const AssumeRoleResponseBody::AssumedRoleUser & getAssumedRoleUser() const { DARABONBA_PTR_GET_CONST(assumedRoleUser_, AssumeRoleResponseBody::AssumedRoleUser) };
    inline AssumeRoleResponseBody::AssumedRoleUser getAssumedRoleUser() { DARABONBA_PTR_GET(assumedRoleUser_, AssumeRoleResponseBody::AssumedRoleUser) };
    inline AssumeRoleResponseBody& setAssumedRoleUser(const AssumeRoleResponseBody::AssumedRoleUser & assumedRoleUser) { DARABONBA_PTR_SET_VALUE(assumedRoleUser_, assumedRoleUser) };
    inline AssumeRoleResponseBody& setAssumedRoleUser(AssumeRoleResponseBody::AssumedRoleUser && assumedRoleUser) { DARABONBA_PTR_SET_RVALUE(assumedRoleUser_, assumedRoleUser) };


    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline const AssumeRoleResponseBody::Credentials & getCredentials() const { DARABONBA_PTR_GET_CONST(credentials_, AssumeRoleResponseBody::Credentials) };
    inline AssumeRoleResponseBody::Credentials getCredentials() { DARABONBA_PTR_GET(credentials_, AssumeRoleResponseBody::Credentials) };
    inline AssumeRoleResponseBody& setCredentials(const AssumeRoleResponseBody::Credentials & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
    inline AssumeRoleResponseBody& setCredentials(AssumeRoleResponseBody::Credentials && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssumeRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceIdentity Field Functions 
    bool hasSourceIdentity() const { return this->sourceIdentity_ != nullptr;};
    void deleteSourceIdentity() { this->sourceIdentity_ = nullptr;};
    inline string getSourceIdentity() const { DARABONBA_PTR_GET_DEFAULT(sourceIdentity_, "") };
    inline AssumeRoleResponseBody& setSourceIdentity(string sourceIdentity) { DARABONBA_PTR_SET_VALUE(sourceIdentity_, sourceIdentity) };


  protected:
    // The temporary identity that you use to assume the RAM role.
    shared_ptr<AssumeRoleResponseBody::AssumedRoleUser> assumedRoleUser_ {};
    // The STS credentials.
    shared_ptr<AssumeRoleResponseBody::Credentials> credentials_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<string> sourceIdentity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sts20150401
#endif
