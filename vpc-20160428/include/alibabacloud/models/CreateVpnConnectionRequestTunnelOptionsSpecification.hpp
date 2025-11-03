// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPNCONNECTIONREQUESTTUNNELOPTIONSSPECIFICATION_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPNCONNECTIONREQUESTTUNNELOPTIONSSPECIFICATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig.hpp>
#include <alibabacloud/models/CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelIkeConfig.hpp>
#include <alibabacloud/models/CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelIpsecConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateVpnConnectionRequestTunnelOptionsSpecification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpnConnectionRequestTunnelOptionsSpecification& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_TO_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_TO_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_TO_JSON(RemoteCaCertificate, remoteCaCertificate_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(TunnelBgpConfig, tunnelBgpConfig_);
      DARABONBA_PTR_TO_JSON(TunnelIkeConfig, tunnelIkeConfig_);
      DARABONBA_PTR_TO_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpnConnectionRequestTunnelOptionsSpecification& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_FROM_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_FROM_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_FROM_JSON(RemoteCaCertificate, remoteCaCertificate_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(TunnelBgpConfig, tunnelBgpConfig_);
      DARABONBA_PTR_FROM_JSON(TunnelIkeConfig, tunnelIkeConfig_);
      DARABONBA_PTR_FROM_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
    };
    CreateVpnConnectionRequestTunnelOptionsSpecification() = default ;
    CreateVpnConnectionRequestTunnelOptionsSpecification(const CreateVpnConnectionRequestTunnelOptionsSpecification &) = default ;
    CreateVpnConnectionRequestTunnelOptionsSpecification(CreateVpnConnectionRequestTunnelOptionsSpecification &&) = default ;
    CreateVpnConnectionRequestTunnelOptionsSpecification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpnConnectionRequestTunnelOptionsSpecification() = default ;
    CreateVpnConnectionRequestTunnelOptionsSpecification& operator=(const CreateVpnConnectionRequestTunnelOptionsSpecification &) = default ;
    CreateVpnConnectionRequestTunnelOptionsSpecification& operator=(CreateVpnConnectionRequestTunnelOptionsSpecification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerGatewayId_ == nullptr
        && return this->enableDpd_ == nullptr && return this->enableNatTraversal_ == nullptr && return this->remoteCaCertificate_ == nullptr && return this->role_ == nullptr && return this->tunnelBgpConfig_ == nullptr
        && return this->tunnelIkeConfig_ == nullptr && return this->tunnelIpsecConfig_ == nullptr; };
    // customerGatewayId Field Functions 
    bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
    void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
    inline string customerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
    inline CreateVpnConnectionRequestTunnelOptionsSpecification& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


    // enableDpd Field Functions 
    bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
    void deleteEnableDpd() { this->enableDpd_ = nullptr;};
    inline bool enableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, false) };
    inline CreateVpnConnectionRequestTunnelOptionsSpecification& setEnableDpd(bool enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


    // enableNatTraversal Field Functions 
    bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
    void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
    inline bool enableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, false) };
    inline CreateVpnConnectionRequestTunnelOptionsSpecification& setEnableNatTraversal(bool enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


    // remoteCaCertificate Field Functions 
    bool hasRemoteCaCertificate() const { return this->remoteCaCertificate_ != nullptr;};
    void deleteRemoteCaCertificate() { this->remoteCaCertificate_ = nullptr;};
    inline string remoteCaCertificate() const { DARABONBA_PTR_GET_DEFAULT(remoteCaCertificate_, "") };
    inline CreateVpnConnectionRequestTunnelOptionsSpecification& setRemoteCaCertificate(string remoteCaCertificate) { DARABONBA_PTR_SET_VALUE(remoteCaCertificate_, remoteCaCertificate) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline CreateVpnConnectionRequestTunnelOptionsSpecification& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // tunnelBgpConfig Field Functions 
    bool hasTunnelBgpConfig() const { return this->tunnelBgpConfig_ != nullptr;};
    void deleteTunnelBgpConfig() { this->tunnelBgpConfig_ = nullptr;};
    inline const Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig & tunnelBgpConfig() const { DARABONBA_PTR_GET_CONST(tunnelBgpConfig_, Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig) };
    inline Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig tunnelBgpConfig() { DARABONBA_PTR_GET(tunnelBgpConfig_, Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig) };
    inline CreateVpnConnectionRequestTunnelOptionsSpecification& setTunnelBgpConfig(const Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig & tunnelBgpConfig) { DARABONBA_PTR_SET_VALUE(tunnelBgpConfig_, tunnelBgpConfig) };
    inline CreateVpnConnectionRequestTunnelOptionsSpecification& setTunnelBgpConfig(Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig && tunnelBgpConfig) { DARABONBA_PTR_SET_RVALUE(tunnelBgpConfig_, tunnelBgpConfig) };


    // tunnelIkeConfig Field Functions 
    bool hasTunnelIkeConfig() const { return this->tunnelIkeConfig_ != nullptr;};
    void deleteTunnelIkeConfig() { this->tunnelIkeConfig_ = nullptr;};
    inline const Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelIkeConfig & tunnelIkeConfig() const { DARABONBA_PTR_GET_CONST(tunnelIkeConfig_, Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelIkeConfig) };
    inline Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelIkeConfig tunnelIkeConfig() { DARABONBA_PTR_GET(tunnelIkeConfig_, Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelIkeConfig) };
    inline CreateVpnConnectionRequestTunnelOptionsSpecification& setTunnelIkeConfig(const Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelIkeConfig & tunnelIkeConfig) { DARABONBA_PTR_SET_VALUE(tunnelIkeConfig_, tunnelIkeConfig) };
    inline CreateVpnConnectionRequestTunnelOptionsSpecification& setTunnelIkeConfig(Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelIkeConfig && tunnelIkeConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIkeConfig_, tunnelIkeConfig) };


    // tunnelIpsecConfig Field Functions 
    bool hasTunnelIpsecConfig() const { return this->tunnelIpsecConfig_ != nullptr;};
    void deleteTunnelIpsecConfig() { this->tunnelIpsecConfig_ = nullptr;};
    inline const Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelIpsecConfig & tunnelIpsecConfig() const { DARABONBA_PTR_GET_CONST(tunnelIpsecConfig_, Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelIpsecConfig) };
    inline Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelIpsecConfig tunnelIpsecConfig() { DARABONBA_PTR_GET(tunnelIpsecConfig_, Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelIpsecConfig) };
    inline CreateVpnConnectionRequestTunnelOptionsSpecification& setTunnelIpsecConfig(const Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelIpsecConfig & tunnelIpsecConfig) { DARABONBA_PTR_SET_VALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };
    inline CreateVpnConnectionRequestTunnelOptionsSpecification& setTunnelIpsecConfig(Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelIpsecConfig && tunnelIpsecConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };


  protected:
    // The ID of the customer gateway that is associated with the tunnel.
    // 
    // > - This parameter is required when you create an IPsec-VPN connection in dual-tunnel mode.
    // > - You can specify parameters in the **TunnelOptionsSpecification** array when you create an IPsec-VPN connection in dual tunnel mode.
    // > - When you create an IPsec-VPN connection in dual tunnel mode, you must add configurations of the active and standby tunnels for the IPsec-VPN connection. Each IPsec-VPN connection supports only one active tunnel and one standby tunnel.
    std::shared_ptr<string> customerGatewayId_ = nullptr;
    // Specifies whether to enable the Dead Peer Detection (DPD) feature for the tunnel. Valid values:
    // 
    // *   **true** (default): enables DPD. The initiator of the IPsec-VPN connection sends DPD packets to check the existence and availability of the peer. If no feedback is received from the peer within the specified period of time, the connection fails. In this case, ISAKMP SA and IPsec SA are deleted. The security tunnel is also deleted.
    // *   **false**: disables DPD. The initiator of the IPsec-VPN connection does not send DPD packets.
    std::shared_ptr<bool> enableDpd_ = nullptr;
    // Specifies whether to enable NAT traversal for the tunnel. Valid values:
    // 
    // *   **true** (default): enables NAT traversal. After NAT traversal is enabled, the initiator does not check the UDP ports during IKE negotiations and can automatically discover NAT gateway devices along the IPsec-VPN tunnel.
    // *   **false**: disables NAT traversal.
    std::shared_ptr<bool> enableNatTraversal_ = nullptr;
    // If the VPN gateway uses an SM certificate, you need to configure the CA certificate used by the IPsec peer.
    // 
    // *   If the VPN gateway uses an SM certificate, this parameter is required.
    // *   If the VPN gateway does not use an SM certificate, leave this parameter empty.
    std::shared_ptr<string> remoteCaCertificate_ = nullptr;
    // The role of the tunnel. Valid values:
    // 
    // *   **master**: The tunnel is an active tunnel.
    // *   **slave**: The tunnel is a standby tunnel.
    std::shared_ptr<string> role_ = nullptr;
    // The Border Gateway Protocol (BGP) configurations of the tunnel.
    std::shared_ptr<Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig> tunnelBgpConfig_ = nullptr;
    // The configurations of Phase 1 negotiations.
    std::shared_ptr<Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelIkeConfig> tunnelIkeConfig_ = nullptr;
    // The configurations of Phase 2 negotiations.
    std::shared_ptr<Models::CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelIpsecConfig> tunnelIpsecConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
