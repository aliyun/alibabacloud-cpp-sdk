// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKMSASSOCIATERESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKMSASSOCIATERESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeKmsAssociateResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKmsAssociateResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(KmsResourceId, kmsResourceId_);
      DARABONBA_PTR_TO_JSON(KmsResourceRegionId, kmsResourceRegionId_);
      DARABONBA_PTR_TO_JSON(KmsResourceType, kmsResourceType_);
      DARABONBA_PTR_TO_JSON(KmsResourceUser, kmsResourceUser_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKmsAssociateResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(KmsResourceId, kmsResourceId_);
      DARABONBA_PTR_FROM_JSON(KmsResourceRegionId, kmsResourceRegionId_);
      DARABONBA_PTR_FROM_JSON(KmsResourceType, kmsResourceType_);
      DARABONBA_PTR_FROM_JSON(KmsResourceUser, kmsResourceUser_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribeKmsAssociateResourcesRequest() = default ;
    DescribeKmsAssociateResourcesRequest(const DescribeKmsAssociateResourcesRequest &) = default ;
    DescribeKmsAssociateResourcesRequest(DescribeKmsAssociateResourcesRequest &&) = default ;
    DescribeKmsAssociateResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKmsAssociateResourcesRequest() = default ;
    DescribeKmsAssociateResourcesRequest& operator=(const DescribeKmsAssociateResourcesRequest &) = default ;
    DescribeKmsAssociateResourcesRequest& operator=(DescribeKmsAssociateResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->kmsResourceId_ == nullptr && this->kmsResourceRegionId_ == nullptr && this->kmsResourceType_ == nullptr && this->kmsResourceUser_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeKmsAssociateResourcesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // kmsResourceId Field Functions 
    bool hasKmsResourceId() const { return this->kmsResourceId_ != nullptr;};
    void deleteKmsResourceId() { this->kmsResourceId_ = nullptr;};
    inline string getKmsResourceId() const { DARABONBA_PTR_GET_DEFAULT(kmsResourceId_, "") };
    inline DescribeKmsAssociateResourcesRequest& setKmsResourceId(string kmsResourceId) { DARABONBA_PTR_SET_VALUE(kmsResourceId_, kmsResourceId) };


    // kmsResourceRegionId Field Functions 
    bool hasKmsResourceRegionId() const { return this->kmsResourceRegionId_ != nullptr;};
    void deleteKmsResourceRegionId() { this->kmsResourceRegionId_ = nullptr;};
    inline string getKmsResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(kmsResourceRegionId_, "") };
    inline DescribeKmsAssociateResourcesRequest& setKmsResourceRegionId(string kmsResourceRegionId) { DARABONBA_PTR_SET_VALUE(kmsResourceRegionId_, kmsResourceRegionId) };


    // kmsResourceType Field Functions 
    bool hasKmsResourceType() const { return this->kmsResourceType_ != nullptr;};
    void deleteKmsResourceType() { this->kmsResourceType_ = nullptr;};
    inline string getKmsResourceType() const { DARABONBA_PTR_GET_DEFAULT(kmsResourceType_, "") };
    inline DescribeKmsAssociateResourcesRequest& setKmsResourceType(string kmsResourceType) { DARABONBA_PTR_SET_VALUE(kmsResourceType_, kmsResourceType) };


    // kmsResourceUser Field Functions 
    bool hasKmsResourceUser() const { return this->kmsResourceUser_ != nullptr;};
    void deleteKmsResourceUser() { this->kmsResourceUser_ = nullptr;};
    inline string getKmsResourceUser() const { DARABONBA_PTR_GET_DEFAULT(kmsResourceUser_, "") };
    inline DescribeKmsAssociateResourcesRequest& setKmsResourceUser(string kmsResourceUser) { DARABONBA_PTR_SET_VALUE(kmsResourceUser_, kmsResourceUser) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeKmsAssociateResourcesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeKmsAssociateResourcesRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeKmsAssociateResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeKmsAssociateResourcesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeKmsAssociateResourcesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeKmsAssociateResourcesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The ID of the KMS resource. Only key IDs are supported.
    // 
    // This parameter is required.
    shared_ptr<string> kmsResourceId_ {};
    // The ID of the region to which the KMS resource belongs.
    shared_ptr<string> kmsResourceRegionId_ {};
    // The type of the KMS resource. Only key is supported.
    // 
    // This parameter is required.
    shared_ptr<string> kmsResourceType_ {};
    // The ID of the Alibaba Cloud account to which the KMS resource belongs.
    // 
    // This parameter is required.
    shared_ptr<string> kmsResourceUser_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<string> ownerId_ {};
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
