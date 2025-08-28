// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPNCONNECTIONATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPNCONNECTIONATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyVpnConnectionAttributeResponseBodyIkeConfig.hpp>
#include <alibabacloud/models/ModifyVpnConnectionAttributeResponseBodyIpsecConfig.hpp>
#include <alibabacloud/models/ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecification.hpp>
#include <alibabacloud/models/ModifyVpnConnectionAttributeResponseBodyVcoHealthCheck.hpp>
#include <alibabacloud/models/ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVpnConnectionAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpnConnectionAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_TO_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_TO_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_TO_JSON(EnableTunnelsBgp, enableTunnelsBgp_);
      DARABONBA_PTR_TO_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_TO_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_TO_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RemoteSubnet, remoteSubnet_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
      DARABONBA_PTR_TO_JSON(VcoHealthCheck, vcoHealthCheck_);
      DARABONBA_PTR_TO_JSON(VpnBgpConfig, vpnBgpConfig_);
      DARABONBA_PTR_TO_JSON(VpnConnectionId, vpnConnectionId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpnConnectionAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_FROM_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_FROM_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_FROM_JSON(EnableTunnelsBgp, enableTunnelsBgp_);
      DARABONBA_PTR_FROM_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_FROM_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_FROM_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RemoteSubnet, remoteSubnet_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
      DARABONBA_PTR_FROM_JSON(VcoHealthCheck, vcoHealthCheck_);
      DARABONBA_PTR_FROM_JSON(VpnBgpConfig, vpnBgpConfig_);
      DARABONBA_PTR_FROM_JSON(VpnConnectionId, vpnConnectionId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    ModifyVpnConnectionAttributeResponseBody() = default ;
    ModifyVpnConnectionAttributeResponseBody(const ModifyVpnConnectionAttributeResponseBody &) = default ;
    ModifyVpnConnectionAttributeResponseBody(ModifyVpnConnectionAttributeResponseBody &&) = default ;
    ModifyVpnConnectionAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpnConnectionAttributeResponseBody() = default ;
    ModifyVpnConnectionAttributeResponseBody& operator=(const ModifyVpnConnectionAttributeResponseBody &) = default ;
    ModifyVpnConnectionAttributeResponseBody& operator=(ModifyVpnConnectionAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->customerGatewayId_ != nullptr && this->description_ != nullptr && this->effectImmediately_ != nullptr && this->enableDpd_ != nullptr && this->enableNatTraversal_ != nullptr
        && this->enableTunnelsBgp_ != nullptr && this->ikeConfig_ != nullptr && this->ipsecConfig_ != nullptr && this->localSubnet_ != nullptr && this->name_ != nullptr
        && this->remoteSubnet_ != nullptr && this->requestId_ != nullptr && this->resourceGroupId_ != nullptr && this->tunnelOptionsSpecification_ != nullptr && this->vcoHealthCheck_ != nullptr
        && this->vpnBgpConfig_ != nullptr && this->vpnConnectionId_ != nullptr && this->vpnGatewayId_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ModifyVpnConnectionAttributeResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customerGatewayId Field Functions 
    bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
    void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
    inline string customerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
    inline ModifyVpnConnectionAttributeResponseBody& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyVpnConnectionAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // effectImmediately Field Functions 
    bool hasEffectImmediately() const { return this->effectImmediately_ != nullptr;};
    void deleteEffectImmediately() { this->effectImmediately_ = nullptr;};
    inline bool effectImmediately() const { DARABONBA_PTR_GET_DEFAULT(effectImmediately_, false) };
    inline ModifyVpnConnectionAttributeResponseBody& setEffectImmediately(bool effectImmediately) { DARABONBA_PTR_SET_VALUE(effectImmediately_, effectImmediately) };


    // enableDpd Field Functions 
    bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
    void deleteEnableDpd() { this->enableDpd_ = nullptr;};
    inline bool enableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, false) };
    inline ModifyVpnConnectionAttributeResponseBody& setEnableDpd(bool enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


    // enableNatTraversal Field Functions 
    bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
    void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
    inline bool enableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, false) };
    inline ModifyVpnConnectionAttributeResponseBody& setEnableNatTraversal(bool enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


    // enableTunnelsBgp Field Functions 
    bool hasEnableTunnelsBgp() const { return this->enableTunnelsBgp_ != nullptr;};
    void deleteEnableTunnelsBgp() { this->enableTunnelsBgp_ = nullptr;};
    inline bool enableTunnelsBgp() const { DARABONBA_PTR_GET_DEFAULT(enableTunnelsBgp_, false) };
    inline ModifyVpnConnectionAttributeResponseBody& setEnableTunnelsBgp(bool enableTunnelsBgp) { DARABONBA_PTR_SET_VALUE(enableTunnelsBgp_, enableTunnelsBgp) };


    // ikeConfig Field Functions 
    bool hasIkeConfig() const { return this->ikeConfig_ != nullptr;};
    void deleteIkeConfig() { this->ikeConfig_ = nullptr;};
    inline const ModifyVpnConnectionAttributeResponseBodyIkeConfig & ikeConfig() const { DARABONBA_PTR_GET_CONST(ikeConfig_, ModifyVpnConnectionAttributeResponseBodyIkeConfig) };
    inline ModifyVpnConnectionAttributeResponseBodyIkeConfig ikeConfig() { DARABONBA_PTR_GET(ikeConfig_, ModifyVpnConnectionAttributeResponseBodyIkeConfig) };
    inline ModifyVpnConnectionAttributeResponseBody& setIkeConfig(const ModifyVpnConnectionAttributeResponseBodyIkeConfig & ikeConfig) { DARABONBA_PTR_SET_VALUE(ikeConfig_, ikeConfig) };
    inline ModifyVpnConnectionAttributeResponseBody& setIkeConfig(ModifyVpnConnectionAttributeResponseBodyIkeConfig && ikeConfig) { DARABONBA_PTR_SET_RVALUE(ikeConfig_, ikeConfig) };


    // ipsecConfig Field Functions 
    bool hasIpsecConfig() const { return this->ipsecConfig_ != nullptr;};
    void deleteIpsecConfig() { this->ipsecConfig_ = nullptr;};
    inline const ModifyVpnConnectionAttributeResponseBodyIpsecConfig & ipsecConfig() const { DARABONBA_PTR_GET_CONST(ipsecConfig_, ModifyVpnConnectionAttributeResponseBodyIpsecConfig) };
    inline ModifyVpnConnectionAttributeResponseBodyIpsecConfig ipsecConfig() { DARABONBA_PTR_GET(ipsecConfig_, ModifyVpnConnectionAttributeResponseBodyIpsecConfig) };
    inline ModifyVpnConnectionAttributeResponseBody& setIpsecConfig(const ModifyVpnConnectionAttributeResponseBodyIpsecConfig & ipsecConfig) { DARABONBA_PTR_SET_VALUE(ipsecConfig_, ipsecConfig) };
    inline ModifyVpnConnectionAttributeResponseBody& setIpsecConfig(ModifyVpnConnectionAttributeResponseBodyIpsecConfig && ipsecConfig) { DARABONBA_PTR_SET_RVALUE(ipsecConfig_, ipsecConfig) };


    // localSubnet Field Functions 
    bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
    void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
    inline string localSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
    inline ModifyVpnConnectionAttributeResponseBody& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyVpnConnectionAttributeResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remoteSubnet Field Functions 
    bool hasRemoteSubnet() const { return this->remoteSubnet_ != nullptr;};
    void deleteRemoteSubnet() { this->remoteSubnet_ = nullptr;};
    inline string remoteSubnet() const { DARABONBA_PTR_GET_DEFAULT(remoteSubnet_, "") };
    inline ModifyVpnConnectionAttributeResponseBody& setRemoteSubnet(string remoteSubnet) { DARABONBA_PTR_SET_VALUE(remoteSubnet_, remoteSubnet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyVpnConnectionAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyVpnConnectionAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tunnelOptionsSpecification Field Functions 
    bool hasTunnelOptionsSpecification() const { return this->tunnelOptionsSpecification_ != nullptr;};
    void deleteTunnelOptionsSpecification() { this->tunnelOptionsSpecification_ = nullptr;};
    inline const ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecification & tunnelOptionsSpecification() const { DARABONBA_PTR_GET_CONST(tunnelOptionsSpecification_, ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecification) };
    inline ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecification tunnelOptionsSpecification() { DARABONBA_PTR_GET(tunnelOptionsSpecification_, ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecification) };
    inline ModifyVpnConnectionAttributeResponseBody& setTunnelOptionsSpecification(const ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecification & tunnelOptionsSpecification) { DARABONBA_PTR_SET_VALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };
    inline ModifyVpnConnectionAttributeResponseBody& setTunnelOptionsSpecification(ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecification && tunnelOptionsSpecification) { DARABONBA_PTR_SET_RVALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };


    // vcoHealthCheck Field Functions 
    bool hasVcoHealthCheck() const { return this->vcoHealthCheck_ != nullptr;};
    void deleteVcoHealthCheck() { this->vcoHealthCheck_ = nullptr;};
    inline const ModifyVpnConnectionAttributeResponseBodyVcoHealthCheck & vcoHealthCheck() const { DARABONBA_PTR_GET_CONST(vcoHealthCheck_, ModifyVpnConnectionAttributeResponseBodyVcoHealthCheck) };
    inline ModifyVpnConnectionAttributeResponseBodyVcoHealthCheck vcoHealthCheck() { DARABONBA_PTR_GET(vcoHealthCheck_, ModifyVpnConnectionAttributeResponseBodyVcoHealthCheck) };
    inline ModifyVpnConnectionAttributeResponseBody& setVcoHealthCheck(const ModifyVpnConnectionAttributeResponseBodyVcoHealthCheck & vcoHealthCheck) { DARABONBA_PTR_SET_VALUE(vcoHealthCheck_, vcoHealthCheck) };
    inline ModifyVpnConnectionAttributeResponseBody& setVcoHealthCheck(ModifyVpnConnectionAttributeResponseBodyVcoHealthCheck && vcoHealthCheck) { DARABONBA_PTR_SET_RVALUE(vcoHealthCheck_, vcoHealthCheck) };


    // vpnBgpConfig Field Functions 
    bool hasVpnBgpConfig() const { return this->vpnBgpConfig_ != nullptr;};
    void deleteVpnBgpConfig() { this->vpnBgpConfig_ = nullptr;};
    inline const ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig & vpnBgpConfig() const { DARABONBA_PTR_GET_CONST(vpnBgpConfig_, ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig) };
    inline ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig vpnBgpConfig() { DARABONBA_PTR_GET(vpnBgpConfig_, ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig) };
    inline ModifyVpnConnectionAttributeResponseBody& setVpnBgpConfig(const ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig & vpnBgpConfig) { DARABONBA_PTR_SET_VALUE(vpnBgpConfig_, vpnBgpConfig) };
    inline ModifyVpnConnectionAttributeResponseBody& setVpnBgpConfig(ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig && vpnBgpConfig) { DARABONBA_PTR_SET_RVALUE(vpnBgpConfig_, vpnBgpConfig) };


    // vpnConnectionId Field Functions 
    bool hasVpnConnectionId() const { return this->vpnConnectionId_ != nullptr;};
    void deleteVpnConnectionId() { this->vpnConnectionId_ = nullptr;};
    inline string vpnConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpnConnectionId_, "") };
    inline ModifyVpnConnectionAttributeResponseBody& setVpnConnectionId(string vpnConnectionId) { DARABONBA_PTR_SET_VALUE(vpnConnectionId_, vpnConnectionId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string vpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline ModifyVpnConnectionAttributeResponseBody& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The timestamp generated when the IPsec-VPN connection was established. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the customer gateway associated with the IPsec-VPN connection.
    // 
    // This parameter is returned only for single-tunnel IPsec-VPN connections.
    std::shared_ptr<string> customerGatewayId_ = nullptr;
    // The description of the IPsec-VPN connection.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether IPsec negotiations immediately start after the configuration takes effect. Valid values:
    // 
    // *   **true**: IPsec negotiations immediately start after the configuration takes effect.
    // *   **false**: IPsec negotiations start when inbound traffic is detected.
    std::shared_ptr<bool> effectImmediately_ = nullptr;
    // Indicates whether the DPD feature is enabled for the IPsec-VPN connection. Valid values:
    // 
    // *   **false**
    // *   **true**
    // 
    // This parameter is returned only for single-tunnel IPsec-VPN connections.
    std::shared_ptr<bool> enableDpd_ = nullptr;
    // Indicates whether NAT traversal is enabled for the IPsec-VPN connection. Valid values: Valid values:
    // 
    // *   **false**
    // *   **true**
    // 
    // This parameter is returned only for single-tunnel IPsec-VPN connections.
    std::shared_ptr<bool> enableNatTraversal_ = nullptr;
    // Indicates whether BGP is enabled for the tunnel. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // This parameter is returned only by dual-tunnel IPsec-VPN connections.
    std::shared_ptr<bool> enableTunnelsBgp_ = nullptr;
    // The configuration of Phase 1 negotiations.
    // 
    // **IkeConfig** parameters are returned only for single-tunnel IPsec-VPN connections.
    std::shared_ptr<ModifyVpnConnectionAttributeResponseBodyIkeConfig> ikeConfig_ = nullptr;
    // The configuration of Phase 2 negotiations.
    // 
    // **IpsecConfig** parameters are returned only for single-tunnel IPsec-VPN connections.
    std::shared_ptr<ModifyVpnConnectionAttributeResponseBodyIpsecConfig> ipsecConfig_ = nullptr;
    // The CIDR block on the VPC side.
    std::shared_ptr<string> localSubnet_ = nullptr;
    // The name of the IPsec-VPN connection.
    std::shared_ptr<string> name_ = nullptr;
    // The CIDR block on the data center side.
    std::shared_ptr<string> remoteSubnet_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group to which the IPsec-VPN connection belongs.
    // 
    // The IPsec-VPN connection and the VPN gateway associated with the IPsec-VPN connection belong to the same resource group. You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query resource groups.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tunnel configuration of the IPsec-VPN connection.
    // 
    // **TunnelOptionsSpecification** parameters are returned only for dual-tunnel IPsec-VPN connections.
    std::shared_ptr<ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecification> tunnelOptionsSpecification_ = nullptr;
    // The health check configuration.
    // 
    // **VcoHealthCheck** parameters are returned only for single-tunnel IPsec-VPN connections.
    std::shared_ptr<ModifyVpnConnectionAttributeResponseBodyVcoHealthCheck> vcoHealthCheck_ = nullptr;
    // The BGP configuration.
    // 
    // **VpnBgpConfig** parameters are returned only for single-tunnel IPsec-VPN connections.
    std::shared_ptr<ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig> vpnBgpConfig_ = nullptr;
    // The ID of the IPsec-VPN connection.
    std::shared_ptr<string> vpnConnectionId_ = nullptr;
    // The ID of the VPN gateway.
    std::shared_ptr<string> vpnGatewayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
