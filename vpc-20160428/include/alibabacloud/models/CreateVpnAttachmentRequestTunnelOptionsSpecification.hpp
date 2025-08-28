// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPNATTACHMENTREQUESTTUNNELOPTIONSSPECIFICATION_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPNATTACHMENTREQUESTTUNNELOPTIONSSPECIFICATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelBgpConfig.hpp>
#include <alibabacloud/models/CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig.hpp>
#include <alibabacloud/models/CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIpsecConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateVpnAttachmentRequestTunnelOptionsSpecification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpnAttachmentRequestTunnelOptionsSpecification& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_TO_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_TO_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_TO_JSON(TunnelBgpConfig, tunnelBgpConfig_);
      DARABONBA_PTR_TO_JSON(TunnelIkeConfig, tunnelIkeConfig_);
      DARABONBA_PTR_TO_JSON(TunnelIndex, tunnelIndex_);
      DARABONBA_PTR_TO_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpnAttachmentRequestTunnelOptionsSpecification& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_FROM_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_FROM_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_FROM_JSON(TunnelBgpConfig, tunnelBgpConfig_);
      DARABONBA_PTR_FROM_JSON(TunnelIkeConfig, tunnelIkeConfig_);
      DARABONBA_PTR_FROM_JSON(TunnelIndex, tunnelIndex_);
      DARABONBA_PTR_FROM_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
    };
    CreateVpnAttachmentRequestTunnelOptionsSpecification() = default ;
    CreateVpnAttachmentRequestTunnelOptionsSpecification(const CreateVpnAttachmentRequestTunnelOptionsSpecification &) = default ;
    CreateVpnAttachmentRequestTunnelOptionsSpecification(CreateVpnAttachmentRequestTunnelOptionsSpecification &&) = default ;
    CreateVpnAttachmentRequestTunnelOptionsSpecification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpnAttachmentRequestTunnelOptionsSpecification() = default ;
    CreateVpnAttachmentRequestTunnelOptionsSpecification& operator=(const CreateVpnAttachmentRequestTunnelOptionsSpecification &) = default ;
    CreateVpnAttachmentRequestTunnelOptionsSpecification& operator=(CreateVpnAttachmentRequestTunnelOptionsSpecification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customerGatewayId_ != nullptr
        && this->enableDpd_ != nullptr && this->enableNatTraversal_ != nullptr && this->tunnelBgpConfig_ != nullptr && this->tunnelIkeConfig_ != nullptr && this->tunnelIndex_ != nullptr
        && this->tunnelIpsecConfig_ != nullptr; };
    // customerGatewayId Field Functions 
    bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
    void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
    inline string customerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
    inline CreateVpnAttachmentRequestTunnelOptionsSpecification& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


    // enableDpd Field Functions 
    bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
    void deleteEnableDpd() { this->enableDpd_ = nullptr;};
    inline bool enableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, false) };
    inline CreateVpnAttachmentRequestTunnelOptionsSpecification& setEnableDpd(bool enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


    // enableNatTraversal Field Functions 
    bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
    void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
    inline bool enableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, false) };
    inline CreateVpnAttachmentRequestTunnelOptionsSpecification& setEnableNatTraversal(bool enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


    // tunnelBgpConfig Field Functions 
    bool hasTunnelBgpConfig() const { return this->tunnelBgpConfig_ != nullptr;};
    void deleteTunnelBgpConfig() { this->tunnelBgpConfig_ = nullptr;};
    inline const Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelBgpConfig & tunnelBgpConfig() const { DARABONBA_PTR_GET_CONST(tunnelBgpConfig_, Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelBgpConfig) };
    inline Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelBgpConfig tunnelBgpConfig() { DARABONBA_PTR_GET(tunnelBgpConfig_, Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelBgpConfig) };
    inline CreateVpnAttachmentRequestTunnelOptionsSpecification& setTunnelBgpConfig(const Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelBgpConfig & tunnelBgpConfig) { DARABONBA_PTR_SET_VALUE(tunnelBgpConfig_, tunnelBgpConfig) };
    inline CreateVpnAttachmentRequestTunnelOptionsSpecification& setTunnelBgpConfig(Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelBgpConfig && tunnelBgpConfig) { DARABONBA_PTR_SET_RVALUE(tunnelBgpConfig_, tunnelBgpConfig) };


    // tunnelIkeConfig Field Functions 
    bool hasTunnelIkeConfig() const { return this->tunnelIkeConfig_ != nullptr;};
    void deleteTunnelIkeConfig() { this->tunnelIkeConfig_ = nullptr;};
    inline const Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig & tunnelIkeConfig() const { DARABONBA_PTR_GET_CONST(tunnelIkeConfig_, Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig) };
    inline Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig tunnelIkeConfig() { DARABONBA_PTR_GET(tunnelIkeConfig_, Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig) };
    inline CreateVpnAttachmentRequestTunnelOptionsSpecification& setTunnelIkeConfig(const Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig & tunnelIkeConfig) { DARABONBA_PTR_SET_VALUE(tunnelIkeConfig_, tunnelIkeConfig) };
    inline CreateVpnAttachmentRequestTunnelOptionsSpecification& setTunnelIkeConfig(Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig && tunnelIkeConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIkeConfig_, tunnelIkeConfig) };


    // tunnelIndex Field Functions 
    bool hasTunnelIndex() const { return this->tunnelIndex_ != nullptr;};
    void deleteTunnelIndex() { this->tunnelIndex_ = nullptr;};
    inline int32_t tunnelIndex() const { DARABONBA_PTR_GET_DEFAULT(tunnelIndex_, 0) };
    inline CreateVpnAttachmentRequestTunnelOptionsSpecification& setTunnelIndex(int32_t tunnelIndex) { DARABONBA_PTR_SET_VALUE(tunnelIndex_, tunnelIndex) };


    // tunnelIpsecConfig Field Functions 
    bool hasTunnelIpsecConfig() const { return this->tunnelIpsecConfig_ != nullptr;};
    void deleteTunnelIpsecConfig() { this->tunnelIpsecConfig_ = nullptr;};
    inline const Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIpsecConfig & tunnelIpsecConfig() const { DARABONBA_PTR_GET_CONST(tunnelIpsecConfig_, Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIpsecConfig) };
    inline Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIpsecConfig tunnelIpsecConfig() { DARABONBA_PTR_GET(tunnelIpsecConfig_, Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIpsecConfig) };
    inline CreateVpnAttachmentRequestTunnelOptionsSpecification& setTunnelIpsecConfig(const Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIpsecConfig & tunnelIpsecConfig) { DARABONBA_PTR_SET_VALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };
    inline CreateVpnAttachmentRequestTunnelOptionsSpecification& setTunnelIpsecConfig(Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIpsecConfig && tunnelIpsecConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };


  protected:
    // The ID of the customer gateway that is associated with the tunnel.
    // 
    // >  This parameter is required when you create a dual-tunnel IPsec-VPN connection.
    std::shared_ptr<string> customerGatewayId_ = nullptr;
    // Specifies whether to enable the DPD feature for the tunnel. Valid values:
    // 
    // *   **true** (default): enables DPD. The initiator of the IPsec-VPN connection sends DPD packets to check the existence and availability of the peer. If no feedback is received from the peer within the specified period of time, the connection fails. In this case, ISAKMP SA and IPsec SA are deleted along with the security tunnel.
    // *   **false**: disables DPD. The initiator of the IPsec-VPN connection does not send DPD packets.
    std::shared_ptr<bool> enableDpd_ = nullptr;
    // Specifies whether to enable NAT traversal for the tunnel. Valid values:
    // 
    // *   **true** (default): enables NAT traversal. After NAT traversal is enabled, the initiator does not check the UDP ports during IKE negotiations and can automatically discover NAT gateway devices along the IPsec-VPN tunnel.
    // *   **false**: disables NAT traversal.
    std::shared_ptr<bool> enableNatTraversal_ = nullptr;
    // The BGP configurations of the tunnel.
    // 
    // >  If you enable BGP for an IPsec-VPN connection, you must set **EnableTunnelsBgp** parameter to **true**.
    std::shared_ptr<Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelBgpConfig> tunnelBgpConfig_ = nullptr;
    // The configurations of Phase 1 negotiations.
    std::shared_ptr<Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig> tunnelIkeConfig_ = nullptr;
    // The order in which the tunnel was created.
    // 
    // *   **1**: Tunnel 1.
    // *   **2**: Tunnel 2.
    std::shared_ptr<int32_t> tunnelIndex_ = nullptr;
    // The configurations of Phase 2 negotiations.
    std::shared_ptr<Models::CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIpsecConfig> tunnelIpsecConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
