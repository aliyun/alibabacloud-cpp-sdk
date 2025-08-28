// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPNATTACHMENTATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPNATTACHMENTATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVpnAttachmentAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpnAttachmentAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoConfigRoute, autoConfigRoute_);
      DARABONBA_PTR_TO_JSON(BgpConfig, bgpConfig_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_TO_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_TO_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_TO_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_TO_JSON(EnableTunnelsBgp, enableTunnelsBgp_);
      DARABONBA_PTR_TO_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_TO_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_TO_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_TO_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoteCaCert, remoteCaCert_);
      DARABONBA_PTR_TO_JSON(RemoteSubnet, remoteSubnet_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
      DARABONBA_PTR_TO_JSON(VpnConnectionId, vpnConnectionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpnAttachmentAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoConfigRoute, autoConfigRoute_);
      DARABONBA_PTR_FROM_JSON(BgpConfig, bgpConfig_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_FROM_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_FROM_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_FROM_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_FROM_JSON(EnableTunnelsBgp, enableTunnelsBgp_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_FROM_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_FROM_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoteCaCert, remoteCaCert_);
      DARABONBA_PTR_FROM_JSON(RemoteSubnet, remoteSubnet_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
      DARABONBA_PTR_FROM_JSON(VpnConnectionId, vpnConnectionId_);
    };
    ModifyVpnAttachmentAttributeRequest() = default ;
    ModifyVpnAttachmentAttributeRequest(const ModifyVpnAttachmentAttributeRequest &) = default ;
    ModifyVpnAttachmentAttributeRequest(ModifyVpnAttachmentAttributeRequest &&) = default ;
    ModifyVpnAttachmentAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpnAttachmentAttributeRequest() = default ;
    ModifyVpnAttachmentAttributeRequest& operator=(const ModifyVpnAttachmentAttributeRequest &) = default ;
    ModifyVpnAttachmentAttributeRequest& operator=(ModifyVpnAttachmentAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoConfigRoute_ != nullptr
        && this->bgpConfig_ != nullptr && this->clientToken_ != nullptr && this->customerGatewayId_ != nullptr && this->effectImmediately_ != nullptr && this->enableDpd_ != nullptr
        && this->enableNatTraversal_ != nullptr && this->enableTunnelsBgp_ != nullptr && this->healthCheckConfig_ != nullptr && this->ikeConfig_ != nullptr && this->ipsecConfig_ != nullptr
        && this->localSubnet_ != nullptr && this->name_ != nullptr && this->networkType_ != nullptr && this->ownerAccount_ != nullptr && this->regionId_ != nullptr
        && this->remoteCaCert_ != nullptr && this->remoteSubnet_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->tunnelOptionsSpecification_ != nullptr
        && this->vpnConnectionId_ != nullptr; };
    // autoConfigRoute Field Functions 
    bool hasAutoConfigRoute() const { return this->autoConfigRoute_ != nullptr;};
    void deleteAutoConfigRoute() { this->autoConfigRoute_ = nullptr;};
    inline bool autoConfigRoute() const { DARABONBA_PTR_GET_DEFAULT(autoConfigRoute_, false) };
    inline ModifyVpnAttachmentAttributeRequest& setAutoConfigRoute(bool autoConfigRoute) { DARABONBA_PTR_SET_VALUE(autoConfigRoute_, autoConfigRoute) };


    // bgpConfig Field Functions 
    bool hasBgpConfig() const { return this->bgpConfig_ != nullptr;};
    void deleteBgpConfig() { this->bgpConfig_ = nullptr;};
    inline string bgpConfig() const { DARABONBA_PTR_GET_DEFAULT(bgpConfig_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setBgpConfig(string bgpConfig) { DARABONBA_PTR_SET_VALUE(bgpConfig_, bgpConfig) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // customerGatewayId Field Functions 
    bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
    void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
    inline string customerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


    // effectImmediately Field Functions 
    bool hasEffectImmediately() const { return this->effectImmediately_ != nullptr;};
    void deleteEffectImmediately() { this->effectImmediately_ = nullptr;};
    inline bool effectImmediately() const { DARABONBA_PTR_GET_DEFAULT(effectImmediately_, false) };
    inline ModifyVpnAttachmentAttributeRequest& setEffectImmediately(bool effectImmediately) { DARABONBA_PTR_SET_VALUE(effectImmediately_, effectImmediately) };


    // enableDpd Field Functions 
    bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
    void deleteEnableDpd() { this->enableDpd_ = nullptr;};
    inline bool enableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, false) };
    inline ModifyVpnAttachmentAttributeRequest& setEnableDpd(bool enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


    // enableNatTraversal Field Functions 
    bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
    void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
    inline bool enableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, false) };
    inline ModifyVpnAttachmentAttributeRequest& setEnableNatTraversal(bool enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


    // enableTunnelsBgp Field Functions 
    bool hasEnableTunnelsBgp() const { return this->enableTunnelsBgp_ != nullptr;};
    void deleteEnableTunnelsBgp() { this->enableTunnelsBgp_ = nullptr;};
    inline bool enableTunnelsBgp() const { DARABONBA_PTR_GET_DEFAULT(enableTunnelsBgp_, false) };
    inline ModifyVpnAttachmentAttributeRequest& setEnableTunnelsBgp(bool enableTunnelsBgp) { DARABONBA_PTR_SET_VALUE(enableTunnelsBgp_, enableTunnelsBgp) };


    // healthCheckConfig Field Functions 
    bool hasHealthCheckConfig() const { return this->healthCheckConfig_ != nullptr;};
    void deleteHealthCheckConfig() { this->healthCheckConfig_ = nullptr;};
    inline string healthCheckConfig() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConfig_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setHealthCheckConfig(string healthCheckConfig) { DARABONBA_PTR_SET_VALUE(healthCheckConfig_, healthCheckConfig) };


    // ikeConfig Field Functions 
    bool hasIkeConfig() const { return this->ikeConfig_ != nullptr;};
    void deleteIkeConfig() { this->ikeConfig_ = nullptr;};
    inline string ikeConfig() const { DARABONBA_PTR_GET_DEFAULT(ikeConfig_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setIkeConfig(string ikeConfig) { DARABONBA_PTR_SET_VALUE(ikeConfig_, ikeConfig) };


    // ipsecConfig Field Functions 
    bool hasIpsecConfig() const { return this->ipsecConfig_ != nullptr;};
    void deleteIpsecConfig() { this->ipsecConfig_ = nullptr;};
    inline string ipsecConfig() const { DARABONBA_PTR_GET_DEFAULT(ipsecConfig_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setIpsecConfig(string ipsecConfig) { DARABONBA_PTR_SET_VALUE(ipsecConfig_, ipsecConfig) };


    // localSubnet Field Functions 
    bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
    void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
    inline string localSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remoteCaCert Field Functions 
    bool hasRemoteCaCert() const { return this->remoteCaCert_ != nullptr;};
    void deleteRemoteCaCert() { this->remoteCaCert_ = nullptr;};
    inline string remoteCaCert() const { DARABONBA_PTR_GET_DEFAULT(remoteCaCert_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setRemoteCaCert(string remoteCaCert) { DARABONBA_PTR_SET_VALUE(remoteCaCert_, remoteCaCert) };


    // remoteSubnet Field Functions 
    bool hasRemoteSubnet() const { return this->remoteSubnet_ != nullptr;};
    void deleteRemoteSubnet() { this->remoteSubnet_ = nullptr;};
    inline string remoteSubnet() const { DARABONBA_PTR_GET_DEFAULT(remoteSubnet_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setRemoteSubnet(string remoteSubnet) { DARABONBA_PTR_SET_VALUE(remoteSubnet_, remoteSubnet) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyVpnAttachmentAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tunnelOptionsSpecification Field Functions 
    bool hasTunnelOptionsSpecification() const { return this->tunnelOptionsSpecification_ != nullptr;};
    void deleteTunnelOptionsSpecification() { this->tunnelOptionsSpecification_ = nullptr;};
    inline const vector<ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification> & tunnelOptionsSpecification() const { DARABONBA_PTR_GET_CONST(tunnelOptionsSpecification_, vector<ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification>) };
    inline vector<ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification> tunnelOptionsSpecification() { DARABONBA_PTR_GET(tunnelOptionsSpecification_, vector<ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification>) };
    inline ModifyVpnAttachmentAttributeRequest& setTunnelOptionsSpecification(const vector<ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification> & tunnelOptionsSpecification) { DARABONBA_PTR_SET_VALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };
    inline ModifyVpnAttachmentAttributeRequest& setTunnelOptionsSpecification(vector<ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification> && tunnelOptionsSpecification) { DARABONBA_PTR_SET_RVALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };


    // vpnConnectionId Field Functions 
    bool hasVpnConnectionId() const { return this->vpnConnectionId_ != nullptr;};
    void deleteVpnConnectionId() { this->vpnConnectionId_ = nullptr;};
    inline string vpnConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpnConnectionId_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setVpnConnectionId(string vpnConnectionId) { DARABONBA_PTR_SET_VALUE(vpnConnectionId_, vpnConnectionId) };


  protected:
    // Specifies whether to automatically configure routes. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> autoConfigRoute_ = nullptr;
    // This parameter is supported if you modify the configurations of an IPsec-VPN connection in single-tunnel mode.
    // 
    // BGP configuration:
    // 
    // *   **BgpConfig.EnableBgp**: specifies whether to enable BGP. Valid values:
    // 
    //     *   **true**
    //     *   **false**
    // 
    // *   **BgpConfig.LocalAsn**: the autonomous system number (ASN) on the Alibaba Cloud side. Valid values: **1** to **4294967295**.
    // 
    //     You can enter a value in two segments separated by a period (.). Each segment is 16 bits in length. Enter the number in each segment in decimal format.
    // 
    //     For example, if you enter 123.456, the ASN is 8061384. The ASN is calculated by using the following formula: 123 × 65536 + 456 = 8061384.
    // 
    // *   **BgpConfig.TunnelCidr**: The CIDR block of the IPsec tunnel. The CIDR block must fall into 169.254.0.0/16 and the mask of the CIDR block must be 30 bits in length. The CIDR block cannot be 169.254.0.0/30, 169.254.1.0/30, 169.254.2.0/30, 169.254.3.0/30, 169.254.4.0/30, 169.254.5.0/30, 169.254.6.0/30, or 169.254.169.252/30.
    // 
    // *   **LocalBgpIp**: the BGP address on the Alibaba Cloud side. It must be an IP address that falls within the CIDR block of the IPsec tunnel.
    // 
    // > - Before you add BGP configurations, we recommend that you learn about how BGP works and the limits. For more information, see [Configure BGP dynamic routing](https://help.aliyun.com/document_detail/445767.html).
    // > - We recommend that you use a private ASN to establish BGP connections to Alibaba Cloud. Refer to the relevant documentation for the private ASN range.
    std::shared_ptr<string> bgpConfig_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the value of **RequestId** as the value of **ClientToken**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The customer gateways to be associated with the IPsec-VPN connections.
    // 
    // >  Only single-tunnel IPsec-VPN connections support this parameter.
    std::shared_ptr<string> customerGatewayId_ = nullptr;
    // Specifies whether to immediately start IPsec negotiations after the configuration takes effect. Valid values:
    // 
    // *   **true**: immediately starts IPsec negotiations after the configuration is complete.
    // *   **false**: starts IPsec negotiations when inbound traffic is detected.
    std::shared_ptr<bool> effectImmediately_ = nullptr;
    // This parameter is supported if you modify the configurations of an IPsec-VPN connection in single-tunnel mode.
    // 
    // Specifies whether to enable dead peer detection (DPD). Valid values:
    // 
    // *   **true**: enables DPD. The initiator of the IPsec-VPN connection sends DPD packets to check the existence and availability of the peer. If no feedback is received from the peer within the specified period of time, the connection fails. In this case, ISAKMP SA and IPsec SA are deleted, along with the security tunnel.
    // *   **false**: disables DPD. The initiator of the IPsec-VPN connection does not send DPD packets.
    std::shared_ptr<bool> enableDpd_ = nullptr;
    // This parameter is supported if you modify the configurations of an IPsec-VPN connection in single-tunnel mode.
    // 
    // Specifies whether to enable NAT traversal. Valid values:
    // 
    // *   **true**: enables NAT traversal. After NAT traversal is enabled, the initiator does not check the UDP ports during IKE negotiations and can automatically discover NAT gateway devices along the IPsec-VPN tunnel.
    // *   **false**: disables NAT traversal.
    std::shared_ptr<bool> enableNatTraversal_ = nullptr;
    // You can specify this parameter if you modify the configuration of a dual-tunnel IPsec-VPN connection.
    // 
    // Specifies whether to enable the BGP feature for the tunnel. Valid values: **true** and **false**.
    // 
    // >  Before you add BGP configurations, we recommend that you learn about how BGP works and the limits. For more information, see [Configure BGP dynamic routing](https://help.aliyun.com/document_detail/445767.html).
    std::shared_ptr<bool> enableTunnelsBgp_ = nullptr;
    // This parameter is supported if you modify the configurations of an IPsec-VPN connection in single-tunnel mode.
    // 
    // The health check configurations:
    // 
    // *   **HealthCheckConfig.enable**: specifies whether to enable the health check feature. Valid values:
    // 
    //     *   **true**
    //     *   **false**
    // 
    // *   **HealthCheckConfig.dip**: the destination IP address configured for health checks. Specify the IP address of the data center with which the VPC can access through the IPsec-VPN connection.
    // 
    // *   **HealthCheckConfig.sip**: the source IP address configured for health checks. The IP address of the VPC with which the data center can access through the IPsec-VPN connection.
    // 
    // *   **HealthCheckConfig.interval**: the interval between two consecutive health checks. Unit: seconds.
    // 
    // *   **HealthCheckConfig.retry:** the maximum number of health check retries.
    // 
    // *   **HealthCheckConfig.Policy**: specifies whether to withdraw advertised routes when health checks fail. Valid values:
    // 
    //     *   **revoke_route**
    //     *   **reserve_route**
    std::shared_ptr<string> healthCheckConfig_ = nullptr;
    // This parameter is supported if you modify the configurations of an IPsec-VPN connection in single-tunnel mode.
    // 
    // The configuration of Phase 1 negotiations:
    // 
    // *   **IkeConfig.Psk**: The pre-shared key that is used for identity authentication between the Alibaba Cloud IPsec connection and the on-premises data center.
    // 
    //     *   The key must be 1 to 100 characters in length, and can contain digits, and letters. The key cannot contain spaces. ``~!`@#$%^&*()_-+={}[]|;:\\",.<>/?``
    //     *   If you do not specify a pre-shared key, the system randomly generates a 16-bit string as the pre-shared key. You can call the [DescribeVpnConnection](https://help.aliyun.com/document_detail/120374.html) operation to query the pre-shared key that is automatically generated by the system.
    // 
    //     > The pre-shared key of the IPsec-VPN connection must be the same as the authentication key of the on-premises data center. Otherwise, connections between the on-premises data center and the VPN gateway cannot be established.
    // 
    // *   **IkeConfig.IkeVersion**: the version of the Internet Key Exchange (IKE) protocol. Valid values: **ikev1** and **ikev2**.
    // 
    // *   **IkeConfig.IkeMode**: the negotiation mode. Valid values: **main** and **aggressive**.
    // 
    // *   **IkeConfig.IkeEncAlg:** the encryption algorithm that is used in Phase 1 negotiations. Valid values: **aes**, **aes192**, **aes256**, **des**, and **3des**.
    // 
    // *   **IkeConfig.IkeAuthAlg**: the authentication algorithm that is used in Phase 1 negotiations. Valid values: **md5**, **sha1**, **sha256**, **sha384**, and **sha512**.
    // 
    // *   **IkeConfig.IkePfs**: the Diffie-Hellman key exchange algorithm that is used in Phase 1 negotiations. Valid values: **group1**, **group2**, **group5**, and **group14**.
    // 
    // *   **IkeConfig.IkeLifetime**: the SA lifetime as a result of Phase 1 negotiations. Unit: seconds. Valid values: **0** to **86400**.
    // 
    // *   **IkeConfig.LocalId**: the identifier on the Alibaba Cloud side. The identifier cannot exceed 100 characters in length and cannot contain spaces.
    // 
    // *   **IkeConfig.RemoteId**: the identifier of the data center. It cannot exceed 100 characters in length and cannot contain spaces.
    std::shared_ptr<string> ikeConfig_ = nullptr;
    // This parameter is supported if you modify the configurations of an IPsec-VPN connection in single-tunnel mode.
    // 
    // The configuration of Phase 2 negotiations:
    // 
    // *   **IpsecConfig.IpsecEncAlg:** the encryption algorithm that is used in Phase 2 negotiations. Valid values: **aes**, **aes192**, **aes256**, **des**, and **3des**.
    // *   **IpsecConfig. IpsecAuthAlg:** the authentication algorithm that is used in Phase 2 negotiations. Valid values: **md5**, **sha1**, **sha256**, **sha384**, and **sha512**.
    // *   **IpsecConfig. IpsecPfs:** the Diffie-Hellman key exchange algorithm that is used in Phase 2 negotiations. Valid values: **disabled**, **group1**, **group2**, **group5**, and **group14**.
    // *   **IkeConfig.IkeLifetime**: the SA lifetime determined by Phase 2 negotiations. Unit: seconds. Valid values: **0** to **86400**.
    std::shared_ptr<string> ipsecConfig_ = nullptr;
    // The CIDR block of the virtual private cloud (VPC) that communicates with the data center. The CIDR block is used in Phase 2 negotiations.
    // 
    // Separate multiple CIDR blocks with commas (,). Example: 192.168.1.0/24,192.168.2.0/24.
    // 
    // The following routing modes are supported:
    // 
    // *   If you set **LocalSubnet** and **RemoteSubnet** to 0.0.0.0/0, the routing mode of the IPsec-VPN connection is set to Destination Routing Mode.
    // *   If you set **LocalSubnet** and **RemoteSubnet** to specific CIDR blocks, the routing mode of the IPsec-VPN connection is set to Protected Data Flows.
    std::shared_ptr<string> localSubnet_ = nullptr;
    // The name of the IPsec-VPN connection.
    // 
    // The name must be 1 to 100 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> name_ = nullptr;
    // The network type of the IPsec-VPN connection. Valid values:
    // 
    // *   **public**: an encrypted connection over the Internet
    // *   **private**: an encrypted connection over private networks
    std::shared_ptr<string> networkType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    // The ID of the region in which the IPsec-VPN connection is established.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The peer CA certificate when a ShangMi (SM) VPN gateway is used to create the IPsec-VPN connection.
    std::shared_ptr<string> remoteCaCert_ = nullptr;
    // The CIDR block of the data center that communicates with the VPC. This CIDR block is used in Phase 2 negotiations.
    // 
    // Separate multiple CIDR blocks with commas (,). Example: 192.168.3.0/24,192.168.4.0/24.
    // 
    // The following routing modes are supported:
    // 
    // *   If you set **LocalSubnet** and **RemoteSubnet** to 0.0.0.0/0, the routing mode of the IPsec-VPN connection is set to Destination Routing Mode.
    // *   If you set **LocalSubnet** and **RemoteSubnet** to specific CIDR blocks, the routing mode of the IPsec-VPN connection is set to Protected Data Flows.
    std::shared_ptr<string> remoteSubnet_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tunnel configurations.
    // 
    // You can specify parameters in the **TunnelOptionsSpecification** array when you modify the configurations of an IPsec-VPN connection in dual-tunnel mode. You can modify the configurations of the two tunnels of the IPsec-VPN connection.
    std::shared_ptr<vector<ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification>> tunnelOptionsSpecification_ = nullptr;
    // The ID of the IPsec-VPN connection.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpnConnectionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
