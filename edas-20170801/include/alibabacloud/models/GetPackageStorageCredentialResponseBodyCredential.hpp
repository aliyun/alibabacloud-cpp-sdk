// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPACKAGESTORAGECREDENTIALRESPONSEBODYCREDENTIAL_HPP_
#define ALIBABACLOUD_MODELS_GETPACKAGESTORAGECREDENTIALRESPONSEBODYCREDENTIAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetPackageStorageCredentialResponseBodyCredential : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPackageStorageCredentialResponseBodyCredential& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetPackageStorageCredentialResponseBodyCredential& obj) { 
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
    GetPackageStorageCredentialResponseBodyCredential() = default ;
    GetPackageStorageCredentialResponseBodyCredential(const GetPackageStorageCredentialResponseBodyCredential &) = default ;
    GetPackageStorageCredentialResponseBodyCredential(GetPackageStorageCredentialResponseBodyCredential &&) = default ;
    GetPackageStorageCredentialResponseBodyCredential(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPackageStorageCredentialResponseBodyCredential() = default ;
    GetPackageStorageCredentialResponseBodyCredential& operator=(const GetPackageStorageCredentialResponseBodyCredential &) = default ;
    GetPackageStorageCredentialResponseBodyCredential& operator=(GetPackageStorageCredentialResponseBodyCredential &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && return this->accessKeySecret_ == nullptr && return this->bucket_ == nullptr && return this->expiration_ == nullptr && return this->keyPrefix_ == nullptr && return this->ossInternalEndpoint_ == nullptr
        && return this->ossPublicEndpoint_ == nullptr && return this->ossVpcEndpoint_ == nullptr && return this->regionId_ == nullptr && return this->securityToken_ == nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline GetPackageStorageCredentialResponseBodyCredential& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // accessKeySecret Field Functions 
    bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
    void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
    inline string accessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
    inline GetPackageStorageCredentialResponseBodyCredential& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetPackageStorageCredentialResponseBodyCredential& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string expiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline GetPackageStorageCredentialResponseBodyCredential& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // keyPrefix Field Functions 
    bool hasKeyPrefix() const { return this->keyPrefix_ != nullptr;};
    void deleteKeyPrefix() { this->keyPrefix_ = nullptr;};
    inline string keyPrefix() const { DARABONBA_PTR_GET_DEFAULT(keyPrefix_, "") };
    inline GetPackageStorageCredentialResponseBodyCredential& setKeyPrefix(string keyPrefix) { DARABONBA_PTR_SET_VALUE(keyPrefix_, keyPrefix) };


    // ossInternalEndpoint Field Functions 
    bool hasOssInternalEndpoint() const { return this->ossInternalEndpoint_ != nullptr;};
    void deleteOssInternalEndpoint() { this->ossInternalEndpoint_ = nullptr;};
    inline string ossInternalEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossInternalEndpoint_, "") };
    inline GetPackageStorageCredentialResponseBodyCredential& setOssInternalEndpoint(string ossInternalEndpoint) { DARABONBA_PTR_SET_VALUE(ossInternalEndpoint_, ossInternalEndpoint) };


    // ossPublicEndpoint Field Functions 
    bool hasOssPublicEndpoint() const { return this->ossPublicEndpoint_ != nullptr;};
    void deleteOssPublicEndpoint() { this->ossPublicEndpoint_ = nullptr;};
    inline string ossPublicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossPublicEndpoint_, "") };
    inline GetPackageStorageCredentialResponseBodyCredential& setOssPublicEndpoint(string ossPublicEndpoint) { DARABONBA_PTR_SET_VALUE(ossPublicEndpoint_, ossPublicEndpoint) };


    // ossVpcEndpoint Field Functions 
    bool hasOssVpcEndpoint() const { return this->ossVpcEndpoint_ != nullptr;};
    void deleteOssVpcEndpoint() { this->ossVpcEndpoint_ = nullptr;};
    inline string ossVpcEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossVpcEndpoint_, "") };
    inline GetPackageStorageCredentialResponseBodyCredential& setOssVpcEndpoint(string ossVpcEndpoint) { DARABONBA_PTR_SET_VALUE(ossVpcEndpoint_, ossVpcEndpoint) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetPackageStorageCredentialResponseBodyCredential& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline GetPackageStorageCredentialResponseBodyCredential& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The AccessKey ID of your account.
    std::shared_ptr<string> accessKeyId_ = nullptr;
    // The AccessKey secret of your account.
    std::shared_ptr<string> accessKeySecret_ = nullptr;
    // The name of the OSS bucket.
    std::shared_ptr<string> bucket_ = nullptr;
    // The time when the STS credential expires. Example: 2019-11-10T07:20:19Z.
    std::shared_ptr<string> expiration_ = nullptr;
    // The object key prefix in Object Storage Service (OSS).
    std::shared_ptr<string> keyPrefix_ = nullptr;
    // The private endpoint of OSS.
    std::shared_ptr<string> ossInternalEndpoint_ = nullptr;
    // The public endpoint of OSS.
    std::shared_ptr<string> ossPublicEndpoint_ = nullptr;
    // The VPC endpoint of OSS.
    std::shared_ptr<string> ossVpcEndpoint_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The security token issued by STS.
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
