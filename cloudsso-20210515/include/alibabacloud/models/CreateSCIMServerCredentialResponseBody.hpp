// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCIMSERVERCREDENTIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESCIMSERVERCREDENTIALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class CreateSCIMServerCredentialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSCIMServerCredentialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SCIMServerCredential, SCIMServerCredential_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSCIMServerCredentialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SCIMServerCredential, SCIMServerCredential_);
    };
    CreateSCIMServerCredentialResponseBody() = default ;
    CreateSCIMServerCredentialResponseBody(const CreateSCIMServerCredentialResponseBody &) = default ;
    CreateSCIMServerCredentialResponseBody(CreateSCIMServerCredentialResponseBody &&) = default ;
    CreateSCIMServerCredentialResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSCIMServerCredentialResponseBody() = default ;
    CreateSCIMServerCredentialResponseBody& operator=(const CreateSCIMServerCredentialResponseBody &) = default ;
    CreateSCIMServerCredentialResponseBody& operator=(CreateSCIMServerCredentialResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SCIMServerCredential : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SCIMServerCredential& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CredentialId, credentialId_);
        DARABONBA_PTR_TO_JSON(CredentialSecret, credentialSecret_);
        DARABONBA_PTR_TO_JSON(CredentialType, credentialType_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, SCIMServerCredential& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CredentialId, credentialId_);
        DARABONBA_PTR_FROM_JSON(CredentialSecret, credentialSecret_);
        DARABONBA_PTR_FROM_JSON(CredentialType, credentialType_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      SCIMServerCredential() = default ;
      SCIMServerCredential(const SCIMServerCredential &) = default ;
      SCIMServerCredential(SCIMServerCredential &&) = default ;
      SCIMServerCredential(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SCIMServerCredential() = default ;
      SCIMServerCredential& operator=(const SCIMServerCredential &) = default ;
      SCIMServerCredential& operator=(SCIMServerCredential &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->credentialId_ == nullptr && this->credentialSecret_ == nullptr && this->credentialType_ == nullptr && this->directoryId_ == nullptr && this->expireTime_ == nullptr
        && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SCIMServerCredential& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // credentialId Field Functions 
      bool hasCredentialId() const { return this->credentialId_ != nullptr;};
      void deleteCredentialId() { this->credentialId_ = nullptr;};
      inline string getCredentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
      inline SCIMServerCredential& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


      // credentialSecret Field Functions 
      bool hasCredentialSecret() const { return this->credentialSecret_ != nullptr;};
      void deleteCredentialSecret() { this->credentialSecret_ = nullptr;};
      inline string getCredentialSecret() const { DARABONBA_PTR_GET_DEFAULT(credentialSecret_, "") };
      inline SCIMServerCredential& setCredentialSecret(string credentialSecret) { DARABONBA_PTR_SET_VALUE(credentialSecret_, credentialSecret) };


      // credentialType Field Functions 
      bool hasCredentialType() const { return this->credentialType_ != nullptr;};
      void deleteCredentialType() { this->credentialType_ = nullptr;};
      inline string getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
      inline SCIMServerCredential& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline SCIMServerCredential& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline SCIMServerCredential& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SCIMServerCredential& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the SCIM credential was created.
      shared_ptr<string> createTime_ {};
      // The ID of the SCIM credential.
      shared_ptr<string> credentialId_ {};
      // The SCIM credential.
      // 
      // > The SCIM credential is returned only when it is created. After the SCIM credential is created, you cannot query it. Keep the SCIM credential confidential.
      shared_ptr<string> credentialSecret_ {};
      // The type of the SCIM credential.
      shared_ptr<string> credentialType_ {};
      // The ID of the directory.
      shared_ptr<string> directoryId_ {};
      // The time when the SCIM credential expires.
      shared_ptr<string> expireTime_ {};
      // The status of the SCIM credential. The value is fixed as Enabled, which indicates that the SCIM credential is enabled.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->SCIMServerCredential_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSCIMServerCredentialResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SCIMServerCredential Field Functions 
    bool hasSCIMServerCredential() const { return this->SCIMServerCredential_ != nullptr;};
    void deleteSCIMServerCredential() { this->SCIMServerCredential_ = nullptr;};
    inline const CreateSCIMServerCredentialResponseBody::SCIMServerCredential & getSCIMServerCredential() const { DARABONBA_PTR_GET_CONST(SCIMServerCredential_, CreateSCIMServerCredentialResponseBody::SCIMServerCredential) };
    inline CreateSCIMServerCredentialResponseBody::SCIMServerCredential getSCIMServerCredential() { DARABONBA_PTR_GET(SCIMServerCredential_, CreateSCIMServerCredentialResponseBody::SCIMServerCredential) };
    inline CreateSCIMServerCredentialResponseBody& setSCIMServerCredential(const CreateSCIMServerCredentialResponseBody::SCIMServerCredential & sCIMServerCredential) { DARABONBA_PTR_SET_VALUE(SCIMServerCredential_, sCIMServerCredential) };
    inline CreateSCIMServerCredentialResponseBody& setSCIMServerCredential(CreateSCIMServerCredentialResponseBody::SCIMServerCredential && sCIMServerCredential) { DARABONBA_PTR_SET_RVALUE(SCIMServerCredential_, sCIMServerCredential) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the SCIM credential.
    shared_ptr<CreateSCIMServerCredentialResponseBody::SCIMServerCredential> SCIMServerCredential_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
