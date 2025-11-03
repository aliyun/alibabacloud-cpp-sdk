// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPNCONNECTIONATTRIBUTEREQUESTTUNNELOPTIONSSPECIFICATION_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPNCONNECTIONATTRIBUTEREQUESTTUNNELOPTIONSSPECIFICATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig.hpp>
#include <alibabacloud/models/ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig.hpp>
#include <alibabacloud/models/ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_TO_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_TO_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_TO_JSON(RemoteCaCertificate, remoteCaCertificate_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(TunnelBgpConfig, tunnelBgpConfig_);
      DARABONBA_PTR_TO_JSON(TunnelId, tunnelId_);
      DARABONBA_PTR_TO_JSON(TunnelIkeConfig, tunnelIkeConfig_);
      DARABONBA_PTR_TO_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_FROM_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_FROM_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_FROM_JSON(RemoteCaCertificate, remoteCaCertificate_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(TunnelBgpConfig, tunnelBgpConfig_);
      DARABONBA_PTR_FROM_JSON(TunnelId, tunnelId_);
      DARABONBA_PTR_FROM_JSON(TunnelIkeConfig, tunnelIkeConfig_);
      DARABONBA_PTR_FROM_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
    };
    ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification() = default ;
    ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification(const ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification &) = default ;
    ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification(ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification &&) = default ;
    ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification() = default ;
    ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification& operator=(const ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification &) = default ;
    ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification& operator=(ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerGatewayId_ == nullptr
        && return this->enableDpd_ == nullptr && return this->enableNatTraversal_ == nullptr && return this->remoteCaCertificate_ == nullptr && return this->role_ == nullptr && return this->tunnelBgpConfig_ == nullptr
        && return this->tunnelId_ == nullptr && return this->tunnelIkeConfig_ == nullptr && return this->tunnelIpsecConfig_ == nullptr; };
    // customerGatewayId Field Functions 
    bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
    void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
    inline string customerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
    inline ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


    // enableDpd Field Functions 
    bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
    void deleteEnableDpd() { this->enableDpd_ = nullptr;};
    inline bool enableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, false) };
    inline ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification& setEnableDpd(bool enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


    // enableNatTraversal Field Functions 
    bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
    void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
    inline bool enableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, false) };
    inline ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification& setEnableNatTraversal(bool enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


    // remoteCaCertificate Field Functions 
    bool hasRemoteCaCertificate() const { return this->remoteCaCertificate_ != nullptr;};
    void deleteRemoteCaCertificate() { this->remoteCaCertificate_ = nullptr;};
    inline string remoteCaCertificate() const { DARABONBA_PTR_GET_DEFAULT(remoteCaCertificate_, "") };
    inline ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification& setRemoteCaCertificate(string remoteCaCertificate) { DARABONBA_PTR_SET_VALUE(remoteCaCertificate_, remoteCaCertificate) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // tunnelBgpConfig Field Functions 
    bool hasTunnelBgpConfig() const { return this->tunnelBgpConfig_ != nullptr;};
    void deleteTunnelBgpConfig() { this->tunnelBgpConfig_ = nullptr;};
    inline const Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig & tunnelBgpConfig() const { DARABONBA_PTR_GET_CONST(tunnelBgpConfig_, Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig) };
    inline Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig tunnelBgpConfig() { DARABONBA_PTR_GET(tunnelBgpConfig_, Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig) };
    inline ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification& setTunnelBgpConfig(const Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig & tunnelBgpConfig) { DARABONBA_PTR_SET_VALUE(tunnelBgpConfig_, tunnelBgpConfig) };
    inline ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification& setTunnelBgpConfig(Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig && tunnelBgpConfig) { DARABONBA_PTR_SET_RVALUE(tunnelBgpConfig_, tunnelBgpConfig) };


    // tunnelId Field Functions 
    bool hasTunnelId() const { return this->tunnelId_ != nullptr;};
    void deleteTunnelId() { this->tunnelId_ = nullptr;};
    inline string tunnelId() const { DARABONBA_PTR_GET_DEFAULT(tunnelId_, "") };
    inline ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification& setTunnelId(string tunnelId) { DARABONBA_PTR_SET_VALUE(tunnelId_, tunnelId) };


    // tunnelIkeConfig Field Functions 
    bool hasTunnelIkeConfig() const { return this->tunnelIkeConfig_ != nullptr;};
    void deleteTunnelIkeConfig() { this->tunnelIkeConfig_ = nullptr;};
    inline const Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig & tunnelIkeConfig() const { DARABONBA_PTR_GET_CONST(tunnelIkeConfig_, Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig) };
    inline Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig tunnelIkeConfig() { DARABONBA_PTR_GET(tunnelIkeConfig_, Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig) };
    inline ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification& setTunnelIkeConfig(const Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig & tunnelIkeConfig) { DARABONBA_PTR_SET_VALUE(tunnelIkeConfig_, tunnelIkeConfig) };
    inline ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification& setTunnelIkeConfig(Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig && tunnelIkeConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIkeConfig_, tunnelIkeConfig) };


    // tunnelIpsecConfig Field Functions 
    bool hasTunnelIpsecConfig() const { return this->tunnelIpsecConfig_ != nullptr;};
    void deleteTunnelIpsecConfig() { this->tunnelIpsecConfig_ = nullptr;};
    inline const Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig & tunnelIpsecConfig() const { DARABONBA_PTR_GET_CONST(tunnelIpsecConfig_, Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig) };
    inline Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig tunnelIpsecConfig() { DARABONBA_PTR_GET(tunnelIpsecConfig_, Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig) };
    inline ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification& setTunnelIpsecConfig(const Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig & tunnelIpsecConfig) { DARABONBA_PTR_SET_VALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };
    inline ModifyVpnConnectionAttributeRequestTunnelOptionsSpecification& setTunnelIpsecConfig(Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig && tunnelIpsecConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };


  protected:
    // The ID of the customer gateway associated with the tunnel.
    std::shared_ptr<string> customerGatewayId_ = nullptr;
    // Specifies whether to enable the Dead Peer Detection (DPD) feature for the tunnel. Valid values:
    // 
    // *   **true**: enables DPD. The initiator of the IPsec-VPN connection sends DPD packets to check the existence and availability of the peer. If no feedback is received from the peer within the specified period of time, the connection fails. In this case, ISAKMP SA and IPsec SA are deleted. The security tunnel is also deleted.
    // *   **false**: disables DPD. The initiator of the IPsec-VPN connection does not send DPD packets.
    std::shared_ptr<bool> enableDpd_ = nullptr;
    // Specifies whether to enable NAT traversal for the tunnel. Valid values:
    // 
    // *   **true**: enables NAT traversal. After NAT traversal is enabled, the initiator does not check the UDP ports during IKE negotiations and can automatically discover NAT gateway devices along the IPsec-VPN tunnel.
    // *   **false**: disables NAT traversal.
    std::shared_ptr<bool> enableNatTraversal_ = nullptr;
    // If the VPN gateway uses an SM certificate, you can modify the CA certificate used by the IPsec peer.
    // 
    // If the VPN gateway does not use an SM certificate, this parameter is not supported.
    std::shared_ptr<string> remoteCaCertificate_ = nullptr;
    // The tunnel role. Valid values:
    // 
    // *   **master**: The tunnel is an active tunnel.
    // *   **slave**: The tunnel is a standby tunnel.
    std::shared_ptr<string> role_ = nullptr;
    // The Border Gateway Protocol (BGP) configurations of the tunnel.
    std::shared_ptr<Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig> tunnelBgpConfig_ = nullptr;
    // The tunnel ID.
    std::shared_ptr<string> tunnelId_ = nullptr;
    // The configurations of Phase 1 negotiations.
    std::shared_ptr<Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig> tunnelIkeConfig_ = nullptr;
    // The configurations of Phase 2 negotiations.
    std::shared_ptr<Models::ModifyVpnConnectionAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig> tunnelIpsecConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
