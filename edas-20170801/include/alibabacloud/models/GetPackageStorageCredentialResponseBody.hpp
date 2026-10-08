// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPACKAGESTORAGECREDENTIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPACKAGESTORAGECREDENTIALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetPackageStorageCredentialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPackageStorageCredentialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Credential, credential_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPackageStorageCredentialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Credential, credential_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPackageStorageCredentialResponseBody() = default ;
    GetPackageStorageCredentialResponseBody(const GetPackageStorageCredentialResponseBody &) = default ;
    GetPackageStorageCredentialResponseBody(GetPackageStorageCredentialResponseBody &&) = default ;
    GetPackageStorageCredentialResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPackageStorageCredentialResponseBody() = default ;
    GetPackageStorageCredentialResponseBody& operator=(const GetPackageStorageCredentialResponseBody &) = default ;
    GetPackageStorageCredentialResponseBody& operator=(GetPackageStorageCredentialResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Credential : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Credential& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_TO_JSON(Bucket, bucket_);
        DARABONBA_PTR_TO_JSON(Expiration, expiration_);
        DARABONBA_PTR_TO_JSON(KeyPrefix, keyPrefix_);
        DARABONBA_PTR_TO_JSON(OssInternalEndpoint, ossInternalEndpoint_);
        DARABONBA_PTR_TO_JSON(OssPublicEndpoint, ossPublicEndpoint_);
        DARABONBA_PTR_TO_JSON(OssVpcEndpoint, ossVpcEndpoint_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      };
      friend void from_json(const Darabonba::Json& j, Credential& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
        DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
        DARABONBA_PTR_FROM_JSON(KeyPrefix, keyPrefix_);
        DARABONBA_PTR_FROM_JSON(OssInternalEndpoint, ossInternalEndpoint_);
        DARABONBA_PTR_FROM_JSON(OssPublicEndpoint, ossPublicEndpoint_);
        DARABONBA_PTR_FROM_JSON(OssVpcEndpoint, ossVpcEndpoint_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      };
      Credential() = default ;
      Credential(const Credential &) = default ;
      Credential(Credential &&) = default ;
      Credential(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Credential() = default ;
      Credential& operator=(const Credential &) = default ;
      Credential& operator=(Credential &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && this->accessKeySecret_ == nullptr && this->bucket_ == nullptr && this->expiration_ == nullptr && this->keyPrefix_ == nullptr && this->ossInternalEndpoint_ == nullptr
        && this->ossPublicEndpoint_ == nullptr && this->ossVpcEndpoint_ == nullptr && this->regionId_ == nullptr && this->securityToken_ == nullptr; };
      // accessKeyId Field Functions 
      bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
      void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
      inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
      inline Credential& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


      // accessKeySecret Field Functions 
      bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
      void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
      inline string getAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
      inline Credential& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


      // bucket Field Functions 
      bool hasBucket() const { return this->bucket_ != nullptr;};
      void deleteBucket() { this->bucket_ = nullptr;};
      inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
      inline Credential& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


      // expiration Field Functions 
      bool hasExpiration() const { return this->expiration_ != nullptr;};
      void deleteExpiration() { this->expiration_ = nullptr;};
      inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
      inline Credential& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


      // keyPrefix Field Functions 
      bool hasKeyPrefix() const { return this->keyPrefix_ != nullptr;};
      void deleteKeyPrefix() { this->keyPrefix_ = nullptr;};
      inline string getKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(keyPrefix_, "") };
      inline Credential& setKeyPrefix(string keyPrefix) { DARABONBA_PTR_SET_VALUE(keyPrefix_, keyPrefix) };


      // ossInternalEndpoint Field Functions 
      bool hasOssInternalEndpoint() const { return this->ossInternalEndpoint_ != nullptr;};
      void deleteOssInternalEndpoint() { this->ossInternalEndpoint_ = nullptr;};
      inline string getOssInternalEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossInternalEndpoint_, "") };
      inline Credential& setOssInternalEndpoint(string ossInternalEndpoint) { DARABONBA_PTR_SET_VALUE(ossInternalEndpoint_, ossInternalEndpoint) };


      // ossPublicEndpoint Field Functions 
      bool hasOssPublicEndpoint() const { return this->ossPublicEndpoint_ != nullptr;};
      void deleteOssPublicEndpoint() { this->ossPublicEndpoint_ = nullptr;};
      inline string getOssPublicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossPublicEndpoint_, "") };
      inline Credential& setOssPublicEndpoint(string ossPublicEndpoint) { DARABONBA_PTR_SET_VALUE(ossPublicEndpoint_, ossPublicEndpoint) };


      // ossVpcEndpoint Field Functions 
      bool hasOssVpcEndpoint() const { return this->ossVpcEndpoint_ != nullptr;};
      void deleteOssVpcEndpoint() { this->ossVpcEndpoint_ = nullptr;};
      inline string getOssVpcEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossVpcEndpoint_, "") };
      inline Credential& setOssVpcEndpoint(string ossVpcEndpoint) { DARABONBA_PTR_SET_VALUE(ossVpcEndpoint_, ossVpcEndpoint) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Credential& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // securityToken Field Functions 
      bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
      void deleteSecurityToken() { this->securityToken_ = nullptr;};
      inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
      inline Credential& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    protected:
      // The AccessKey ID of your account.
      shared_ptr<string> accessKeyId_ {};
      // The AccessKey secret of your account.
      shared_ptr<string> accessKeySecret_ {};
      // The name of the OSS bucket.
      shared_ptr<string> bucket_ {};
      // The time when the STS credential expires. Example: 2019-11-10T07:20:19Z.
      shared_ptr<string> expiration_ {};
      // The object key prefix in Object Storage Service (OSS).
      shared_ptr<string> keyPrefix_ {};
      // The private endpoint of OSS.
      shared_ptr<string> ossInternalEndpoint_ {};
      // The public endpoint of OSS.
      shared_ptr<string> ossPublicEndpoint_ {};
      // The VPC endpoint of OSS.
      shared_ptr<string> ossVpcEndpoint_ {};
      // The ID of the region.
      shared_ptr<string> regionId_ {};
      // The security token issued by STS.
      shared_ptr<string> securityToken_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->credential_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetPackageStorageCredentialResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // credential Field Functions 
    bool hasCredential() const { return this->credential_ != nullptr;};
    void deleteCredential() { this->credential_ = nullptr;};
    inline const GetPackageStorageCredentialResponseBody::Credential & getCredential() const { DARABONBA_PTR_GET_CONST(credential_, GetPackageStorageCredentialResponseBody::Credential) };
    inline GetPackageStorageCredentialResponseBody::Credential getCredential() { DARABONBA_PTR_GET(credential_, GetPackageStorageCredentialResponseBody::Credential) };
    inline GetPackageStorageCredentialResponseBody& setCredential(const GetPackageStorageCredentialResponseBody::Credential & credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };
    inline GetPackageStorageCredentialResponseBody& setCredential(GetPackageStorageCredentialResponseBody::Credential && credential) { DARABONBA_PTR_SET_RVALUE(credential_, credential) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPackageStorageCredentialResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPackageStorageCredentialResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The STS credential.
    shared_ptr<GetPackageStorageCredentialResponseBody::Credential> credential_ {};
    // The message that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
