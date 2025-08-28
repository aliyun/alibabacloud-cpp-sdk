// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPNATTACHMENTATTRIBUTEREQUESTTUNNELOPTIONSSPECIFICATION_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPNATTACHMENTATTRIBUTEREQUESTTUNNELOPTIONSSPECIFICATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig.hpp>
#include <alibabacloud/models/ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig.hpp>
#include <alibabacloud/models/ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_TO_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_TO_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_TO_JSON(TunnelBgpConfig, tunnelBgpConfig_);
      DARABONBA_PTR_TO_JSON(TunnelId, tunnelId_);
      DARABONBA_PTR_TO_JSON(TunnelIkeConfig, tunnelIkeConfig_);
      DARABONBA_PTR_TO_JSON(TunnelIndex, tunnelIndex_);
      DARABONBA_PTR_TO_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_FROM_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_FROM_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_FROM_JSON(TunnelBgpConfig, tunnelBgpConfig_);
      DARABONBA_PTR_FROM_JSON(TunnelId, tunnelId_);
      DARABONBA_PTR_FROM_JSON(TunnelIkeConfig, tunnelIkeConfig_);
      DARABONBA_PTR_FROM_JSON(TunnelIndex, tunnelIndex_);
      DARABONBA_PTR_FROM_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
    };
    ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification() = default ;
    ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification(const ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification &) = default ;
    ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification(ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification &&) = default ;
    ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification() = default ;
    ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification& operator=(const ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification &) = default ;
    ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification& operator=(ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customerGatewayId_ != nullptr
        && this->enableDpd_ != nullptr && this->enableNatTraversal_ != nullptr && this->tunnelBgpConfig_ != nullptr && this->tunnelId_ != nullptr && this->tunnelIkeConfig_ != nullptr
        && this->tunnelIndex_ != nullptr && this->tunnelIpsecConfig_ != nullptr; };
    // customerGatewayId Field Functions 
    bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
    void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
    inline string customerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
    inline ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


    // enableDpd Field Functions 
    bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
    void deleteEnableDpd() { this->enableDpd_ = nullptr;};
    inline bool enableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, false) };
    inline ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification& setEnableDpd(bool enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


    // enableNatTraversal Field Functions 
    bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
    void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
    inline bool enableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, false) };
    inline ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification& setEnableNatTraversal(bool enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


    // tunnelBgpConfig Field Functions 
    bool hasTunnelBgpConfig() const { return this->tunnelBgpConfig_ != nullptr;};
    void deleteTunnelBgpConfig() { this->tunnelBgpConfig_ = nullptr;};
    inline const Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig & tunnelBgpConfig() const { DARABONBA_PTR_GET_CONST(tunnelBgpConfig_, Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig) };
    inline Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig tunnelBgpConfig() { DARABONBA_PTR_GET(tunnelBgpConfig_, Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig) };
    inline ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification& setTunnelBgpConfig(const Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig & tunnelBgpConfig) { DARABONBA_PTR_SET_VALUE(tunnelBgpConfig_, tunnelBgpConfig) };
    inline ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification& setTunnelBgpConfig(Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig && tunnelBgpConfig) { DARABONBA_PTR_SET_RVALUE(tunnelBgpConfig_, tunnelBgpConfig) };


    // tunnelId Field Functions 
    bool hasTunnelId() const { return this->tunnelId_ != nullptr;};
    void deleteTunnelId() { this->tunnelId_ = nullptr;};
    inline string tunnelId() const { DARABONBA_PTR_GET_DEFAULT(tunnelId_, "") };
    inline ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification& setTunnelId(string tunnelId) { DARABONBA_PTR_SET_VALUE(tunnelId_, tunnelId) };


    // tunnelIkeConfig Field Functions 
    bool hasTunnelIkeConfig() const { return this->tunnelIkeConfig_ != nullptr;};
    void deleteTunnelIkeConfig() { this->tunnelIkeConfig_ = nullptr;};
    inline const Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig & tunnelIkeConfig() const { DARABONBA_PTR_GET_CONST(tunnelIkeConfig_, Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig) };
    inline Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig tunnelIkeConfig() { DARABONBA_PTR_GET(tunnelIkeConfig_, Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig) };
    inline ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification& setTunnelIkeConfig(const Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig & tunnelIkeConfig) { DARABONBA_PTR_SET_VALUE(tunnelIkeConfig_, tunnelIkeConfig) };
    inline ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification& setTunnelIkeConfig(Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig && tunnelIkeConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIkeConfig_, tunnelIkeConfig) };


    // tunnelIndex Field Functions 
    bool hasTunnelIndex() const { return this->tunnelIndex_ != nullptr;};
    void deleteTunnelIndex() { this->tunnelIndex_ = nullptr;};
    inline int32_t tunnelIndex() const { DARABONBA_PTR_GET_DEFAULT(tunnelIndex_, 0) };
    inline ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification& setTunnelIndex(int32_t tunnelIndex) { DARABONBA_PTR_SET_VALUE(tunnelIndex_, tunnelIndex) };


    // tunnelIpsecConfig Field Functions 
    bool hasTunnelIpsecConfig() const { return this->tunnelIpsecConfig_ != nullptr;};
    void deleteTunnelIpsecConfig() { this->tunnelIpsecConfig_ = nullptr;};
    inline const Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig & tunnelIpsecConfig() const { DARABONBA_PTR_GET_CONST(tunnelIpsecConfig_, Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig) };
    inline Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig tunnelIpsecConfig() { DARABONBA_PTR_GET(tunnelIpsecConfig_, Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig) };
    inline ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification& setTunnelIpsecConfig(const Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig & tunnelIpsecConfig) { DARABONBA_PTR_SET_VALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };
    inline ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecification& setTunnelIpsecConfig(Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig && tunnelIpsecConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };


  protected:
    // The ID of the customer gateway that is associated with the tunnel.
    // 
    // >  This parameter is only supported in dual-tunnel IPsec-VPN connections.
    std::shared_ptr<string> customerGatewayId_ = nullptr;
    // Specifies whether to enable the Dead Peer Detection (DPD) feature for the tunnel. Valid values:
    // 
    // *   **true**: enables DPD. The initiator of the IPsec-VPN connection sends DPD packets to check the existence and availability of the peer. If no feedback is received from the peer within the specified period of time, the connection fails. In this case, ISAKMP SA and IPsec SA are deleted along with the security tunnel.
    // *   **false**: disables DPD. The initiator of the IPsec-VPN connection does not send DPD packets.
    std::shared_ptr<bool> enableDpd_ = nullptr;
    // Specifies whether to enable NAT traversal for the tunnel. Valid values:
    // 
    // *   **true**: enables NAT traversal. After NAT traversal is enabled, the initiator does not check the UDP ports during IKE negotiations and can automatically discover NAT gateway devices along the IPsec-VPN tunnel.
    // *   **false**: disables NAT traversal.
    std::shared_ptr<bool> enableNatTraversal_ = nullptr;
    // Add BGP configurations for the tunnel.
    // 
    // >  If you enable BGP for an IPsec-VPN connection, you must set **EnableTunnelsBgp** parameter to **true**.
    std::shared_ptr<Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig> tunnelBgpConfig_ = nullptr;
    // The tunnel ID.
    std::shared_ptr<string> tunnelId_ = nullptr;
    // The configuration of Phase 1 negotiations.
    std::shared_ptr<Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig> tunnelIkeConfig_ = nullptr;
    // The order in which the tunnel was created.
    // 
    // *   **1**: Tunnel 1.
    // *   **2**: Tunnel 2.
    std::shared_ptr<int32_t> tunnelIndex_ = nullptr;
    // The configuration of Phase 2 negotiations.
    std::shared_ptr<Models::ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig> tunnelIpsecConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
