// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPNATTACHMENTATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPNATTACHMENTATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyVpnAttachmentAttributeResponseBodyIkeConfig.hpp>
#include <alibabacloud/models/ModifyVpnAttachmentAttributeResponseBodyIpsecConfig.hpp>
#include <vector>
#include <alibabacloud/models/ModifyVpnAttachmentAttributeResponseBodyTunnelOptionsSpecification.hpp>
#include <alibabacloud/models/ModifyVpnAttachmentAttributeResponseBodyVcoHealthCheck.hpp>
#include <alibabacloud/models/ModifyVpnAttachmentAttributeResponseBodyVpnBgpConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVpnAttachmentAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpnAttachmentAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttachInstanceId, attachInstanceId_);
      DARABONBA_PTR_TO_JSON(AttachType, attachType_);
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
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(RemoteSubnet, remoteSubnet_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
      DARABONBA_PTR_TO_JSON(VcoHealthCheck, vcoHealthCheck_);
      DARABONBA_PTR_TO_JSON(VpnBgpConfig, vpnBgpConfig_);
      DARABONBA_PTR_TO_JSON(VpnConnectionId, vpnConnectionId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpnAttachmentAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachInstanceId, attachInstanceId_);
      DARABONBA_PTR_FROM_JSON(AttachType, attachType_);
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
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(RemoteSubnet, remoteSubnet_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
      DARABONBA_PTR_FROM_JSON(VcoHealthCheck, vcoHealthCheck_);
      DARABONBA_PTR_FROM_JSON(VpnBgpConfig, vpnBgpConfig_);
      DARABONBA_PTR_FROM_JSON(VpnConnectionId, vpnConnectionId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    ModifyVpnAttachmentAttributeResponseBody() = default ;
    ModifyVpnAttachmentAttributeResponseBody(const ModifyVpnAttachmentAttributeResponseBody &) = default ;
    ModifyVpnAttachmentAttributeResponseBody(ModifyVpnAttachmentAttributeResponseBody &&) = default ;
    ModifyVpnAttachmentAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpnAttachmentAttributeResponseBody() = default ;
    ModifyVpnAttachmentAttributeResponseBody& operator=(const ModifyVpnAttachmentAttributeResponseBody &) = default ;
    ModifyVpnAttachmentAttributeResponseBody& operator=(ModifyVpnAttachmentAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachInstanceId_ == nullptr
        && return this->attachType_ == nullptr && return this->createTime_ == nullptr && return this->customerGatewayId_ == nullptr && return this->description_ == nullptr && return this->effectImmediately_ == nullptr
        && return this->enableDpd_ == nullptr && return this->enableNatTraversal_ == nullptr && return this->enableTunnelsBgp_ == nullptr && return this->ikeConfig_ == nullptr && return this->ipsecConfig_ == nullptr
        && return this->localSubnet_ == nullptr && return this->name_ == nullptr && return this->networkType_ == nullptr && return this->remoteSubnet_ == nullptr && return this->requestId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->spec_ == nullptr && return this->status_ == nullptr && return this->tunnelOptionsSpecification_ == nullptr && return this->vcoHealthCheck_ == nullptr
        && return this->vpnBgpConfig_ == nullptr && return this->vpnConnectionId_ == nullptr && return this->vpnGatewayId_ == nullptr; };
    // attachInstanceId Field Functions 
    bool hasAttachInstanceId() const { return this->attachInstanceId_ != nullptr;};
    void deleteAttachInstanceId() { this->attachInstanceId_ = nullptr;};
    inline string attachInstanceId() const { DARABONBA_PTR_GET_DEFAULT(attachInstanceId_, "") };
    inline ModifyVpnAttachmentAttributeResponseBody& setAttachInstanceId(string attachInstanceId) { DARABONBA_PTR_SET_VALUE(attachInstanceId_, attachInstanceId) };


    // attachType Field Functions 
    bool hasAttachType() const { return this->attachType_ != nullptr;};
    void deleteAttachType() { this->attachType_ = nullptr;};
    inline string attachType() const { DARABONBA_PTR_GET_DEFAULT(attachType_, "") };
    inline ModifyVpnAttachmentAttributeResponseBody& setAttachType(string attachType) { DARABONBA_PTR_SET_VALUE(attachType_, attachType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ModifyVpnAttachmentAttributeResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customerGatewayId Field Functions 
    bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
    void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
    inline string customerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
    inline ModifyVpnAttachmentAttributeResponseBody& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyVpnAttachmentAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // effectImmediately Field Functions 
    bool hasEffectImmediately() const { return this->effectImmediately_ != nullptr;};
    void deleteEffectImmediately() { this->effectImmediately_ = nullptr;};
    inline bool effectImmediately() const { DARABONBA_PTR_GET_DEFAULT(effectImmediately_, false) };
    inline ModifyVpnAttachmentAttributeResponseBody& setEffectImmediately(bool effectImmediately) { DARABONBA_PTR_SET_VALUE(effectImmediately_, effectImmediately) };


    // enableDpd Field Functions 
    bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
    void deleteEnableDpd() { this->enableDpd_ = nullptr;};
    inline bool enableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, false) };
    inline ModifyVpnAttachmentAttributeResponseBody& setEnableDpd(bool enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


    // enableNatTraversal Field Functions 
    bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
    void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
    inline bool enableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, false) };
    inline ModifyVpnAttachmentAttributeResponseBody& setEnableNatTraversal(bool enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


    // enableTunnelsBgp Field Functions 
    bool hasEnableTunnelsBgp() const { return this->enableTunnelsBgp_ != nullptr;};
    void deleteEnableTunnelsBgp() { this->enableTunnelsBgp_ = nullptr;};
    inline bool enableTunnelsBgp() const { DARABONBA_PTR_GET_DEFAULT(enableTunnelsBgp_, false) };
    inline ModifyVpnAttachmentAttributeResponseBody& setEnableTunnelsBgp(bool enableTunnelsBgp) { DARABONBA_PTR_SET_VALUE(enableTunnelsBgp_, enableTunnelsBgp) };


    // ikeConfig Field Functions 
    bool hasIkeConfig() const { return this->ikeConfig_ != nullptr;};
    void deleteIkeConfig() { this->ikeConfig_ = nullptr;};
    inline const ModifyVpnAttachmentAttributeResponseBodyIkeConfig & ikeConfig() const { DARABONBA_PTR_GET_CONST(ikeConfig_, ModifyVpnAttachmentAttributeResponseBodyIkeConfig) };
    inline ModifyVpnAttachmentAttributeResponseBodyIkeConfig ikeConfig() { DARABONBA_PTR_GET(ikeConfig_, ModifyVpnAttachmentAttributeResponseBodyIkeConfig) };
    inline ModifyVpnAttachmentAttributeResponseBody& setIkeConfig(const ModifyVpnAttachmentAttributeResponseBodyIkeConfig & ikeConfig) { DARABONBA_PTR_SET_VALUE(ikeConfig_, ikeConfig) };
    inline ModifyVpnAttachmentAttributeResponseBody& setIkeConfig(ModifyVpnAttachmentAttributeResponseBodyIkeConfig && ikeConfig) { DARABONBA_PTR_SET_RVALUE(ikeConfig_, ikeConfig) };


    // ipsecConfig Field Functions 
    bool hasIpsecConfig() const { return this->ipsecConfig_ != nullptr;};
    void deleteIpsecConfig() { this->ipsecConfig_ = nullptr;};
    inline const ModifyVpnAttachmentAttributeResponseBodyIpsecConfig & ipsecConfig() const { DARABONBA_PTR_GET_CONST(ipsecConfig_, ModifyVpnAttachmentAttributeResponseBodyIpsecConfig) };
    inline ModifyVpnAttachmentAttributeResponseBodyIpsecConfig ipsecConfig() { DARABONBA_PTR_GET(ipsecConfig_, ModifyVpnAttachmentAttributeResponseBodyIpsecConfig) };
    inline ModifyVpnAttachmentAttributeResponseBody& setIpsecConfig(const ModifyVpnAttachmentAttributeResponseBodyIpsecConfig & ipsecConfig) { DARABONBA_PTR_SET_VALUE(ipsecConfig_, ipsecConfig) };
    inline ModifyVpnAttachmentAttributeResponseBody& setIpsecConfig(ModifyVpnAttachmentAttributeResponseBodyIpsecConfig && ipsecConfig) { DARABONBA_PTR_SET_RVALUE(ipsecConfig_, ipsecConfig) };


    // localSubnet Field Functions 
    bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
    void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
    inline string localSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
    inline ModifyVpnAttachmentAttributeResponseBody& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyVpnAttachmentAttributeResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline ModifyVpnAttachmentAttributeResponseBody& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // remoteSubnet Field Functions 
    bool hasRemoteSubnet() const { return this->remoteSubnet_ != nullptr;};
    void deleteRemoteSubnet() { this->remoteSubnet_ = nullptr;};
    inline string remoteSubnet() const { DARABONBA_PTR_GET_DEFAULT(remoteSubnet_, "") };
    inline ModifyVpnAttachmentAttributeResponseBody& setRemoteSubnet(string remoteSubnet) { DARABONBA_PTR_SET_VALUE(remoteSubnet_, remoteSubnet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyVpnAttachmentAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyVpnAttachmentAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline ModifyVpnAttachmentAttributeResponseBody& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyVpnAttachmentAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tunnelOptionsSpecification Field Functions 
    bool hasTunnelOptionsSpecification() const { return this->tunnelOptionsSpecification_ != nullptr;};
    void deleteTunnelOptionsSpecification() { this->tunnelOptionsSpecification_ = nullptr;};
    inline const vector<ModifyVpnAttachmentAttributeResponseBodyTunnelOptionsSpecification> & tunnelOptionsSpecification() const { DARABONBA_PTR_GET_CONST(tunnelOptionsSpecification_, vector<ModifyVpnAttachmentAttributeResponseBodyTunnelOptionsSpecification>) };
    inline vector<ModifyVpnAttachmentAttributeResponseBodyTunnelOptionsSpecification> tunnelOptionsSpecification() { DARABONBA_PTR_GET(tunnelOptionsSpecification_, vector<ModifyVpnAttachmentAttributeResponseBodyTunnelOptionsSpecification>) };
    inline ModifyVpnAttachmentAttributeResponseBody& setTunnelOptionsSpecification(const vector<ModifyVpnAttachmentAttributeResponseBodyTunnelOptionsSpecification> & tunnelOptionsSpecification) { DARABONBA_PTR_SET_VALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };
    inline ModifyVpnAttachmentAttributeResponseBody& setTunnelOptionsSpecification(vector<ModifyVpnAttachmentAttributeResponseBodyTunnelOptionsSpecification> && tunnelOptionsSpecification) { DARABONBA_PTR_SET_RVALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };


    // vcoHealthCheck Field Functions 
    bool hasVcoHealthCheck() const { return this->vcoHealthCheck_ != nullptr;};
    void deleteVcoHealthCheck() { this->vcoHealthCheck_ = nullptr;};
    inline const ModifyVpnAttachmentAttributeResponseBodyVcoHealthCheck & vcoHealthCheck() const { DARABONBA_PTR_GET_CONST(vcoHealthCheck_, ModifyVpnAttachmentAttributeResponseBodyVcoHealthCheck) };
    inline ModifyVpnAttachmentAttributeResponseBodyVcoHealthCheck vcoHealthCheck() { DARABONBA_PTR_GET(vcoHealthCheck_, ModifyVpnAttachmentAttributeResponseBodyVcoHealthCheck) };
    inline ModifyVpnAttachmentAttributeResponseBody& setVcoHealthCheck(const ModifyVpnAttachmentAttributeResponseBodyVcoHealthCheck & vcoHealthCheck) { DARABONBA_PTR_SET_VALUE(vcoHealthCheck_, vcoHealthCheck) };
    inline ModifyVpnAttachmentAttributeResponseBody& setVcoHealthCheck(ModifyVpnAttachmentAttributeResponseBodyVcoHealthCheck && vcoHealthCheck) { DARABONBA_PTR_SET_RVALUE(vcoHealthCheck_, vcoHealthCheck) };


    // vpnBgpConfig Field Functions 
    bool hasVpnBgpConfig() const { return this->vpnBgpConfig_ != nullptr;};
    void deleteVpnBgpConfig() { this->vpnBgpConfig_ = nullptr;};
    inline const ModifyVpnAttachmentAttributeResponseBodyVpnBgpConfig & vpnBgpConfig() const { DARABONBA_PTR_GET_CONST(vpnBgpConfig_, ModifyVpnAttachmentAttributeResponseBodyVpnBgpConfig) };
    inline ModifyVpnAttachmentAttributeResponseBodyVpnBgpConfig vpnBgpConfig() { DARABONBA_PTR_GET(vpnBgpConfig_, ModifyVpnAttachmentAttributeResponseBodyVpnBgpConfig) };
    inline ModifyVpnAttachmentAttributeResponseBody& setVpnBgpConfig(const ModifyVpnAttachmentAttributeResponseBodyVpnBgpConfig & vpnBgpConfig) { DARABONBA_PTR_SET_VALUE(vpnBgpConfig_, vpnBgpConfig) };
    inline ModifyVpnAttachmentAttributeResponseBody& setVpnBgpConfig(ModifyVpnAttachmentAttributeResponseBodyVpnBgpConfig && vpnBgpConfig) { DARABONBA_PTR_SET_RVALUE(vpnBgpConfig_, vpnBgpConfig) };


    // vpnConnectionId Field Functions 
    bool hasVpnConnectionId() const { return this->vpnConnectionId_ != nullptr;};
    void deleteVpnConnectionId() { this->vpnConnectionId_ = nullptr;};
    inline string vpnConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpnConnectionId_, "") };
    inline ModifyVpnAttachmentAttributeResponseBody& setVpnConnectionId(string vpnConnectionId) { DARABONBA_PTR_SET_VALUE(vpnConnectionId_, vpnConnectionId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string vpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline ModifyVpnAttachmentAttributeResponseBody& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The ID of the Cloud Enterprise Network (CEN) instance to which the transit router associated with the IPsec-VPN connection belongs.
    std::shared_ptr<string> attachInstanceId_ = nullptr;
    // The type of the resource that is associated with the IPsec-VPN connection. Valid values:
    // 
    // *   **CEN**: The IPsec-VPN connection is associated with a transit router.
    // *   **VPNGW**: The IPsec-VPN connection is associated with a VPN gateway.
    // *   **NO_ASSOCIATED**: The IPsec-VPN connection is not associated with any resource.
    std::shared_ptr<string> attachType_ = nullptr;
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
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> effectImmediately_ = nullptr;
    // Indicates whether the DPD feature is enabled for the IPsec-VPN connection.
    // 
    // *   **true**: The feature is enabled.
    // *   **false**: The feature is disabled.
    // 
    // This parameter is returned only for single-tunnel IPsec-VPN connections.
    std::shared_ptr<bool> enableDpd_ = nullptr;
    // Specifies whether to enable NAT traversal for the IPsec-VPN connection.
    // 
    // *   **true**: The feature is enabled.
    // *   **false**: The feature is disabled.
    // 
    // This parameter is returned only for single-tunnel IPsec-VPN connections.
    std::shared_ptr<bool> enableNatTraversal_ = nullptr;
    // Specifies whether to enable Border Gateway Protocol (BGP) for tunnels.
    // 
    // *   **true**: The feature is enabled.
    // *   **false**: The feature is disabled.
    // 
    // This parameter is returned only by dual-tunnel IPsec-VPN connections.
    std::shared_ptr<bool> enableTunnelsBgp_ = nullptr;
    // The configuration of Phase 1 negotiations.
    // 
    // **IkeConfig** parameters are returned only for single-tunnel IPsec-VPN connections.
    std::shared_ptr<ModifyVpnAttachmentAttributeResponseBodyIkeConfig> ikeConfig_ = nullptr;
    // The configuration of Phase 2 negotiations.
    // 
    // **IpsecConfig** parameters are returned only for single-tunnel IPsec-VPN connections.
    std::shared_ptr<ModifyVpnAttachmentAttributeResponseBodyIpsecConfig> ipsecConfig_ = nullptr;
    // The CIDR block on the Alibaba Cloud side that communicates with the on-premises data center is required, such as CIDR blocks of VPCs.
    std::shared_ptr<string> localSubnet_ = nullptr;
    // The name of the IPsec-VPN connection.
    std::shared_ptr<string> name_ = nullptr;
    // The network type of the IPsec-VPN connection. Valid values:
    // 
    // *   **public**: an encrypted connection over the Internet
    // *   **private**: an encrypted connection over private networks
    std::shared_ptr<string> networkType_ = nullptr;
    // The CIDR block of the on-premises data center that communicates with Alibaba Cloud is required.
    std::shared_ptr<string> remoteSubnet_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group to which the IPsec-VPN connection belongs.
    // 
    // You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query resource groups.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The bandwidth specification of the IPsec-VPN connection.
    // 
    // A value of **M** in the response indicates **Mbit/s**.
    std::shared_ptr<string> spec_ = nullptr;
    // The state of the IPsec-VPN connection. Valid values:
    // 
    // *   **ike_sa_not_established**: Phase 1 negotiations failed.
    // *   **ike_sa_established**: Phase 1 negotiations succeeded.
    // *   **ipsec_sa_not_established**: Phase 2 negotiations failed.
    // *   **ipsec_sa_established**: Phase 2 negotiations succeeded.
    std::shared_ptr<string> status_ = nullptr;
    // The tunnel configurations of the IPsec-VPN connection.
    // 
    // **TunnelOptionsSpecification** parameters are returned only for dual-tunnel IPsec-VPN connections.
    std::shared_ptr<vector<ModifyVpnAttachmentAttributeResponseBodyTunnelOptionsSpecification>> tunnelOptionsSpecification_ = nullptr;
    // The health check configurations of the IPsec-VPN connection.
    // 
    // **VcoHealthCheck** parameters are returned only for single-tunnel IPsec-VPC connections.
    std::shared_ptr<ModifyVpnAttachmentAttributeResponseBodyVcoHealthCheck> vcoHealthCheck_ = nullptr;
    // The BGP configurations of the IPsec-VPN connection.
    // 
    // **VpnBgpConfig** parameters are returned only for single-tunnel IPsec-VPN connections.
    std::shared_ptr<ModifyVpnAttachmentAttributeResponseBodyVpnBgpConfig> vpnBgpConfig_ = nullptr;
    // The ID of the IPsec-VPN connection.
    std::shared_ptr<string> vpnConnectionId_ = nullptr;
    // The ID of the VPN gateway that is associated with the IPsec-VPN connection.
    // 
    // **vpn-not-exist**: The IPsec-VPN connection is not associated with a VPN Gateway.
    std::shared_ptr<string> vpnGatewayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
