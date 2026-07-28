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
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->clientToken_ == nullptr && this->eipMask_ == nullptr && this->internetChargeType_ == nullptr && this->isp_ == nullptr && this->netmode_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->zone_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline string getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
    inline AllocateEipSegmentAddressRequest& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AllocateEipSegmentAddressRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // eipMask Field Functions 
    bool hasEipMask() const { return this->eipMask_ != nullptr;};
    void deleteEipMask() { this->eipMask_ = nullptr;};
    inline string getEipMask() const { DARABONBA_PTR_GET_DEFAULT(eipMask_, "") };
    inline AllocateEipSegmentAddressRequest& setEipMask(string eipMask) { DARABONBA_PTR_SET_VALUE(eipMask_, eipMask) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline AllocateEipSegmentAddressRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline AllocateEipSegmentAddressRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // netmode Field Functions 
    bool hasNetmode() const { return this->netmode_ != nullptr;};
    void deleteNetmode() { this->netmode_ = nullptr;};
    inline string getNetmode() const { DARABONBA_PTR_GET_DEFAULT(netmode_, "") };
    inline AllocateEipSegmentAddressRequest& setNetmode(string netmode) { DARABONBA_PTR_SET_VALUE(netmode_, netmode) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AllocateEipSegmentAddressRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AllocateEipSegmentAddressRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AllocateEipSegmentAddressRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AllocateEipSegmentAddressRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AllocateEipSegmentAddressRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AllocateEipSegmentAddressRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline AllocateEipSegmentAddressRequest& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    // The maximum bandwidth of the EIP. Unit: Mbit/s.
    // 
    // - If **InternetChargeType** is set to **PayByBandwidth**, valid values of **Bandwidth** are **1** to **500**.
    // 
    // - If **InternetChargeType** is set to **PayByTraffic**, valid values of **Bandwidth** are **1** to **200**.
    // 
    // Default value: **5** Mbit/s.
    shared_ptr<string> bandwidth_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The **ClientToken** value can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // The subnet mask of the contiguous EIPs. Valid values:
    // 
    // - **28**: The system allocates 16 contiguous EIPs per call.
    // 
    // - **27**: The system allocates 32 contiguous EIPs per call.
    // 
    // - **26**: The system allocates 64 contiguous EIPs per call.
    // 
    // - **25**: The system allocates 128 contiguous EIPs per call.
    // 
    // - **24**: The system allocates 256 contiguous EIPs per call.
    // 
    // > Due to IP address reservation, the actual number of contiguous EIPs may be 1, 3, or 4 fewer than expected.
    // 
    // This parameter is required.
    shared_ptr<string> eipMask_ {};
    // The billable methods of the contiguous EIPs. Valid values:
    // 
    // - **PayByBandwidth** (default): pay-by-bandwidth.
    // 
    // - **PayByTraffic**: pay-by-data-transfer.
    shared_ptr<string> internetChargeType_ {};
    // The line type. Valid values:
    // 
    // - **BGP** (default): BGP (multi-ISP) line. All regions support BGP (multi-ISP) EIPs.
    // - **BGP_PRO**: BGP (multi-ISP) premium line. Only Hong Kong (China), Singapore, Tokyo (Japan), Kuala Lumpur (Malaysia), Manila (Philippines), Jakarta (Indonesia), and Bangkok (Thailand) regions support BGP (multi-ISP) premium EIPs.
    // 
    // For more information about BGP (multi-ISP) lines and BGP (multi-ISP) premium lines, see [EIP line types](https://help.aliyun.com/document_detail/32321.html).
    // 
    // If you are a whitelist user of single-ISP bandwidth, you can also select the following types:
    // - **ChinaTelecom**: China Telecom
    // - **ChinaUnicom**: China Unicom
    // - **ChinaMobile**: China Mobile
    // - **ChinaTelecom_L2**: China Telecom L2
    // - **ChinaUnicom_L2**: China Unicom L2
    // - **ChinaMobile_L2**: China Mobile L2
    // 
    // If you are an Alibaba Finance Cloud user, this parameter is required. Set the value to **BGP_FinanceCloud**.
    shared_ptr<string> isp_ {};
    // The network type. Set the value to **public**, which specifies the public network.
    shared_ptr<string> netmode_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the contiguous EIPs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The zone of the contiguous EIP group.
    shared_ptr<string> zone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
