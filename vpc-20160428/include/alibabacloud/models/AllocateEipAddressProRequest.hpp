// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEEIPADDRESSPROREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEEIPADDRESSPROREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AllocateEipAddressProRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AllocateEipAddressProRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateEipAddressProRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ISP, ISP_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
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
    };
    friend void from_json(const Darabonba::Json& j, AllocateEipAddressProRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ISP, ISP_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
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
    };
    AllocateEipAddressProRequest() = default ;
    AllocateEipAddressProRequest(const AllocateEipAddressProRequest &) = default ;
    AllocateEipAddressProRequest(AllocateEipAddressProRequest &&) = default ;
    AllocateEipAddressProRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateEipAddressProRequest() = default ;
    AllocateEipAddressProRequest& operator=(const AllocateEipAddressProRequest &) = default ;
    AllocateEipAddressProRequest& operator=(AllocateEipAddressProRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPay_ != nullptr
        && this->bandwidth_ != nullptr && this->clientToken_ != nullptr && this->ISP_ != nullptr && this->instanceChargeType_ != nullptr && this->instanceId_ != nullptr
        && this->internetChargeType_ != nullptr && this->ipAddress_ != nullptr && this->netmode_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->period_ != nullptr && this->pricingCycle_ != nullptr && this->publicIpAddressPoolId_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->securityProtectionTypes_ != nullptr && this->tag_ != nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline AllocateEipAddressProRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline string bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
    inline AllocateEipAddressProRequest& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AllocateEipAddressProRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ISP Field Functions 
    bool hasISP() const { return this->ISP_ != nullptr;};
    void deleteISP() { this->ISP_ = nullptr;};
    inline string ISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
    inline AllocateEipAddressProRequest& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline AllocateEipAddressProRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AllocateEipAddressProRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline AllocateEipAddressProRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline AllocateEipAddressProRequest& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // netmode Field Functions 
    bool hasNetmode() const { return this->netmode_ != nullptr;};
    void deleteNetmode() { this->netmode_ = nullptr;};
    inline string netmode() const { DARABONBA_PTR_GET_DEFAULT(netmode_, "") };
    inline AllocateEipAddressProRequest& setNetmode(string netmode) { DARABONBA_PTR_SET_VALUE(netmode_, netmode) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AllocateEipAddressProRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AllocateEipAddressProRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline AllocateEipAddressProRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline AllocateEipAddressProRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // publicIpAddressPoolId Field Functions 
    bool hasPublicIpAddressPoolId() const { return this->publicIpAddressPoolId_ != nullptr;};
    void deletePublicIpAddressPoolId() { this->publicIpAddressPoolId_ = nullptr;};
    inline string publicIpAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddressPoolId_, "") };
    inline AllocateEipAddressProRequest& setPublicIpAddressPoolId(string publicIpAddressPoolId) { DARABONBA_PTR_SET_VALUE(publicIpAddressPoolId_, publicIpAddressPoolId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AllocateEipAddressProRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AllocateEipAddressProRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AllocateEipAddressProRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AllocateEipAddressProRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityProtectionTypes Field Functions 
    bool hasSecurityProtectionTypes() const { return this->securityProtectionTypes_ != nullptr;};
    void deleteSecurityProtectionTypes() { this->securityProtectionTypes_ = nullptr;};
    inline const vector<string> & securityProtectionTypes() const { DARABONBA_PTR_GET_CONST(securityProtectionTypes_, vector<string>) };
    inline vector<string> securityProtectionTypes() { DARABONBA_PTR_GET(securityProtectionTypes_, vector<string>) };
    inline AllocateEipAddressProRequest& setSecurityProtectionTypes(const vector<string> & securityProtectionTypes) { DARABONBA_PTR_SET_VALUE(securityProtectionTypes_, securityProtectionTypes) };
    inline AllocateEipAddressProRequest& setSecurityProtectionTypes(vector<string> && securityProtectionTypes) { DARABONBA_PTR_SET_RVALUE(securityProtectionTypes_, securityProtectionTypes) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<AllocateEipAddressProRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<AllocateEipAddressProRequestTag>) };
    inline vector<AllocateEipAddressProRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<AllocateEipAddressProRequestTag>) };
    inline AllocateEipAddressProRequest& setTag(const vector<AllocateEipAddressProRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline AllocateEipAddressProRequest& setTag(vector<AllocateEipAddressProRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Specifies whether to enable automatic payment. Default value: true. Valid values:
    // 
    // *   **false**: Automatic payment is disabled. After an order is generated, you must go to the Order Center to complete the payment.
    // *   **true**: Automatic payment is enabled. After an order is generated, the payment is automatically completed.
    // 
    // This parameter is required if **InstanceChargeType** is set to **PrePaid**. This parameter is optional if **InstanceChargeType** is set to **PostPaid**.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The maximum bandwidth of the specified EIP. Unit: Mbit/s.
    // 
    // *   When **InstanceChargeType** is set to **PostPaid** and **InternetChargeType** is set to **PayByBandwidth**, valid values for **Bandwidth** are **1** to **500**.
    // *   When **InstanceChargeType** is set to **PostPaid** and **InternetChargeType** is set to **PayByTraffic**, valid values for **Bandwidth** are **1** to **200**.
    // *   When **InstanceChargeType** is set to **PrePaid**, valid values for **Bandwidth** are **1** to **1000**.
    // 
    // Default value: **5** Mbit /s.
    std::shared_ptr<string> bandwidth_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate a token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The line type. Valid values:
    // 
    // *   **BGP** (default): BGP (Multi-ISP) line The BGP (Multi-ISP) line is supported in all regions.
    // *   **BGP_PRO**: BGP (Multi-ISP) Pro line The BGP (Multi-ISP) Pro line is supported in the China (Hong Kong), Singapore, Malaysia (Kuala Lumpur), Philippines (Manila), Indonesia (Jakarta), and Thailand (Bangkok) regions.
    // 
    // For more information about the BGP (Multi-ISP) line and BGP (Multi-ISP) Pro line, see the "Line types" section of [What is EIP?](https://help.aliyun.com/document_detail/32321.html)
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
    // *   If your services are deployed in China East 1 Finance, this parameter is required and you must set the parameter to **BGP_FinanceCloud**.
    std::shared_ptr<string> ISP_ = nullptr;
    // The billing method of the EIP. Valid values:
    // 
    // *   **PrePaid**: subscription
    // *   **PostPaid** (default): pay-as-you-go
    // 
    // Set the value of **InternetChargeType** to **PayByBandwidth** if **InstanceChargeType** is set to **PrePaid**.
    // 
    // Valid values when **InstanceChargeType** is set to **PostPaid**: **PayByBandwidth** or **PayByTraffic**.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The EIP ID.
    // 
    // Specify **IpAddress** or **InstanceId**. If you leave both parameters empty, the system randomly allocates an EIP.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The metering method of the EIP. Valid values:
    // 
    // *   **PayByBandwidth** (default): pay-by-bandwidth.
    // *   **PayByTraffic**: pay-by-data-transfer.
    // 
    // When **InstanceChargeType** is set to **PrePaid**, you must set **InternetChargeType** to **PayByBandwidth**.
    // 
    // When **InstanceChargeType** is set to **PostPaid**, set **InternetChargeType** to **PayByBandwidth** or **PayByTraffic**.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The IP address of the EIP.
    // 
    // Specify **IpAddress** or **InstanceId**. If you leave both parameters empty, the system randomly allocates an EIP.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The network type. By default, this value is set to **public**, which specifies the public network type.
    std::shared_ptr<string> netmode_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The subscription duration.
    // 
    // *   Valid values when **PricingCycle** is set to **Month**: **1 to 9**.****
    // *   Valid values when **PricingCycle** is set to **Year**: **1 to 3**.****
    // 
    // This parameter is required if **InstanceChargeType** is set to **PrePaid**.
    // 
    // Leave this parameter empty if **InstanceChargeType** is set to **PostPaid**.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The billing cycle of the subscription EIP. Valid values:
    // 
    // *   **Month** (default)
    // *   **Year**
    // 
    // This parameter is required if **InstanceChargeType** is set to **PrePaid**. This parameter is optional if **InstanceChargeType** is set to **PostPaid**.
    std::shared_ptr<string> pricingCycle_ = nullptr;
    // The ID of the IP address pool.
    // 
    // The EIP is allocated from the IP address pool.
    // 
    // By default, you cannot use the IP address pool. To use this feature, apply for the privilege in the Quota Center console. For more information, see the "Request a quota increase in the Quota Center console" section of [Manage EIP quotas](https://help.aliyun.com/document_detail/108213.html).
    std::shared_ptr<string> publicIpAddressPoolId_ = nullptr;
    // The ID of the region to which the EIP belongs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the EIP belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The editions of Anti-DDoS.
    // 
    // *   If you do not specify this parameter, Anti-DDoS Origin Basic is used.
    // *   If you set the parameter to **AntiDDoS_Enhanced**, Anti-DDoS Pro/Premium is used.
    // 
    // You can configure Anti-DDoS editions for up to 10 EIPs.
    std::shared_ptr<vector<string>> securityProtectionTypes_ = nullptr;
    std::shared_ptr<vector<AllocateEipAddressProRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
