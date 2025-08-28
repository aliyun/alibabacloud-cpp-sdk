// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVSWITCHCIDRRESERVATIONATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVSWITCHCIDRRESERVATIONATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVSwitchCidrReservationAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVSwitchCidrReservationAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VSwitchCidrReservationDescription, vSwitchCidrReservationDescription_);
      DARABONBA_PTR_TO_JSON(VSwitchCidrReservationId, vSwitchCidrReservationId_);
      DARABONBA_PTR_TO_JSON(VSwitchCidrReservationName, vSwitchCidrReservationName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVSwitchCidrReservationAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationDescription, vSwitchCidrReservationDescription_);
      DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationId, vSwitchCidrReservationId_);
      DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationName, vSwitchCidrReservationName_);
    };
    ModifyVSwitchCidrReservationAttributeRequest() = default ;
    ModifyVSwitchCidrReservationAttributeRequest(const ModifyVSwitchCidrReservationAttributeRequest &) = default ;
    ModifyVSwitchCidrReservationAttributeRequest(ModifyVSwitchCidrReservationAttributeRequest &&) = default ;
    ModifyVSwitchCidrReservationAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVSwitchCidrReservationAttributeRequest() = default ;
    ModifyVSwitchCidrReservationAttributeRequest& operator=(const ModifyVSwitchCidrReservationAttributeRequest &) = default ;
    ModifyVSwitchCidrReservationAttributeRequest& operator=(ModifyVSwitchCidrReservationAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->vSwitchCidrReservationDescription_ != nullptr && this->vSwitchCidrReservationId_ != nullptr && this->vSwitchCidrReservationName_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyVSwitchCidrReservationAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyVSwitchCidrReservationAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyVSwitchCidrReservationAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyVSwitchCidrReservationAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyVSwitchCidrReservationAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyVSwitchCidrReservationAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyVSwitchCidrReservationAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vSwitchCidrReservationDescription Field Functions 
    bool hasVSwitchCidrReservationDescription() const { return this->vSwitchCidrReservationDescription_ != nullptr;};
    void deleteVSwitchCidrReservationDescription() { this->vSwitchCidrReservationDescription_ = nullptr;};
    inline string vSwitchCidrReservationDescription() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationDescription_, "") };
    inline ModifyVSwitchCidrReservationAttributeRequest& setVSwitchCidrReservationDescription(string vSwitchCidrReservationDescription) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationDescription_, vSwitchCidrReservationDescription) };


    // vSwitchCidrReservationId Field Functions 
    bool hasVSwitchCidrReservationId() const { return this->vSwitchCidrReservationId_ != nullptr;};
    void deleteVSwitchCidrReservationId() { this->vSwitchCidrReservationId_ = nullptr;};
    inline string vSwitchCidrReservationId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationId_, "") };
    inline ModifyVSwitchCidrReservationAttributeRequest& setVSwitchCidrReservationId(string vSwitchCidrReservationId) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationId_, vSwitchCidrReservationId) };


    // vSwitchCidrReservationName Field Functions 
    bool hasVSwitchCidrReservationName() const { return this->vSwitchCidrReservationName_ != nullptr;};
    void deleteVSwitchCidrReservationName() { this->vSwitchCidrReservationName_ = nullptr;};
    inline string vSwitchCidrReservationName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationName_, "") };
    inline ModifyVSwitchCidrReservationAttributeRequest& setVSwitchCidrReservationName(string vSwitchCidrReservationName) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationName_, vSwitchCidrReservationName) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region where the vSwitch is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The new description of the reserved CIDR block. The default value is empty.
    // 
    // The description must be 2 to 256 characters in length. It must start with a letter and cannot start with `http://` or `https://`.
    std::shared_ptr<string> vSwitchCidrReservationDescription_ = nullptr;
    // The ID of the reserved CIDR block.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchCidrReservationId_ = nullptr;
    // The new name of the reserved CIDR block.
    // 
    // The name must be 2 to 128 characters in length and can contain letters, digits, underscores (_), and hyphens (-). It must start with a letter.
    std::shared_ptr<string> vSwitchCidrReservationName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
