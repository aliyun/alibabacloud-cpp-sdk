// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSVSWITCHSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSVSWITCHSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeRdsVSwitchsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsVSwitchsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsVSwitchsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeRdsVSwitchsRequest() = default ;
    DescribeRdsVSwitchsRequest(const DescribeRdsVSwitchsRequest &) = default ;
    DescribeRdsVSwitchsRequest(DescribeRdsVSwitchsRequest &&) = default ;
    DescribeRdsVSwitchsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsVSwitchsRequest() = default ;
    DescribeRdsVSwitchsRequest& operator=(const DescribeRdsVSwitchsRequest &) = default ;
    DescribeRdsVSwitchsRequest& operator=(DescribeRdsVSwitchsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->securityToken_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeRdsVSwitchsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeRdsVSwitchsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRdsVSwitchsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeRdsVSwitchsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeRdsVSwitchsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeRdsVSwitchsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeRdsVSwitchsRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeRdsVSwitchsRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeRdsVSwitchsRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent region list and zone list.
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is no longer used.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The virtual private cloud (VPC) ID of the instance.
    // 
    // > 
    // 
    // *   You can call the [DescribeRdsVpcs](https://help.aliyun.com/document_detail/208327.html) operation to query the available VPC IDs.
    // 
    // *   This parameter must be specified.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the zone.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent region list and zone list.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
