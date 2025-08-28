// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEEIPSEGMENTADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEEIPSEGMENTADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AllocateEipSegmentAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateEipSegmentAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EipMask, eipMask_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(Netmode, netmode_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateEipSegmentAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EipMask, eipMask_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(Netmode, netmode_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    AllocateEipSegmentAddressRequest() = default ;
    AllocateEipSegmentAddressRequest(const AllocateEipSegmentAddressRequest &) = default ;
    AllocateEipSegmentAddressRequest(AllocateEipSegmentAddressRequest &&) = default ;
    AllocateEipSegmentAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateEipSegmentAddressRequest() = default ;
    AllocateEipSegmentAddressRequest& operator=(const AllocateEipSegmentAddressRequest &) = default ;
    AllocateEipSegmentAddressRequest& operator=(AllocateEipSegmentAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidth_ != nullptr
        && this->clientToken_ != nullptr && this->eipMask_ != nullptr && this->internetChargeType_ != nullptr && this->isp_ != nullptr && this->netmode_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->zone_ != nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline string bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
    inline AllocateEipSegmentAddressRequest& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AllocateEipSegmentAddressRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // eipMask Field Functions 
    bool hasEipMask() const { return this->eipMask_ != nullptr;};
    void deleteEipMask() { this->eipMask_ = nullptr;};
    inline string eipMask() const { DARABONBA_PTR_GET_DEFAULT(eipMask_, "") };
    inline AllocateEipSegmentAddressRequest& setEipMask(string eipMask) { DARABONBA_PTR_SET_VALUE(eipMask_, eipMask) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline AllocateEipSegmentAddressRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline AllocateEipSegmentAddressRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // netmode Field Functions 
    bool hasNetmode() const { return this->netmode_ != nullptr;};
    void deleteNetmode() { this->netmode_ = nullptr;};
    inline string netmode() const { DARABONBA_PTR_GET_DEFAULT(netmode_, "") };
    inline AllocateEipSegmentAddressRequest& setNetmode(string netmode) { DARABONBA_PTR_SET_VALUE(netmode_, netmode) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AllocateEipSegmentAddressRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AllocateEipSegmentAddressRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AllocateEipSegmentAddressRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AllocateEipSegmentAddressRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AllocateEipSegmentAddressRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AllocateEipSegmentAddressRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string zone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline AllocateEipSegmentAddressRequest& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    // The maximum bandwidth of the contiguous EIP group. Unit: Mbit/s.
    // 
    // *   Valid values when **InstanceChargeType** is set to **PostPaid** and **InternetChargeType** is set to **PayByBandwidth**: **1** to **500**.****
    // *   Valid values when **InstanceChargeType** is set to **PostPaid** and **InternetChargeType** is set to **PayByTraffic**: **1** to **200**.****
    // *   Valid values when **InstanceChargeType** is set to **PrePaid**: **1** to **1000**.****
    // 
    // Default value: **5**. Unit: Mbit/s.
    std::shared_ptr<string> bandwidth_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate a token, but you must make sure that the token is unique among different requests. **ClientToken** can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The subnet mask of the contiguous EIP group. Valid values:
    // 
    // *   **28**: applies for 16 contiguous EIPs in each call.
    // *   **27**: applies for 32 contiguous EIPs in each call.
    // *   **26**: applies for 64 contiguous EIPs in each call.
    // *   **25**: applies for 128 contiguous EIPs in each call.
    // *   **24**: applies for 256 contiguous EIPs in each call.
    // 
    // >  Some IP address are reserved for specific purposes. Therefore, the actual number of the contiguous EIPs may be one, three, or four less than the expected number.
    // 
    // This parameter is required.
    std::shared_ptr<string> eipMask_ = nullptr;
    // The metering method of contiguous EIPs. Valid values:
    // 
    // *   **PayByBandwidth** (default)
    // *   **PayByTraffic**
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The line type. Valid values:
    // 
    // *   **BGP** (default): BGP (Multi-ISP) line The BGP (Multi-ISP) line is supported in all regions.
    // *   **BGP_PRO**: BGP (Multi-ISP) Pro line BGP (Multi-ISP) Pro line is supported only in the China (Hong Kong), Singapore, Japan (Tokyo), Malaysia (Kuala Lumpur), Philippines (Manila), Indonesia (Jakarta), and Thailand (Bangkok) regions.
    // 
    // For more information about the BGP (Multi-ISP) line and BGP (Multi-ISP) Pro line, see [EIP line types](https://help.aliyun.com/document_detail/32321.html).
    // 
    // If you are allowed to use single-ISP bandwidth, you can also use one of the following values:
    // 
    // *   **ChinaTelecom**
    // *   **ChinaUnicom**
    // *   **ChinaMobile**
    // *   **ChinaTelecom_L2**
    // *   **ChinaUnicom_L2**
    // *   **ChinaMobile_L2**
    // 
    // If your services are deployed in China East 1 Finance, this parameter is required and you must set the parameter to **BGP_FinanceCloud**.
    std::shared_ptr<string> isp_ = nullptr;
    // The network type. Set the value to **public**, which specifies the public network type.
    std::shared_ptr<string> netmode_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region in which the contiguous EIP group resides.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The zone of the contiguous EIP group.
    std::shared_ptr<string> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
