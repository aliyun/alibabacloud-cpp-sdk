// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEXPRESSCLOUDCONNECTIONATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEXPRESSCLOUDCONNECTIONATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyExpressCloudConnectionAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyExpressCloudConnectionAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BgpAs, bgpAs_);
      DARABONBA_PTR_TO_JSON(CeIp, ceIp_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EccId, eccId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PeIp, peIp_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyExpressCloudConnectionAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BgpAs, bgpAs_);
      DARABONBA_PTR_FROM_JSON(CeIp, ceIp_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EccId, eccId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PeIp, peIp_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyExpressCloudConnectionAttributeRequest() = default ;
    ModifyExpressCloudConnectionAttributeRequest(const ModifyExpressCloudConnectionAttributeRequest &) = default ;
    ModifyExpressCloudConnectionAttributeRequest(ModifyExpressCloudConnectionAttributeRequest &&) = default ;
    ModifyExpressCloudConnectionAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyExpressCloudConnectionAttributeRequest() = default ;
    ModifyExpressCloudConnectionAttributeRequest& operator=(const ModifyExpressCloudConnectionAttributeRequest &) = default ;
    ModifyExpressCloudConnectionAttributeRequest& operator=(ModifyExpressCloudConnectionAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bgpAs_ != nullptr
        && this->ceIp_ != nullptr && this->description_ != nullptr && this->eccId_ != nullptr && this->name_ != nullptr && this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->peIp_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // bgpAs Field Functions 
    bool hasBgpAs() const { return this->bgpAs_ != nullptr;};
    void deleteBgpAs() { this->bgpAs_ = nullptr;};
    inline string bgpAs() const { DARABONBA_PTR_GET_DEFAULT(bgpAs_, "") };
    inline ModifyExpressCloudConnectionAttributeRequest& setBgpAs(string bgpAs) { DARABONBA_PTR_SET_VALUE(bgpAs_, bgpAs) };


    // ceIp Field Functions 
    bool hasCeIp() const { return this->ceIp_ != nullptr;};
    void deleteCeIp() { this->ceIp_ = nullptr;};
    inline string ceIp() const { DARABONBA_PTR_GET_DEFAULT(ceIp_, "") };
    inline ModifyExpressCloudConnectionAttributeRequest& setCeIp(string ceIp) { DARABONBA_PTR_SET_VALUE(ceIp_, ceIp) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyExpressCloudConnectionAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eccId Field Functions 
    bool hasEccId() const { return this->eccId_ != nullptr;};
    void deleteEccId() { this->eccId_ = nullptr;};
    inline string eccId() const { DARABONBA_PTR_GET_DEFAULT(eccId_, "") };
    inline ModifyExpressCloudConnectionAttributeRequest& setEccId(string eccId) { DARABONBA_PTR_SET_VALUE(eccId_, eccId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyExpressCloudConnectionAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyExpressCloudConnectionAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyExpressCloudConnectionAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // peIp Field Functions 
    bool hasPeIp() const { return this->peIp_ != nullptr;};
    void deletePeIp() { this->peIp_ = nullptr;};
    inline string peIp() const { DARABONBA_PTR_GET_DEFAULT(peIp_, "") };
    inline ModifyExpressCloudConnectionAttributeRequest& setPeIp(string peIp) { DARABONBA_PTR_SET_VALUE(peIp_, peIp) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyExpressCloudConnectionAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyExpressCloudConnectionAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyExpressCloudConnectionAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The BGP autonomous system number (ASN) to be configured for the Smart Access Gateway (SAG) device.
    std::shared_ptr<string> bgpAs_ = nullptr;
    // The peer IP address when the SAG device is connected to the cloud.
    std::shared_ptr<string> ceIp_ = nullptr;
    // Descriptions of ECC.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the ECC instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> eccId_ = nullptr;
    // The name of the ECC instance.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The on-premises IP address when the SAG device is connected to the cloud.
    std::shared_ptr<string> peIp_ = nullptr;
    // The region ID of the ECC instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
