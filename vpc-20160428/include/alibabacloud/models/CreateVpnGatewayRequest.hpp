// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPNGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPNGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateVpnGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpnGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DisasterRecoveryVSwitchId, disasterRecoveryVSwitchId_);
      DARABONBA_PTR_TO_JSON(EnableIpsec, enableIpsec_);
      DARABONBA_PTR_TO_JSON(EnableSsl, enableSsl_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SslConnections, sslConnections_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpnType, vpnType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpnGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DisasterRecoveryVSwitchId, disasterRecoveryVSwitchId_);
      DARABONBA_PTR_FROM_JSON(EnableIpsec, enableIpsec_);
      DARABONBA_PTR_FROM_JSON(EnableSsl, enableSsl_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SslConnections, sslConnections_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpnType, vpnType_);
    };
    CreateVpnGatewayRequest() = default ;
    CreateVpnGatewayRequest(const CreateVpnGatewayRequest &) = default ;
    CreateVpnGatewayRequest(CreateVpnGatewayRequest &&) = default ;
    CreateVpnGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpnGatewayRequest() = default ;
    CreateVpnGatewayRequest& operator=(const CreateVpnGatewayRequest &) = default ;
    CreateVpnGatewayRequest& operator=(CreateVpnGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->bandwidth_ == nullptr && return this->clientToken_ == nullptr && return this->disasterRecoveryVSwitchId_ == nullptr && return this->enableIpsec_ == nullptr && return this->enableSsl_ == nullptr
        && return this->instanceChargeType_ == nullptr && return this->name_ == nullptr && return this->networkType_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->period_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->sslConnections_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr && return this->vpnType_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateVpnGatewayRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateVpnGatewayRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateVpnGatewayRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // disasterRecoveryVSwitchId Field Functions 
    bool hasDisasterRecoveryVSwitchId() const { return this->disasterRecoveryVSwitchId_ != nullptr;};
    void deleteDisasterRecoveryVSwitchId() { this->disasterRecoveryVSwitchId_ = nullptr;};
    inline string disasterRecoveryVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(disasterRecoveryVSwitchId_, "") };
    inline CreateVpnGatewayRequest& setDisasterRecoveryVSwitchId(string disasterRecoveryVSwitchId) { DARABONBA_PTR_SET_VALUE(disasterRecoveryVSwitchId_, disasterRecoveryVSwitchId) };


    // enableIpsec Field Functions 
    bool hasEnableIpsec() const { return this->enableIpsec_ != nullptr;};
    void deleteEnableIpsec() { this->enableIpsec_ = nullptr;};
    inline bool enableIpsec() const { DARABONBA_PTR_GET_DEFAULT(enableIpsec_, false) };
    inline CreateVpnGatewayRequest& setEnableIpsec(bool enableIpsec) { DARABONBA_PTR_SET_VALUE(enableIpsec_, enableIpsec) };


    // enableSsl Field Functions 
    bool hasEnableSsl() const { return this->enableSsl_ != nullptr;};
    void deleteEnableSsl() { this->enableSsl_ = nullptr;};
    inline bool enableSsl() const { DARABONBA_PTR_GET_DEFAULT(enableSsl_, false) };
    inline CreateVpnGatewayRequest& setEnableSsl(bool enableSsl) { DARABONBA_PTR_SET_VALUE(enableSsl_, enableSsl) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline CreateVpnGatewayRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateVpnGatewayRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateVpnGatewayRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateVpnGatewayRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateVpnGatewayRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateVpnGatewayRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVpnGatewayRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateVpnGatewayRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateVpnGatewayRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateVpnGatewayRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sslConnections Field Functions 
    bool hasSslConnections() const { return this->sslConnections_ != nullptr;};
    void deleteSslConnections() { this->sslConnections_ = nullptr;};
    inline int32_t sslConnections() const { DARABONBA_PTR_GET_DEFAULT(sslConnections_, 0) };
    inline CreateVpnGatewayRequest& setSslConnections(int32_t sslConnections) { DARABONBA_PTR_SET_VALUE(sslConnections_, sslConnections) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateVpnGatewayRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateVpnGatewayRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpnType Field Functions 
    bool hasVpnType() const { return this->vpnType_ != nullptr;};
    void deleteVpnType() { this->vpnType_ = nullptr;};
    inline string vpnType() const { DARABONBA_PTR_GET_DEFAULT(vpnType_, "") };
    inline CreateVpnGatewayRequest& setVpnType(string vpnType) { DARABONBA_PTR_SET_VALUE(vpnType_, vpnType) };


  protected:
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // > To create a VPN gateway, we recommend that you enable automatic payment. If you disable automatic payment, you must manually pay the bill to create the VPN gateway.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The maximum bandwidth of the VPN gateway. Unit: Mbit/s.
    // 
    // *   If you want to create a public VPN gateway, valid values are **10**, **100**, **200**, **500**, and **1000**.
    // *   If you want to create a private VPN gateway, valid values are **200** and **1000**.
    // 
    // >  The maximum bandwidth supported by VPN gateways in some regions is 500 Mbit/s. For more information, see [VPN gateway limits](https://help.aliyun.com/document_detail/65290.html).
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate a value, and you must make sure that each request has a unique token value. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the value of **RequestId** as the value of **ClientToken**. The value of **RequestId** for each API request is different.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The second vSwitch with which you want to associate the VPN gateway.
    // 
    // *   If you call this operation in a region that supports the IPsec-VPN connections in dual-tunnel mode, this parameter is required.
    // *   You need to specify two vSwitches in different zones in the virtual private cloud (VPC) that is associated with the VPN gateway to implement disaster recovery across zones.
    // *   For a region that supports only one zone, disaster recovery across zones is not supported. We recommend that you specify two vSwitches in the zone to implement high availability. You can specify the same vSwitch.
    // 
    // For more information about the regions and zones that support the IPsec-VPN connections in dual-tunnel mode, see [IPsec-VPN connections support the dual-tunnel mode](https://help.aliyun.com/document_detail/2358946.html).
    std::shared_ptr<string> disasterRecoveryVSwitchId_ = nullptr;
    // Specifies whether to enable IPsec-VPN for the VPN gateway. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> enableIpsec_ = nullptr;
    // Specifies whether to enable SSL-VPN. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> enableSsl_ = nullptr;
    // The billing method of the VPN gateway. Set the value to **POSTPAY**, which specifies the pay-as-you-go billing method.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The name of the VPN gateway. The default value is the ID of the VPN gateway.
    // 
    // The name must be 2 to 100 characters in length and cannot start with `http://` or `https://`. It must start with a letter and can contain letters, digits, underscores (_), hyphens (-), and periods (.). Other special characters are not supported.
    std::shared_ptr<string> name_ = nullptr;
    // The network type of the VPN gateway. Valid values:
    // 
    // *   **public** (default)
    // *   **private**
    std::shared_ptr<string> networkType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The subscription duration. Unit: month. Valid values: **1** to **9**, **12**, **24**, and **36**.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The region ID of the VPN gateway. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the VPN gateway belongs.
    // 
    // *   You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query resource group IDs.
    // 
    // *   If you do not specify a resource group ID, the VPN gateway belongs to the default resource group.
    // 
    // *   After the VPN gateway is created, the following resources also belong to the resource group and you cannot change the resource group: SSL servers, SSL client certificates, IPsec servers, and IPsec-VPN connections.
    // 
    //     If you move the VPN gateway to a new resource group, the preceding resources are also moved to the new resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The maximum number of clients that can be connected at the same time. Valid values: **5** (default), **10**, **20**, **50**, **100**, **200**, **500**, and **1000**.
    std::shared_ptr<int32_t> sslConnections_ = nullptr;
    // The vSwitch with which you want to associate the VPN gateway.
    // 
    // *   If you call this operation in a region that supports the IPsec-VPN connections in dual-tunnel mode, this parameter is required. You must specify a vSwitch and specify **DisasterRecoveryVSwitchId**.
    // *   If you call this operation in a region that supports the IPsec-VPN connections in single-tunnel mode and do not specify a vSwitch, the system automatically specifies a vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC) where you want to create the VPN gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The type of the VPN gateway. Valid values:
    // 
    // Set the value to **Normal** (default), which specifies a standard NAT gateway.
    std::shared_ptr<string> vpnType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
