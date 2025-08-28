// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVSWITCHATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVSWITCHATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVSwitchAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVSwitchAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableIPv6, enableIPv6_);
      DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
      DARABONBA_PTR_TO_JSON(VpcIpv6CidrBlock, vpcIpv6CidrBlock_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVSwitchAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableIPv6, enableIPv6_);
      DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
      DARABONBA_PTR_FROM_JSON(VpcIpv6CidrBlock, vpcIpv6CidrBlock_);
    };
    ModifyVSwitchAttributeRequest() = default ;
    ModifyVSwitchAttributeRequest(const ModifyVSwitchAttributeRequest &) = default ;
    ModifyVSwitchAttributeRequest(ModifyVSwitchAttributeRequest &&) = default ;
    ModifyVSwitchAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVSwitchAttributeRequest() = default ;
    ModifyVSwitchAttributeRequest& operator=(const ModifyVSwitchAttributeRequest &) = default ;
    ModifyVSwitchAttributeRequest& operator=(ModifyVSwitchAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->enableIPv6_ != nullptr && this->ipv6CidrBlock_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->vSwitchId_ != nullptr && this->vSwitchName_ != nullptr && this->vpcIpv6CidrBlock_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyVSwitchAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableIPv6 Field Functions 
    bool hasEnableIPv6() const { return this->enableIPv6_ != nullptr;};
    void deleteEnableIPv6() { this->enableIPv6_ = nullptr;};
    inline bool enableIPv6() const { DARABONBA_PTR_GET_DEFAULT(enableIPv6_, false) };
    inline ModifyVSwitchAttributeRequest& setEnableIPv6(bool enableIPv6) { DARABONBA_PTR_SET_VALUE(enableIPv6_, enableIPv6) };


    // ipv6CidrBlock Field Functions 
    bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
    void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
    inline int32_t ipv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrBlock_, 0) };
    inline ModifyVSwitchAttributeRequest& setIpv6CidrBlock(int32_t ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyVSwitchAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyVSwitchAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyVSwitchAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyVSwitchAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyVSwitchAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ModifyVSwitchAttributeRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchName Field Functions 
    bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
    void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
    inline string vSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
    inline ModifyVSwitchAttributeRequest& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


    // vpcIpv6CidrBlock Field Functions 
    bool hasVpcIpv6CidrBlock() const { return this->vpcIpv6CidrBlock_ != nullptr;};
    void deleteVpcIpv6CidrBlock() { this->vpcIpv6CidrBlock_ = nullptr;};
    inline string vpcIpv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(vpcIpv6CidrBlock_, "") };
    inline ModifyVSwitchAttributeRequest& setVpcIpv6CidrBlock(string vpcIpv6CidrBlock) { DARABONBA_PTR_SET_VALUE(vpcIpv6CidrBlock_, vpcIpv6CidrBlock) };


  protected:
    // The new description for the vSwitch.
    // 
    // The description must be 1 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to enable the IPv6 feature for the vSwitch. Valid values:
    // 
    // *   **true**: enables the IPv6 feature.
    // *   **false**: disables the IPv6 feature. This is the default value.
    std::shared_ptr<bool> enableIPv6_ = nullptr;
    // The last eight bits of the IPv6 CIDR block of the vSwitch. Valid values: **0** to **255**.
    // 
    // You can set this parameter only when the IPv6 feature is enabled for the virtual private cloud (VPC) to which the vSwitch belongs.
    std::shared_ptr<int32_t> ipv6CidrBlock_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region where the vSwitch is deployed. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the vSwitch.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The new name for the vSwitch.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with `http://` or `https://`.
    std::shared_ptr<string> vSwitchName_ = nullptr;
    // The IPv6 CIDR block of the VPC to which the vSwitch belongs.
    // 
    // You can set this parameter only when the IPv6 feature is enabled for the VPC.
    std::shared_ptr<string> vpcIpv6CidrBlock_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
