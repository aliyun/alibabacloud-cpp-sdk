// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADCACERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADCACERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UploadCACertificateRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class UploadCACertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadCACertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CACertificate, CACertificate_);
      DARABONBA_PTR_TO_JSON(CACertificateName, CACertificateName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, UploadCACertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CACertificate, CACertificate_);
      DARABONBA_PTR_FROM_JSON(CACertificateName, CACertificateName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    UploadCACertificateRequest() = default ;
    UploadCACertificateRequest(const UploadCACertificateRequest &) = default ;
    UploadCACertificateRequest(UploadCACertificateRequest &&) = default ;
    UploadCACertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadCACertificateRequest() = default ;
    UploadCACertificateRequest& operator=(const UploadCACertificateRequest &) = default ;
    UploadCACertificateRequest& operator=(UploadCACertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CACertificate_ == nullptr
        && return this->CACertificateName_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->tag_ == nullptr; };
    // CACertificate Field Functions 
    bool hasCACertificate() const { return this->CACertificate_ != nullptr;};
    void deleteCACertificate() { this->CACertificate_ = nullptr;};
    inline string CACertificate() const { DARABONBA_PTR_GET_DEFAULT(CACertificate_, "") };
    inline UploadCACertificateRequest& setCACertificate(string CACertificate) { DARABONBA_PTR_SET_VALUE(CACertificate_, CACertificate) };


    // CACertificateName Field Functions 
    bool hasCACertificateName() const { return this->CACertificateName_ != nullptr;};
    void deleteCACertificateName() { this->CACertificateName_ = nullptr;};
    inline string CACertificateName() const { DARABONBA_PTR_GET_DEFAULT(CACertificateName_, "") };
    inline UploadCACertificateRequest& setCACertificateName(string CACertificateName) { DARABONBA_PTR_SET_VALUE(CACertificateName_, CACertificateName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UploadCACertificateRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UploadCACertificateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UploadCACertificateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UploadCACertificateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UploadCACertificateRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UploadCACertificateRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<UploadCACertificateRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<UploadCACertificateRequestTag>) };
    inline vector<UploadCACertificateRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<UploadCACertificateRequestTag>) };
    inline UploadCACertificateRequest& setTag(const vector<UploadCACertificateRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline UploadCACertificateRequest& setTag(vector<UploadCACertificateRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The information about the CA certificate.
    // 
    // This parameter is required.
    std::shared_ptr<string> CACertificate_ = nullptr;
    // The CA certificate name.
    std::shared_ptr<string> CACertificateName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region of the CA certificates.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/2401682.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<UploadCACertificateRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
