// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTUNNELATTRIBUTEREQUESTTUNNELOPTIONSSPECIFICATION_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTUNNELATTRIBUTEREQUESTTUNNELOPTIONSSPECIFICATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig.hpp>
#include <alibabacloud/models/ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig.hpp>
#include <alibabacloud/models/ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyTunnelAttributeRequestTunnelOptionsSpecification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTunnelAttributeRequestTunnelOptionsSpecification& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_TO_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_TO_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_TO_JSON(RemoteCaCertificate, remoteCaCertificate_);
      DARABONBA_PTR_TO_JSON(TunnelBgpConfig, tunnelBgpConfig_);
      DARABONBA_PTR_TO_JSON(TunnelIkeConfig, tunnelIkeConfig_);
      DARABONBA_PTR_TO_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTunnelAttributeRequestTunnelOptionsSpecification& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_FROM_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_FROM_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_FROM_JSON(RemoteCaCertificate, remoteCaCertificate_);
      DARABONBA_PTR_FROM_JSON(TunnelBgpConfig, tunnelBgpConfig_);
      DARABONBA_PTR_FROM_JSON(TunnelIkeConfig, tunnelIkeConfig_);
      DARABONBA_PTR_FROM_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
    };
    ModifyTunnelAttributeRequestTunnelOptionsSpecification() = default ;
    ModifyTunnelAttributeRequestTunnelOptionsSpecification(const ModifyTunnelAttributeRequestTunnelOptionsSpecification &) = default ;
    ModifyTunnelAttributeRequestTunnelOptionsSpecification(ModifyTunnelAttributeRequestTunnelOptionsSpecification &&) = default ;
    ModifyTunnelAttributeRequestTunnelOptionsSpecification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTunnelAttributeRequestTunnelOptionsSpecification() = default ;
    ModifyTunnelAttributeRequestTunnelOptionsSpecification& operator=(const ModifyTunnelAttributeRequestTunnelOptionsSpecification &) = default ;
    ModifyTunnelAttributeRequestTunnelOptionsSpecification& operator=(ModifyTunnelAttributeRequestTunnelOptionsSpecification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerGatewayId_ == nullptr
        && return this->enableDpd_ == nullptr && return this->enableNatTraversal_ == nullptr && return this->remoteCaCertificate_ == nullptr && return this->tunnelBgpConfig_ == nullptr && return this->tunnelIkeConfig_ == nullptr
        && return this->tunnelIpsecConfig_ == nullptr; };
    // customerGatewayId Field Functions 
    bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
    void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
    inline string customerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
    inline ModifyTunnelAttributeRequestTunnelOptionsSpecification& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


    // enableDpd Field Functions 
    bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
    void deleteEnableDpd() { this->enableDpd_ = nullptr;};
    inline bool enableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, false) };
    inline ModifyTunnelAttributeRequestTunnelOptionsSpecification& setEnableDpd(bool enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


    // enableNatTraversal Field Functions 
    bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
    void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
    inline bool enableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, false) };
    inline ModifyTunnelAttributeRequestTunnelOptionsSpecification& setEnableNatTraversal(bool enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


    // remoteCaCertificate Field Functions 
    bool hasRemoteCaCertificate() const { return this->remoteCaCertificate_ != nullptr;};
    void deleteRemoteCaCertificate() { this->remoteCaCertificate_ = nullptr;};
    inline string remoteCaCertificate() const { DARABONBA_PTR_GET_DEFAULT(remoteCaCertificate_, "") };
    inline ModifyTunnelAttributeRequestTunnelOptionsSpecification& setRemoteCaCertificate(string remoteCaCertificate) { DARABONBA_PTR_SET_VALUE(remoteCaCertificate_, remoteCaCertificate) };


    // tunnelBgpConfig Field Functions 
    bool hasTunnelBgpConfig() const { return this->tunnelBgpConfig_ != nullptr;};
    void deleteTunnelBgpConfig() { this->tunnelBgpConfig_ = nullptr;};
    inline const Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig & tunnelBgpConfig() const { DARABONBA_PTR_GET_CONST(tunnelBgpConfig_, Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig) };
    inline Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig tunnelBgpConfig() { DARABONBA_PTR_GET(tunnelBgpConfig_, Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig) };
    inline ModifyTunnelAttributeRequestTunnelOptionsSpecification& setTunnelBgpConfig(const Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig & tunnelBgpConfig) { DARABONBA_PTR_SET_VALUE(tunnelBgpConfig_, tunnelBgpConfig) };
    inline ModifyTunnelAttributeRequestTunnelOptionsSpecification& setTunnelBgpConfig(Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig && tunnelBgpConfig) { DARABONBA_PTR_SET_RVALUE(tunnelBgpConfig_, tunnelBgpConfig) };


    // tunnelIkeConfig Field Functions 
    bool hasTunnelIkeConfig() const { return this->tunnelIkeConfig_ != nullptr;};
    void deleteTunnelIkeConfig() { this->tunnelIkeConfig_ = nullptr;};
    inline const Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig & tunnelIkeConfig() const { DARABONBA_PTR_GET_CONST(tunnelIkeConfig_, Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig) };
    inline Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig tunnelIkeConfig() { DARABONBA_PTR_GET(tunnelIkeConfig_, Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig) };
    inline ModifyTunnelAttributeRequestTunnelOptionsSpecification& setTunnelIkeConfig(const Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig & tunnelIkeConfig) { DARABONBA_PTR_SET_VALUE(tunnelIkeConfig_, tunnelIkeConfig) };
    inline ModifyTunnelAttributeRequestTunnelOptionsSpecification& setTunnelIkeConfig(Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig && tunnelIkeConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIkeConfig_, tunnelIkeConfig) };


    // tunnelIpsecConfig Field Functions 
    bool hasTunnelIpsecConfig() const { return this->tunnelIpsecConfig_ != nullptr;};
    void deleteTunnelIpsecConfig() { this->tunnelIpsecConfig_ = nullptr;};
    inline const Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig & tunnelIpsecConfig() const { DARABONBA_PTR_GET_CONST(tunnelIpsecConfig_, Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig) };
    inline Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig tunnelIpsecConfig() { DARABONBA_PTR_GET(tunnelIpsecConfig_, Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig) };
    inline ModifyTunnelAttributeRequestTunnelOptionsSpecification& setTunnelIpsecConfig(const Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig & tunnelIpsecConfig) { DARABONBA_PTR_SET_VALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };
    inline ModifyTunnelAttributeRequestTunnelOptionsSpecification& setTunnelIpsecConfig(Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig && tunnelIpsecConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };


  protected:
    // The ID of the customer gateway associated with the tunnel.
    std::shared_ptr<string> customerGatewayId_ = nullptr;
    // Specifies whether to enable dead peer detection (DPD). Valid values:
    // 
    // *   **true** The IPsec initiator sends DPD packets to check the IPsec peer is alive. If no response is received from the peer within a specified period of time, the IPsec peer is considered disconnected. Then, the ISAKMP SA, IPsec SA, and IPsec tunnel are deleted.
    // *   **false**: DPD is disabled. The IPsec initiator does not send DPD packets.
    std::shared_ptr<bool> enableDpd_ = nullptr;
    // Specifies whether to enable NAT traversal. Valid values:
    // 
    // *   **true**: enables NAT traversal. After NAT traversal is enabled, the initiator does not check the UDP ports during IKE negotiations and can automatically discover NAT gateway devices along the IPsec-VPN tunnel.
    // *   **false**: disables NAT traversal.
    std::shared_ptr<bool> enableNatTraversal_ = nullptr;
    // The peer certificate authority (CA) certificate when you want to attach the IPsec connection to a virtual private network (VPN) gateway that uses a ShangMi (SM) certificate.
    std::shared_ptr<string> remoteCaCertificate_ = nullptr;
    // The Border Gateway Protocol (BGP) configurations of the tunnel.
    // 
    // If the BGP feature is not enabled for the tunnel, you must call the [ModifyVpnConnectionAttribute](https://help.aliyun.com/document_detail/120381.html) operation to enable the feature and configure BGP.
    std::shared_ptr<Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelBgpConfig> tunnelBgpConfig_ = nullptr;
    // The configurations of IKE Phase 1.
    std::shared_ptr<Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig> tunnelIkeConfig_ = nullptr;
    // The configurations of IPsec Phase 2.
    std::shared_ptr<Models::ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig> tunnelIpsecConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
