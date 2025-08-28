// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEEIPADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEEIPADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AllocateEipAddressRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AllocateEipAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateEipAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ISP, ISP_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Netmode, netmode_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityProtectionTypes, securityProtectionTypes_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateEipAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ISP, ISP_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Netmode, netmode_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityProtectionTypes, securityProtectionTypes_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    AllocateEipAddressRequest() = default ;
    AllocateEipAddressRequest(const AllocateEipAddressRequest &) = default ;
    AllocateEipAddressRequest(AllocateEipAddressRequest &&) = default ;
    AllocateEipAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateEipAddressRequest() = default ;
    AllocateEipAddressRequest& operator=(const AllocateEipAddressRequest &) = default ;
    AllocateEipAddressRequest& operator=(AllocateEipAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityId_ != nullptr
        && this->autoPay_ != nullptr && this->bandwidth_ != nullptr && this->clientToken_ != nullptr && this->description_ != nullptr && this->ISP_ != nullptr
        && this->instanceChargeType_ != nullptr && this->instanceId_ != nullptr && this->internetChargeType_ != nullptr && this->ipAddress_ != nullptr && this->name_ != nullptr
        && this->netmode_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->period_ != nullptr && this->pricingCycle_ != nullptr
        && this->publicIpAddressPoolId_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->securityProtectionTypes_ != nullptr && this->tag_ != nullptr && this->zone_ != nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline int64_t activityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, 0L) };
    inline AllocateEipAddressRequest& setActivityId(int64_t activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline AllocateEipAddressRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline string bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
    inline AllocateEipAddressRequest& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AllocateEipAddressRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AllocateEipAddressRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ISP Field Functions 
    bool hasISP() const { return this->ISP_ != nullptr;};
    void deleteISP() { this->ISP_ = nullptr;};
    inline string ISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
    inline AllocateEipAddressRequest& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline AllocateEipAddressRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AllocateEipAddressRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline AllocateEipAddressRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline AllocateEipAddressRequest& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AllocateEipAddressRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // netmode Field Functions 
    bool hasNetmode() const { return this->netmode_ != nullptr;};
    void deleteNetmode() { this->netmode_ = nullptr;};
    inline string netmode() const { DARABONBA_PTR_GET_DEFAULT(netmode_, "") };
    inline AllocateEipAddressRequest& setNetmode(string netmode) { DARABONBA_PTR_SET_VALUE(netmode_, netmode) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AllocateEipAddressRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AllocateEipAddressRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline AllocateEipAddressRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline AllocateEipAddressRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // publicIpAddressPoolId Field Functions 
    bool hasPublicIpAddressPoolId() const { return this->publicIpAddressPoolId_ != nullptr;};
    void deletePublicIpAddressPoolId() { this->publicIpAddressPoolId_ = nullptr;};
    inline string publicIpAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddressPoolId_, "") };
    inline AllocateEipAddressRequest& setPublicIpAddressPoolId(string publicIpAddressPoolId) { DARABONBA_PTR_SET_VALUE(publicIpAddressPoolId_, publicIpAddressPoolId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AllocateEipAddressRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AllocateEipAddressRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AllocateEipAddressRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AllocateEipAddressRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityProtectionTypes Field Functions 
    bool hasSecurityProtectionTypes() const { return this->securityProtectionTypes_ != nullptr;};
    void deleteSecurityProtectionTypes() { this->securityProtectionTypes_ = nullptr;};
    inline const vector<string> & securityProtectionTypes() const { DARABONBA_PTR_GET_CONST(securityProtectionTypes_, vector<string>) };
    inline vector<string> securityProtectionTypes() { DARABONBA_PTR_GET(securityProtectionTypes_, vector<string>) };
    inline AllocateEipAddressRequest& setSecurityProtectionTypes(const vector<string> & securityProtectionTypes) { DARABONBA_PTR_SET_VALUE(securityProtectionTypes_, securityProtectionTypes) };
    inline AllocateEipAddressRequest& setSecurityProtectionTypes(vector<string> && securityProtectionTypes) { DARABONBA_PTR_SET_RVALUE(securityProtectionTypes_, securityProtectionTypes) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<AllocateEipAddressRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<AllocateEipAddressRequestTag>) };
    inline vector<AllocateEipAddressRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<AllocateEipAddressRequestTag>) };
    inline AllocateEipAddressRequest& setTag(const vector<AllocateEipAddressRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline AllocateEipAddressRequest& setTag(vector<AllocateEipAddressRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string zone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline AllocateEipAddressRequest& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    // The promotion code. This parameter is not required.
    std::shared_ptr<int64_t> activityId_ = nullptr;
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // *   **false** (default): The automatic payment is disabled. If you select this option, you must go to the Order Center to complete the payment after an order is generated.
    // *   **true**: The automatic payment is enabled. Payments are automatically complete after an order is generated.
    // 
    // If **InstanceChargeType** is set to **PrePaid**, this parameter is required. If **InstanceChargeType** is set to **PostPaid**, this parameter is not required.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The maximum bandwidth of the EIP. Unit: Mbit/s.
    // 
    // *   Valid values when **InstanceChargeType** is set to **PostPaid** and **InternetChargeType** is set to **PayByBandwidth**: **1** to **500**.****
    // *   Valid values when **InstanceChargeType** is set to **PostPaid** and **InternetChargeType** is set to **PayByTraffic**: **1** to **200**.****
    // *   Valid values when **InstanceChargeType** is set to **PrePaid**: **1** to **1000**.****
    // 
    // Default value: **5**. Unit: Mbit/s.
    std::shared_ptr<string> bandwidth_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate a token, but you must make sure that the token is unique among different requests. The **client token** can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the value of **RequestId** as the **client token**. The value of **RequestId** is different for each API request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the EIP.
    // 
    // The description must be 2 to 256 characters in length. The description must start with a letter but cannot start with `http://` or `https://`.
    // 
    // >  You cannot specify this parameter if you create a subscription EIP.
    std::shared_ptr<string> description_ = nullptr;
    // The line type. Valid values:
    // 
    // *   **BGP** (default): BGP (Multi-ISP) All regions support BGP (Multi-ISP) EIPs.
    // *   **BGP_PRO**: BGP (Multi-ISP) Pro Only the following regions support BGP (Multi-ISP) Pro lines: China (Hong Kong), Singapore, Japan (Tokyo), Malaysia (Kuala Lumpur), Philippines (Manila), Indonesia (Jakarta), and Thailand (Bangkok).
    // 
    // For more information about BGP (Multi-ISP) and BGP (Multi-ISP) Pro, see the "Line types" section of [What is EIP?](https://help.aliyun.com/document_detail/32321.html)
    // 
    // *   If you are allowed to use single-ISP bandwidth, you can also choose one of the following values:
    // 
    //     *   **ChinaTelecom**
    //     *   **ChinaUnicom**
    //     *   **ChinaMobile**
    //     *   **ChinaTelecom_L2**
    //     *   **ChinaUnicom_L2**
    //     *   **ChinaMobile_L2**
    // 
    // *   If your services are deployed in China East 1 Finance, this parameter is required and you must set the value to **BGP_FinanceCloud**.
    std::shared_ptr<string> ISP_ = nullptr;
    // The billing method of the EIP. Valid values:
    // 
    // *   **PrePaid**: subscription
    // *   **PostPaid** (default): pay-as-you-go
    // 
    // If **InstanceChargeType** is set to **PrePaid**, set **InternetChargeType** to **PayByBandwidth**. If **InstanceChargeType** is set to **PostPaid**, set **InternetChargeType** to **PayByBandwidth** or **PayByTraffic**.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The EIP ID.
    // 
    // Specify **IpAddress** or **InstanceId**. If you leave both parameters empty, the system randomly allocates an EIP.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The metering method of the EIP. Valid values:
    // 
    // *   **PayByBandwidth** (default): pay-by-bandwidth
    // *   **PayByTraffic**: pay-by-data-transfer
    // 
    // When **InstanceChargeType** is set to **PrePaid**, set **InternetChargeType** to **PayByBandwidth**.
    // 
    // When **InstanceChargeType** is set to **PostPaid**, set **InternetChargeType** to **PayByBandwidth** or **PayByTraffic**.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The IP address of the EIP that you want to request.
    // 
    // Specify **IpAddress** or **InstanceId**. If you leave both parameters empty, the system randomly allocates an EIP.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The EIP name.
    // 
    // The name must be 1 to 128 characters in length and start with a letter, and can contain letters, digits, periods (.), underscores (_), and hyphens (-).
    // 
    // >  You cannot specify this parameter if you create a subscription EIP.
    std::shared_ptr<string> name_ = nullptr;
    // The network type. Default value: **public**.
    std::shared_ptr<string> netmode_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The subscription duration of the EIP.
    // 
    // Valid values when **PricingCycle** is set to **Month**: **1** to **9**.****
    // 
    // Valid values when **PricingCycle** is set to **Year**: **1** to **5**.****
    // 
    // This parameter must be specified when **InstanceChargeType** is set to **PrePaid**. This parameter is optional when **InstanceChargeType** is set to **PostPaid**.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The billing cycle of the subscription EIP. Valid values:
    // 
    // *   **Month** (default)
    // *   **Year**
    // 
    // If **InstanceChargeType** is set to **PrePaid**, this parameter is required. If **InstanceChargeType** is set to **PostPaid**, this parameter is not required.
    std::shared_ptr<string> pricingCycle_ = nullptr;
    // The ID of the IP address pool.
    // 
    // The EIP is allocated from the IP address pool.
    // 
    // By default, the IP address pool feature is unavailable. To use the IP address pool, apply for the privilege in the Quota Center console. For more information, see the "Request a quota increase in the Quota Center console" section in [Manage EIP quotas](https://help.aliyun.com/document_detail/108213.html).
    std::shared_ptr<string> publicIpAddressPoolId_ = nullptr;
    // The ID of the region to which the EIP belongs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The editions of Anti-DDoS.
    // 
    // *   If you do not specify this parameter, Anti-DDoS Origin Basic is used.
    // *   If you set the parameter to **AntiDDoS_Enhanced**, Anti-DDoS Pro/Premium is used.
    // 
    // You can specify up to 10 editions of Anti-DDoS.
    std::shared_ptr<vector<string>> securityProtectionTypes_ = nullptr;
    std::shared_ptr<vector<AllocateEipAddressRequestTag>> tag_ = nullptr;
    // The zone of the EIP.
    // 
    // When the service type of the IP address pool specified by **PublicIpAddressPoolId** is CloudBox, the default value is the zone of the IP address pool.
    // 
    // For more information, see [ListPublicIpAddressPools](https://help.aliyun.com/document_detail/429433.html).
    std::shared_ptr<string> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
