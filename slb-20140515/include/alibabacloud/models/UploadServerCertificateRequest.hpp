// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADSERVERCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADSERVERCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class UploadServerCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadServerCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliCloudCertificateId, aliCloudCertificateId_);
      DARABONBA_PTR_TO_JSON(AliCloudCertificateName, aliCloudCertificateName_);
      DARABONBA_PTR_TO_JSON(AliCloudCertificateRegionId, aliCloudCertificateRegionId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ServerCertificate, serverCertificate_);
      DARABONBA_PTR_TO_JSON(ServerCertificateName, serverCertificateName_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, UploadServerCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliCloudCertificateId, aliCloudCertificateId_);
      DARABONBA_PTR_FROM_JSON(AliCloudCertificateName, aliCloudCertificateName_);
      DARABONBA_PTR_FROM_JSON(AliCloudCertificateRegionId, aliCloudCertificateRegionId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ServerCertificate, serverCertificate_);
      DARABONBA_PTR_FROM_JSON(ServerCertificateName, serverCertificateName_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    UploadServerCertificateRequest() = default ;
    UploadServerCertificateRequest(const UploadServerCertificateRequest &) = default ;
    UploadServerCertificateRequest(UploadServerCertificateRequest &&) = default ;
    UploadServerCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadServerCertificateRequest() = default ;
    UploadServerCertificateRequest& operator=(const UploadServerCertificateRequest &) = default ;
    UploadServerCertificateRequest& operator=(UploadServerCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of tag N. Valid values of N: **1 to 20**. The tag key cannot be an empty string.
      // 
      // The tag key can be up to 64 characters in length, and cannot contain `http://` or `https://`. The tag key cannot start with `aliyun` or `acs:`.
      shared_ptr<string> key_ {};
      // The value of tag N. Valid values of N: **1 to 20**. The tag value can be an empty string. The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag value cannot start with `aliyun` and `acs:`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->aliCloudCertificateId_ == nullptr
        && this->aliCloudCertificateName_ == nullptr && this->aliCloudCertificateRegionId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->privateKey_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->serverCertificate_ == nullptr
        && this->serverCertificateName_ == nullptr && this->tag_ == nullptr; };
    // aliCloudCertificateId Field Functions 
    bool hasAliCloudCertificateId() const { return this->aliCloudCertificateId_ != nullptr;};
    void deleteAliCloudCertificateId() { this->aliCloudCertificateId_ = nullptr;};
    inline string getAliCloudCertificateId() const { DARABONBA_PTR_GET_DEFAULT(aliCloudCertificateId_, "") };
    inline UploadServerCertificateRequest& setAliCloudCertificateId(string aliCloudCertificateId) { DARABONBA_PTR_SET_VALUE(aliCloudCertificateId_, aliCloudCertificateId) };


    // aliCloudCertificateName Field Functions 
    bool hasAliCloudCertificateName() const { return this->aliCloudCertificateName_ != nullptr;};
    void deleteAliCloudCertificateName() { this->aliCloudCertificateName_ = nullptr;};
    inline string getAliCloudCertificateName() const { DARABONBA_PTR_GET_DEFAULT(aliCloudCertificateName_, "") };
    inline UploadServerCertificateRequest& setAliCloudCertificateName(string aliCloudCertificateName) { DARABONBA_PTR_SET_VALUE(aliCloudCertificateName_, aliCloudCertificateName) };


    // aliCloudCertificateRegionId Field Functions 
    bool hasAliCloudCertificateRegionId() const { return this->aliCloudCertificateRegionId_ != nullptr;};
    void deleteAliCloudCertificateRegionId() { this->aliCloudCertificateRegionId_ = nullptr;};
    inline string getAliCloudCertificateRegionId() const { DARABONBA_PTR_GET_DEFAULT(aliCloudCertificateRegionId_, "") };
    inline UploadServerCertificateRequest& setAliCloudCertificateRegionId(string aliCloudCertificateRegionId) { DARABONBA_PTR_SET_VALUE(aliCloudCertificateRegionId_, aliCloudCertificateRegionId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UploadServerCertificateRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UploadServerCertificateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string getPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline UploadServerCertificateRequest& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UploadServerCertificateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UploadServerCertificateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UploadServerCertificateRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UploadServerCertificateRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // serverCertificate Field Functions 
    bool hasServerCertificate() const { return this->serverCertificate_ != nullptr;};
    void deleteServerCertificate() { this->serverCertificate_ = nullptr;};
    inline string getServerCertificate() const { DARABONBA_PTR_GET_DEFAULT(serverCertificate_, "") };
    inline UploadServerCertificateRequest& setServerCertificate(string serverCertificate) { DARABONBA_PTR_SET_VALUE(serverCertificate_, serverCertificate) };


    // serverCertificateName Field Functions 
    bool hasServerCertificateName() const { return this->serverCertificateName_ != nullptr;};
    void deleteServerCertificateName() { this->serverCertificateName_ = nullptr;};
    inline string getServerCertificateName() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateName_, "") };
    inline UploadServerCertificateRequest& setServerCertificateName(string serverCertificateName) { DARABONBA_PTR_SET_VALUE(serverCertificateName_, serverCertificateName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<UploadServerCertificateRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<UploadServerCertificateRequest::Tag>) };
    inline vector<UploadServerCertificateRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<UploadServerCertificateRequest::Tag>) };
    inline UploadServerCertificateRequest& setTag(const vector<UploadServerCertificateRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline UploadServerCertificateRequest& setTag(vector<UploadServerCertificateRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // AliCloud certificate ID.
    shared_ptr<string> aliCloudCertificateId_ {};
    // AliCloud certificate name.
    shared_ptr<string> aliCloudCertificateName_ {};
    // The region ID of AliCloud certificate.
    shared_ptr<string> aliCloudCertificateRegionId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The private key of the certificate.
    shared_ptr<string> privateKey_ {};
    // The region ID of the CLB instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/27584.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The server certificate to be uploaded.
    shared_ptr<string> serverCertificate_ {};
    // The name of the server certificate.
    // 
    // The name must be 1 to 80 characters in length. It must start with an English letter. It can contain letters, numbers, periods (.), underscores (_), and hyphens (-).
    shared_ptr<string> serverCertificateName_ {};
    // The tags.
    shared_ptr<vector<UploadServerCertificateRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
