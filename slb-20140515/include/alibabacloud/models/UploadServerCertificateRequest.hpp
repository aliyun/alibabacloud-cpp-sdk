// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADSERVERCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADSERVERCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UploadServerCertificateRequestTag.hpp>
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
    virtual bool empty() const override { return this->aliCloudCertificateId_ == nullptr
        && return this->aliCloudCertificateName_ == nullptr && return this->aliCloudCertificateRegionId_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->privateKey_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->serverCertificate_ == nullptr
        && return this->serverCertificateName_ == nullptr && return this->tag_ == nullptr; };
    // aliCloudCertificateId Field Functions 
    bool hasAliCloudCertificateId() const { return this->aliCloudCertificateId_ != nullptr;};
    void deleteAliCloudCertificateId() { this->aliCloudCertificateId_ = nullptr;};
    inline string aliCloudCertificateId() const { DARABONBA_PTR_GET_DEFAULT(aliCloudCertificateId_, "") };
    inline UploadServerCertificateRequest& setAliCloudCertificateId(string aliCloudCertificateId) { DARABONBA_PTR_SET_VALUE(aliCloudCertificateId_, aliCloudCertificateId) };


    // aliCloudCertificateName Field Functions 
    bool hasAliCloudCertificateName() const { return this->aliCloudCertificateName_ != nullptr;};
    void deleteAliCloudCertificateName() { this->aliCloudCertificateName_ = nullptr;};
    inline string aliCloudCertificateName() const { DARABONBA_PTR_GET_DEFAULT(aliCloudCertificateName_, "") };
    inline UploadServerCertificateRequest& setAliCloudCertificateName(string aliCloudCertificateName) { DARABONBA_PTR_SET_VALUE(aliCloudCertificateName_, aliCloudCertificateName) };


    // aliCloudCertificateRegionId Field Functions 
    bool hasAliCloudCertificateRegionId() const { return this->aliCloudCertificateRegionId_ != nullptr;};
    void deleteAliCloudCertificateRegionId() { this->aliCloudCertificateRegionId_ = nullptr;};
    inline string aliCloudCertificateRegionId() const { DARABONBA_PTR_GET_DEFAULT(aliCloudCertificateRegionId_, "") };
    inline UploadServerCertificateRequest& setAliCloudCertificateRegionId(string aliCloudCertificateRegionId) { DARABONBA_PTR_SET_VALUE(aliCloudCertificateRegionId_, aliCloudCertificateRegionId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UploadServerCertificateRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UploadServerCertificateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string privateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline UploadServerCertificateRequest& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UploadServerCertificateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UploadServerCertificateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UploadServerCertificateRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UploadServerCertificateRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // serverCertificate Field Functions 
    bool hasServerCertificate() const { return this->serverCertificate_ != nullptr;};
    void deleteServerCertificate() { this->serverCertificate_ = nullptr;};
    inline string serverCertificate() const { DARABONBA_PTR_GET_DEFAULT(serverCertificate_, "") };
    inline UploadServerCertificateRequest& setServerCertificate(string serverCertificate) { DARABONBA_PTR_SET_VALUE(serverCertificate_, serverCertificate) };


    // serverCertificateName Field Functions 
    bool hasServerCertificateName() const { return this->serverCertificateName_ != nullptr;};
    void deleteServerCertificateName() { this->serverCertificateName_ = nullptr;};
    inline string serverCertificateName() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateName_, "") };
    inline UploadServerCertificateRequest& setServerCertificateName(string serverCertificateName) { DARABONBA_PTR_SET_VALUE(serverCertificateName_, serverCertificateName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<UploadServerCertificateRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<UploadServerCertificateRequestTag>) };
    inline vector<UploadServerCertificateRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<UploadServerCertificateRequestTag>) };
    inline UploadServerCertificateRequest& setTag(const vector<UploadServerCertificateRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline UploadServerCertificateRequest& setTag(vector<UploadServerCertificateRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // AliCloud certificate ID.
    std::shared_ptr<string> aliCloudCertificateId_ = nullptr;
    // AliCloud certificate name.
    std::shared_ptr<string> aliCloudCertificateName_ = nullptr;
    // The region ID of AliCloud certificate.
    std::shared_ptr<string> aliCloudCertificateRegionId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The private key of the certificate.
    std::shared_ptr<string> privateKey_ = nullptr;
    // The region ID of the CLB instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/27584.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The server certificate to be uploaded.
    std::shared_ptr<string> serverCertificate_ = nullptr;
    // The name of the server certificate.
    // 
    // The name must be 1 to 80 characters in length. It must start with an English letter. It can contain letters, numbers, periods (.), underscores (_), and hyphens (-).
    std::shared_ptr<string> serverCertificateName_ = nullptr;
    // The tags.
    std::shared_ptr<vector<UploadServerCertificateRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
