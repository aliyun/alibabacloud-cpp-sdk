// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILESTORAGECREDENTIALRESPONSEBODYSTORAGECREDENTIAL_HPP_
#define ALIBABACLOUD_MODELS_GETFILESTORAGECREDENTIALRESPONSEBODYSTORAGECREDENTIAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetFileStorageCredentialResponseBodyStorageCredential : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileStorageCredentialResponseBodyStorageCredential& obj) { 
      DARABONBA_PTR_TO_JSON(AccessId, accessId_);
      DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileStorageCredentialResponseBodyStorageCredential& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
      DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    GetFileStorageCredentialResponseBodyStorageCredential() = default ;
    GetFileStorageCredentialResponseBodyStorageCredential(const GetFileStorageCredentialResponseBodyStorageCredential &) = default ;
    GetFileStorageCredentialResponseBodyStorageCredential(GetFileStorageCredentialResponseBodyStorageCredential &&) = default ;
    GetFileStorageCredentialResponseBodyStorageCredential(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileStorageCredentialResponseBodyStorageCredential() = default ;
    GetFileStorageCredentialResponseBodyStorageCredential& operator=(const GetFileStorageCredentialResponseBodyStorageCredential &) = default ;
    GetFileStorageCredentialResponseBodyStorageCredential& operator=(GetFileStorageCredentialResponseBodyStorageCredential &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessId_ == nullptr
        && return this->accessKey_ == nullptr && return this->bucket_ == nullptr && return this->endpoint_ == nullptr && return this->expiration_ == nullptr && return this->objectName_ == nullptr
        && return this->region_ == nullptr && return this->securityToken_ == nullptr && return this->storageType_ == nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string accessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline GetFileStorageCredentialResponseBodyStorageCredential& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline string accessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
    inline GetFileStorageCredentialResponseBodyStorageCredential& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetFileStorageCredentialResponseBodyStorageCredential& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline GetFileStorageCredentialResponseBodyStorageCredential& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline int64_t expiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, 0L) };
    inline GetFileStorageCredentialResponseBodyStorageCredential& setExpiration(int64_t expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // objectName Field Functions 
    bool hasObjectName() const { return this->objectName_ != nullptr;};
    void deleteObjectName() { this->objectName_ = nullptr;};
    inline string objectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
    inline GetFileStorageCredentialResponseBodyStorageCredential& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetFileStorageCredentialResponseBodyStorageCredential& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline GetFileStorageCredentialResponseBodyStorageCredential& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline GetFileStorageCredentialResponseBodyStorageCredential& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    std::shared_ptr<string> accessId_ = nullptr;
    std::shared_ptr<string> accessKey_ = nullptr;
    std::shared_ptr<string> bucket_ = nullptr;
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<int64_t> expiration_ = nullptr;
    std::shared_ptr<string> objectName_ = nullptr;
    // region
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
