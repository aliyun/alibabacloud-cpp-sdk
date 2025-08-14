// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGRANTVSWITCHESTOCENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGRANTVSWITCHESTOCENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListGrantVSwitchesToCenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGrantVSwitchesToCenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(EnabledIpv6, enabledIpv6_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGrantVSwitchesToCenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(EnabledIpv6, enabledIpv6_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListGrantVSwitchesToCenRequest() = default ;
    ListGrantVSwitchesToCenRequest(const ListGrantVSwitchesToCenRequest &) = default ;
    ListGrantVSwitchesToCenRequest(ListGrantVSwitchesToCenRequest &&) = default ;
    ListGrantVSwitchesToCenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGrantVSwitchesToCenRequest() = default ;
    ListGrantVSwitchesToCenRequest& operator=(const ListGrantVSwitchesToCenRequest &) = default ;
    ListGrantVSwitchesToCenRequest& operator=(ListGrantVSwitchesToCenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->enabledIpv6_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->vpcId_ != nullptr && this->zoneId_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline ListGrantVSwitchesToCenRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // enabledIpv6 Field Functions 
    bool hasEnabledIpv6() const { return this->enabledIpv6_ != nullptr;};
    void deleteEnabledIpv6() { this->enabledIpv6_ = nullptr;};
    inline bool enabledIpv6() const { DARABONBA_PTR_GET_DEFAULT(enabledIpv6_, false) };
    inline ListGrantVSwitchesToCenRequest& setEnabledIpv6(bool enabledIpv6) { DARABONBA_PTR_SET_VALUE(enabledIpv6_, enabledIpv6) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListGrantVSwitchesToCenRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListGrantVSwitchesToCenRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListGrantVSwitchesToCenRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListGrantVSwitchesToCenRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListGrantVSwitchesToCenRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListGrantVSwitchesToCenRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListGrantVSwitchesToCenRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListGrantVSwitchesToCenRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListGrantVSwitchesToCenRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The CEN instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenId_ = nullptr;
    // Specifies whether to enable IPv6. true: enables IPv6. false: disables IPv6. If you do not specify a value, vSwitches are not filtered based on this attribute.
    std::shared_ptr<bool> enabledIpv6_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Valid values: **1** to **50**. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the VPC.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The VPC ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the zone.
    // 
    // *   If you specify a zone ID, the system queries the information about the vSwitches in the specified zone.
    // *   If you do not specify a zone ID, the system queries the information about the vSwitches in all zones.
    // 
    // You can call the [DescribeZones](https://help.aliyun.com/document_detail/36064.html) operation to query the most recent zone list.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
