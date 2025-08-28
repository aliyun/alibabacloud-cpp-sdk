// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPNCONNECTIONATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPNCONNECTIONATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVpnConnectionAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpnConnectionAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoConfigRoute, autoConfigRoute_);
      DARABONBA_PTR_TO_JSON(BgpConfig, bgpConfig_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_TO_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_TO_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_TO_JSON(EnableTunnelsBgp, enableTunnelsBgp_);
      DARABONBA_PTR_TO_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_TO_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_TO_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_TO_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoteCaCertificate, remoteCaCertificate_);
      DARABONBA_PTR_TO_JSON(RemoteSubnet, remoteSubnet_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
      DARABONBA_PTR_TO_JSON(VpnConnectionId, vpnConnectionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpnConnectionAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoConfigRoute, autoConfigRoute_);
      DARABONBA_PTR_FROM_JSON(BgpConfig, bgpConfig_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_FROM_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_FROM_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_FROM_JSON(EnableTunnelsBgp, enableTunnelsBgp_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_FROM_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_FROM_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoteCaCertificate, remoteCaCertificate_);
      DARABONBA_PTR_FROM_JSON(RemoteSubnet, remoteSubnet_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
      DARABONBA_PTR_FROM_JSON(VpnConnectionId, vpnConnectionId_);
    };
    ModifyVpnConnectionAttributeRequest() = default ;
    ModifyVpnConnectionAttributeRequest(const ModifyVpnConnectionAttributeRequest &) = default ;
    ModifyVpnConnectionAttributeRequest(ModifyVpnConnectionAttributeRequest &&) = default ;
    ModifyVpnConnectionAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpnConnectionAttributeRequest() = default ;
    ModifyVpnConnectionAttributeRequest& operator=(const ModifyVpnConnectionAttributeRequest &) = default ;
    ModifyVpnConnectionAttributeRequest& operator=(ModifyVpnConnectionAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoConfigRoute_ != nullptr
        && this->bgpConfig_ != nullptr && this->clientToken_ != nullptr && this->effectImmediately_ != nullptr && this->enableDpd_ != nullptr && this->enableNatTraversal_ != nullptr
        && this->enableTunnelsBgp_ != nullptr && this->healthCheckConfig_ != nullptr && this->ikeConfig_ != nullptr && this->ipsecConfig_ != nullptr && this->localSubnet_ != nullptr
        && this->name_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->remoteCaCertificate_ != nullptr
        && this->remoteSubnet_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->tunnelOptionsSpecification_ != nullptr && this->vpnConnectionId_ != nullptr; };
    // autoConfigRoute Field Functions 
    bool hasAutoConfigRoute() const { return this->autoConfigRoute_ != nullptr;};
    void deleteAutoConfigRoute() { this->autoConfigRoute_ = nullptr;};
    inline bool autoConfigRoute() const { DARABONBA_PTR_GET_DEFAULT(autoConfigRoute_, false) };
    inline ModifyVpnConnectionAttributeRequest& setAutoConfigRoute(bool autoConfigRoute) { DARABONBA_PTR_SET_VALUE(autoConfigRoute_, autoConfigRoute) };


    // bgpConfig Field Functions 
    bool hasBgpConfig() const { return this->bgpConfig_ != nullptr;};
    void deleteBgpConfig() { this->bgpConfig_ = nullptr;};
    inline string bgpConfig() const { DARABONBA_PTR_GET_DEFAULT(bgpConfig_, "") };
    inline ModifyVpnConnectionAttributeRequest& setBgpConfig(string bgpConfig) { DARABONBA_PTR_SET_VALUE(bgpConfig_, bgpConfig) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyVpnConnectionAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // effectImmediately Field Functions 
    bool hasEffectImmediately() const { return this->effectImmediately_ != nullptr;};
    void deleteEffectImmediately() { this->effectImmediately_ = nullptr;};
    inline bool effectImmediately() const { DARABONBA_PTR_GET_DEFAULT(effectImmediately_, false) };
    inline ModifyVpnConnectionAttributeRequest& setEffectImmediately(bool effectImmediately) { DARABONBA_PTR_SET_VALUE(effectImmediately_, effectImmediately) };


    // enableDpd Field Functions 
    bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
    void deleteEnableDpd() { this->enableDpd_ = nullptr;};
    inline bool enableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, false) };
    inline ModifyVpnConnectionAttributeRequest& setEnableDpd(bool enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


    // enableNatTraversal Field Functions 
    bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
    void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
    inline bool enableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, false) };
    inline ModifyVpnConnectionAttributeRequest& setEnableNatTraversal(bool enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


    // enableTunnelsBgp Field Functions 
    bool hasEnableTunnelsBgp() const { return this->enableTunnelsBgp_ != nullptr;};
    void deleteEnableTunnelsBgp() { this->enableTunnelsBgp_ = nullptr;};
    inline bool enableTunnelsBgp() const { DARABONBA_PTR_GET_DEFAULT(enableTunnelsBgp_, false) };
    inline ModifyVpnConnectionAttributeRequest& setEnableTunnelsBgp(bool enableTunnelsBgp) { DARABONBA_PTR_SET_VALUE(enableTunnelsBgp_, enableTunnelsBgp) };


    // healthCheckConfig Field Functions 
    bool hasHealthCheckConfig() const { return this->healthCheckConfig_ != nullptr;};
    void deleteHealthCheckConfig() { this->healthCheckConfig_ = nullptr;};
    inline string healthCheckConfig() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConfig_, "") };
    inline ModifyVpnConnectionAttributeRequest& setHealthCheckConfig(string healthCheckConfig) { DARABONBA_PTR_SET_VALUE(healthCheckConfig_, healthCheckConfig) };


    // ikeConfig Field Functions 
    bool hasIkeConfig() const { return this->ikeConfig_ != nullptr;};
    void deleteIkeConfig() { this->ikeConfig_ = nullptr;};
    inline string ikeConfig() const { DARABONBA_PTR_GET_DEFAULT(ikeConfig_, "") };
    inline ModifyVpnConnectionAttributeRequest& setIkeConfig(string ikeConfig) { DARABONBA_PTR_SET_VALUE(ikeConfig_, ikeConfig) };


    // ipsecConfig Field Functions 
    bool hasIpsecConfig() const { return this->ipsecConfig_ != nullptr;};
    void deleteIpsecConfig() { this->ipsecConfig_ = nullptr;};
    inline string ipsecConfig() const { DARABONBA_PTR_GET_DEFAULT(ipsecConfig_, "") };
    inline ModifyVpnConnectionAttributeRequest& setIpsecConfig(string ipsecConfig) { DARABONBA_PTR_SET_VALUE(ipsecConfig_, ipsecConfig) };


    // localSubnet Field Functions 
    bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
    void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
    inline string localSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
    inline ModifyVpnConnectionAttributeRequest& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyVpnConnectionAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyVpnConnectionAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyVpnConnectionAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyVpnConnectionAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remoteCaCertificate Field Functions 
    bool hasRemoteCaCertificate() const { return this->remoteCaCertificate_ != nullptr;};
    void deleteRemoteCaCertificate() { this->remoteCaCertificate_ = nullptr;};
    inline string remoteCaCertificate() const { DARABONBA_PTR_GET_DEFAULT(remoteCaCertificate_, "") };
    inline ModifyVpnConnectionAttributeRequest& setRemoteCaCertificate(string remoteCaCertificate) { DARABONBA_PTR_SET_VALUE(remoteCaCertificate_, remoteCaCertificate) };


    // remoteSubnet Field Functions 
    bool hasRemoteSubnet() const { return this->remoteSubnet_ != nullptr;};
    void deleteRemoteSubnet() { this->remoteSubnet_ = nullptr;};
    inline string remoteSubnet() const { DARABONBA_PTR_GET_DEFAULT(remoteSubnet_, "") };
    inline ModifyVpnConnectionAttributeRequest& setRemoteSubnet(string remoteSubnet) { DARABONBA_PTR_SET_VALUE(remoteSubnet_, remoteSubnet) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyVpnConnectionAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyVpnConnectionAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tunnelOptionsSpecification Field Functions 
    bool hasTunnelOptionsSpecification() const { return this->tunnelOptionsSpecification_ != nullptr;};
    void deleteTunnelOptionsSpecification() { this->tunnelOptionsSpecification_ = nullptr;};
    inline const vector<ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification> & tunnelOptionsSpecification() const { DARABONBA_PTR_GET_CONST(tunnelOptionsSpecification_, vector<ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification>) };
    inline vector<ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification> tunnelOptionsSpecification() { DARABONBA_PTR_GET(tunnelOptionsSpecification_, vector<ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification>) };
    inline ModifyVpnConnectionAttributeRequest& setTunnelOptionsSpecification(const vector<ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification> & tunnelOptionsSpecification) { DARABONBA_PTR_SET_VALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };
    inline ModifyVpnConnectionAttributeRequest& setTunnelOptionsSpecification(vector<ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification> && tunnelOptionsSpecification) { DARABONBA_PTR_SET_RVALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };


    // vpnConnectionId Field Functions 
    bool hasVpnConnectionId() const { return this->vpnConnectionId_ != nullptr;};
    void deleteVpnConnectionId() { this->vpnConnectionId_ = nullptr;};
    inline string vpnConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpnConnectionId_, "") };
    inline ModifyVpnConnectionAttributeRequest& setVpnConnectionId(string vpnConnectionId) { DARABONBA_PTR_SET_VALUE(vpnConnectionId_, vpnConnectionId) };


  protected:
    // Specifies whether to automatically advertise routes. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> autoConfigRoute_ = nullptr;
    // This parameter is supported if you modify the configurations of an IPsec-VPN connection in single-tunnel mode.
    // 
    // BGP configuration:
    // 
    // *   **BgpConfig.EnableBgp**: specifies whether to enable BGP. Valid values: **true** and **false**.
    // 
    // *   **BgpConfig.LocalAsn:** the autonomous system number (ASN) on the Alibaba Cloud side. Valid values: **1** to **4294967295**.
    // 
    //     You can enter a value in two segments separated by a period (.). Each segment is 16 bits in length. Enter the number in each segment in decimal format.
    // 
    //     For example, if you enter 123.456, the ASN is 8061384. The ASN is calculated by using the following formula: 123 × 65536 + 456 = 8061384.
    // 
    // *   **BgpConfig.TunnelCidr**: The CIDR block of the IPsec tunnel. The CIDR block must fall within 169.254.0.0/16 and the mask of the CIDR block must be 30 bits in length. The CIDR block cannot be 169.254.0.0/30, 169.254.1.0/30, 169.254.2.0/30, 169.254.3.0/30, 169.254.4.0/30, 169.254.5.0/30, 169.254.6.0/30, or 169.254.169.252/30.
    // 
    //     > The CIDR block of the IPsec tunnel for each IPsec-VPN connection on a VPN gateway must be unique.
    // 
    // *   **LocalBgpIp**: the BGP address on the Alibaba Cloud side. It must be an IP address that falls within the CIDR block of the IPsec tunnel.
    // 
    // > - This parameter is required when the VPN gateway has dynamic BGP enabled.
    // > - Before you add BGP configurations, we recommend that you learn about how BGP dynamic routing works and the limits. For more information, see [Configure BGP dynamic routing](https://help.aliyun.com/document_detail/2638220.html).
    // > - We recommend that you use a private ASN to establish BGP connections to Alibaba Cloud. For information about the range of private ASNs, see the relevant documentation.
    std::shared_ptr<string> bgpConfig_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the value of **RequestId** as the value of **ClientToken**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to immediately start IPsec negotiations after the configuration takes effect. Valid values:
    // 
    // *   **true**: immediately starts IPsec negotiations after the configuration takes effect.
    // *   **false**: IPsec negotiations start when inbound traffic is detected.
    std::shared_ptr<bool> effectImmediately_ = nullptr;
    // You can specify this parameter if you modify the configuration of a single-tunnel IPsec-VPN connection.
    // 
    // Specifies whether to enable the dead peer detection (DPD) feature. Valid values:
    // 
    // *   **true:**: enables the DPD feature. The initiator of the IPsec-VPN connection sends DPD packets to check the existence and availability of the peer. If no feedback is received from the peer within a specific period of time, the connection fails. Then, the ISAKMP SA, IPsec SA, and IPsec tunnel are deleted.
    // *   **false**: disables the DPD feature. The initiator of the IPsec-VPN connection does not send DPD packets.
    std::shared_ptr<bool> enableDpd_ = nullptr;
    // You can specify this parameter if you modify the configuration of a single-tunnel IPsec-VPN connection.
    // 
    // Specifies whether to enable NAT traversal. Valid values:
    // 
    // *   **true** After NAT traversal is enabled, the initiator does not check the UDP ports during IKE negotiations and can automatically discover NAT gateway devices along the IPsec tunnel.
    // *   **false**
    std::shared_ptr<bool> enableNatTraversal_ = nullptr;
    // You can specify this parameter if you modify the configuration of a dual-tunnel IPsec-VPN connection.
    // 
    // Specifies whether to enable BGP for the tunnel. Valid values: **true** and **false**.
    std::shared_ptr<bool> enableTunnelsBgp_ = nullptr;
    // You can specify this parameter if you modify the configuration of a single-tunnel IPsec-VPN connection.
    // 
    // The health check configuration:
    // 
    // *   **HealthCheckConfig.enable**: specifies whether to enable health checks. Valid values: **true** and **false**.
    // *   **HealthCheckConfig.dip**: the destination IP address that is used for health checks.
    // *   **HealthCheckConfig.sip**: the source IP address that is used for health checks.
    // *   **HealthCheckConfig.interval**: the interval between two consecutive health checks. Unit: seconds.
    // *   **HealthCheckConfig.retry**: the maximum number of health check retries.
    std::shared_ptr<string> healthCheckConfig_ = nullptr;
    // This parameter is supported if you modify the configurations of an IPsec-VPN connection in single-tunnel mode.
    // 
    // The configurations of Phase 1 negotiations:
    // 
    // *   **IkeConfig.Psk**: The pre-shared key that is used for identity authentication between the VPN gateway and the on-premises data center.
    // 
    //     *   The key cannot contain space characters. The key must be 1 to 100 characters in length, and can contain digits, letters, and the following special characters: ``~!`@#$%^&*()_-+={}[]|;:\\",.<>/?``
    //     *   If you do not specify a pre-shared key, the system randomly generates a 16-bit string as the pre-shared key. You can call the [DescribeVpnConnection](https://help.aliyun.com/document_detail/2526951.html) operation to query the pre-shared key that is automatically generated by the system.
    // 
    //     > The pre-shared key of the IPsec-VPN connection must be the same as the authentication key of the on-premises data center. Otherwise, connections between the on-premises data center and the VPN gateway cannot be established.
    // 
    // *   **IkeConfig.IkeVersion**: the version of the Internet Key Exchange (IKE) protocol. Valid values: **ikev1** and **ikev2**.
    // 
    //     Compared with IKEv1, IKEv2 simplifies the security association (SA) negotiation process and provides better support for scenarios with multiple CIDR blocks.
    // 
    // *   **IkeConfig.IkeMode**: the negotiation mode of IKE. Valid values: **main** and **aggressive**.
    // 
    //     *   **main:** This mode offers higher security during negotiations.
    //     *   **aggressive:** This mode supports faster negotiations and a higher success rate.
    // 
    // *   **IkeConfig.IkeEncAlg**: the encryption algorithm that is used in Phase 1 negotiations.
    // 
    //     Valid values: **aes**, **aes192**, **aes256**, **des**, and **3des**.
    // 
    // *   **IkeConfig.IkeAuthAlg**: the authentication algorithm that is used in Phase 1 negotiations.
    // 
    //     Valid values: **md5**, **sha1**, **sha256**, **sha384**, and **sha512**.
    // 
    // *   **IkeConfig.IkePfs**: the Diffie-Hellman key exchange algorithm that is used in Phase 1 negotiations. Valid values: **group1**, **group2**, **group5**, and **group14**.
    // 
    // *   **IkeConfig.IkeLifetime**: the SA lifetime as a result of Phase 1 negotiations. Unit: seconds Valid values: **0 to 86400**.
    // 
    // *   **IkeConfig.LocalId**: the identifier of the VPN gateway. The identifier cannot exceed 100 characters in length and cannot contain space characters. The default value is the IP address of the VPN gateway.
    // 
    // *   **IkeConfig.RemoteId**: the identifier of the customer gateway. The identifier cannot exceed 100 characters in length and cannot contain space characters. The default value is the IP address of the customer gateway.
    std::shared_ptr<string> ikeConfig_ = nullptr;
    // You can specify this parameter if you modify the configuration of a single-tunnel IPsec-VPN connection.
    // 
    // The configuration of Phase 2 negotiations:
    // 
    // *   **IpsecConfig.IpsecEncAlg**: the encryption algorithm that is used in Phase 2 negotiations.
    // 
    //     Valid values: **aes**, **aes192**, **aes256**, **des**, and **3des**.
    // 
    // *   **IpsecConfig. IpsecAuthAlg**: the authentication algorithm that is used in Phase 2 negotiations.
    // 
    //     Valid values: **md5**, **sha1**, **sha256**, **sha384**, and **sha512**.
    // 
    // *   **IpsecConfig. IpsecPfs**: the DH key exchange algorithm that is used in Phase 1 negotiations. If you specify this parameter, packets of all protocols are forwarded. Valid values: **disabled**, **group1**, **group2**, **group5**, and **group14**.
    // 
    // *   **IpsecConfig. IpsecLifetime:** the SA lifetime that is determined by Phase 2 negotiations. Unit: seconds. Valid values: **0 to 86400**.
    std::shared_ptr<string> ipsecConfig_ = nullptr;
    // The CIDR block used to connect the virtual private cloud (VPC) to the data center. The CIDR block is used in Phase 2 negotiations.
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
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region in which the IPsec-VPN connection is created.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // You can specify this parameter if you modify the configuration of a single-tunnel IPsec-VPN connection.
    // 
    // If the VPN gateway uses a ShangMi (SM) certificate, you can modify the CA certificate used by the IPsec peer.
    // 
    // If the VPN gateway does not use an SM certificate, you cannot specify this parameter.
    std::shared_ptr<string> remoteCaCertificate_ = nullptr;
    // The CIDR block on the data center side. This CIDR block is used in Phase 2 negotiations.
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
    // You can specify parameters in the **TunnelOptionsSpecification** array when you modify the configurations of an IPsec-VPN connection in dual-tunnel mode. You can modify the configurations of both the active and standby tunnels of the IPsec-VPN connection.
    std::shared_ptr<vector<ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification>> tunnelOptionsSpecification_ = nullptr;
    // The ID of the IPsec-VPN connection.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpnConnectionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
