// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTUNNELATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTUNNELATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyTunnelAttributeResponseBodyTunnelBgpConfig.hpp>
#include <alibabacloud/models/ModifyTunnelAttributeResponseBodyTunnelIkeConfig.hpp>
#include <alibabacloud/models/ModifyTunnelAttributeResponseBodyTunnelIpsecConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyTunnelAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTunnelAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_TO_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_TO_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(RemoteCaCertificate, remoteCaCertificate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TunnelBgpConfig, tunnelBgpConfig_);
      DARABONBA_PTR_TO_JSON(TunnelId, tunnelId_);
      DARABONBA_PTR_TO_JSON(TunnelIkeConfig, tunnelIkeConfig_);
      DARABONBA_PTR_TO_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
      DARABONBA_PTR_TO_JSON(ZoneNo, zoneNo_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTunnelAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_FROM_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_FROM_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(RemoteCaCertificate, remoteCaCertificate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TunnelBgpConfig, tunnelBgpConfig_);
      DARABONBA_PTR_FROM_JSON(TunnelId, tunnelId_);
      DARABONBA_PTR_FROM_JSON(TunnelIkeConfig, tunnelIkeConfig_);
      DARABONBA_PTR_FROM_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
      DARABONBA_PTR_FROM_JSON(ZoneNo, zoneNo_);
    };
    ModifyTunnelAttributeResponseBody() = default ;
    ModifyTunnelAttributeResponseBody(const ModifyTunnelAttributeResponseBody &) = default ;
    ModifyTunnelAttributeResponseBody(ModifyTunnelAttributeResponseBody &&) = default ;
    ModifyTunnelAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTunnelAttributeResponseBody() = default ;
    ModifyTunnelAttributeResponseBody& operator=(const ModifyTunnelAttributeResponseBody &) = default ;
    ModifyTunnelAttributeResponseBody& operator=(ModifyTunnelAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerGatewayId_ == nullptr
        && return this->enableDpd_ == nullptr && return this->enableNatTraversal_ == nullptr && return this->internetIp_ == nullptr && return this->remoteCaCertificate_ == nullptr && return this->requestId_ == nullptr
        && return this->role_ == nullptr && return this->state_ == nullptr && return this->tunnelBgpConfig_ == nullptr && return this->tunnelId_ == nullptr && return this->tunnelIkeConfig_ == nullptr
        && return this->tunnelIpsecConfig_ == nullptr && return this->zoneNo_ == nullptr; };
    // customerGatewayId Field Functions 
    bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
    void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
    inline string customerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
    inline ModifyTunnelAttributeResponseBody& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


    // enableDpd Field Functions 
    bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
    void deleteEnableDpd() { this->enableDpd_ = nullptr;};
    inline bool enableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, false) };
    inline ModifyTunnelAttributeResponseBody& setEnableDpd(bool enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


    // enableNatTraversal Field Functions 
    bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
    void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
    inline bool enableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, false) };
    inline ModifyTunnelAttributeResponseBody& setEnableNatTraversal(bool enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ModifyTunnelAttributeResponseBody& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // remoteCaCertificate Field Functions 
    bool hasRemoteCaCertificate() const { return this->remoteCaCertificate_ != nullptr;};
    void deleteRemoteCaCertificate() { this->remoteCaCertificate_ = nullptr;};
    inline string remoteCaCertificate() const { DARABONBA_PTR_GET_DEFAULT(remoteCaCertificate_, "") };
    inline ModifyTunnelAttributeResponseBody& setRemoteCaCertificate(string remoteCaCertificate) { DARABONBA_PTR_SET_VALUE(remoteCaCertificate_, remoteCaCertificate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyTunnelAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ModifyTunnelAttributeResponseBody& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ModifyTunnelAttributeResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tunnelBgpConfig Field Functions 
    bool hasTunnelBgpConfig() const { return this->tunnelBgpConfig_ != nullptr;};
    void deleteTunnelBgpConfig() { this->tunnelBgpConfig_ = nullptr;};
    inline const ModifyTunnelAttributeResponseBodyTunnelBgpConfig & tunnelBgpConfig() const { DARABONBA_PTR_GET_CONST(tunnelBgpConfig_, ModifyTunnelAttributeResponseBodyTunnelBgpConfig) };
    inline ModifyTunnelAttributeResponseBodyTunnelBgpConfig tunnelBgpConfig() { DARABONBA_PTR_GET(tunnelBgpConfig_, ModifyTunnelAttributeResponseBodyTunnelBgpConfig) };
    inline ModifyTunnelAttributeResponseBody& setTunnelBgpConfig(const ModifyTunnelAttributeResponseBodyTunnelBgpConfig & tunnelBgpConfig) { DARABONBA_PTR_SET_VALUE(tunnelBgpConfig_, tunnelBgpConfig) };
    inline ModifyTunnelAttributeResponseBody& setTunnelBgpConfig(ModifyTunnelAttributeResponseBodyTunnelBgpConfig && tunnelBgpConfig) { DARABONBA_PTR_SET_RVALUE(tunnelBgpConfig_, tunnelBgpConfig) };


    // tunnelId Field Functions 
    bool hasTunnelId() const { return this->tunnelId_ != nullptr;};
    void deleteTunnelId() { this->tunnelId_ = nullptr;};
    inline string tunnelId() const { DARABONBA_PTR_GET_DEFAULT(tunnelId_, "") };
    inline ModifyTunnelAttributeResponseBody& setTunnelId(string tunnelId) { DARABONBA_PTR_SET_VALUE(tunnelId_, tunnelId) };


    // tunnelIkeConfig Field Functions 
    bool hasTunnelIkeConfig() const { return this->tunnelIkeConfig_ != nullptr;};
    void deleteTunnelIkeConfig() { this->tunnelIkeConfig_ = nullptr;};
    inline const ModifyTunnelAttributeResponseBodyTunnelIkeConfig & tunnelIkeConfig() const { DARABONBA_PTR_GET_CONST(tunnelIkeConfig_, ModifyTunnelAttributeResponseBodyTunnelIkeConfig) };
    inline ModifyTunnelAttributeResponseBodyTunnelIkeConfig tunnelIkeConfig() { DARABONBA_PTR_GET(tunnelIkeConfig_, ModifyTunnelAttributeResponseBodyTunnelIkeConfig) };
    inline ModifyTunnelAttributeResponseBody& setTunnelIkeConfig(const ModifyTunnelAttributeResponseBodyTunnelIkeConfig & tunnelIkeConfig) { DARABONBA_PTR_SET_VALUE(tunnelIkeConfig_, tunnelIkeConfig) };
    inline ModifyTunnelAttributeResponseBody& setTunnelIkeConfig(ModifyTunnelAttributeResponseBodyTunnelIkeConfig && tunnelIkeConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIkeConfig_, tunnelIkeConfig) };


    // tunnelIpsecConfig Field Functions 
    bool hasTunnelIpsecConfig() const { return this->tunnelIpsecConfig_ != nullptr;};
    void deleteTunnelIpsecConfig() { this->tunnelIpsecConfig_ = nullptr;};
    inline const ModifyTunnelAttributeResponseBodyTunnelIpsecConfig & tunnelIpsecConfig() const { DARABONBA_PTR_GET_CONST(tunnelIpsecConfig_, ModifyTunnelAttributeResponseBodyTunnelIpsecConfig) };
    inline ModifyTunnelAttributeResponseBodyTunnelIpsecConfig tunnelIpsecConfig() { DARABONBA_PTR_GET(tunnelIpsecConfig_, ModifyTunnelAttributeResponseBodyTunnelIpsecConfig) };
    inline ModifyTunnelAttributeResponseBody& setTunnelIpsecConfig(const ModifyTunnelAttributeResponseBodyTunnelIpsecConfig & tunnelIpsecConfig) { DARABONBA_PTR_SET_VALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };
    inline ModifyTunnelAttributeResponseBody& setTunnelIpsecConfig(ModifyTunnelAttributeResponseBodyTunnelIpsecConfig && tunnelIpsecConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };


    // zoneNo Field Functions 
    bool hasZoneNo() const { return this->zoneNo_ != nullptr;};
    void deleteZoneNo() { this->zoneNo_ = nullptr;};
    inline string zoneNo() const { DARABONBA_PTR_GET_DEFAULT(zoneNo_, "") };
    inline ModifyTunnelAttributeResponseBody& setZoneNo(string zoneNo) { DARABONBA_PTR_SET_VALUE(zoneNo_, zoneNo) };


  protected:
    // The ID of the customer gateway associated with the customer gateway.
    std::shared_ptr<string> customerGatewayId_ = nullptr;
    // Indicates whether DPD is enabled. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<bool> enableDpd_ = nullptr;
    // Indicates whether NAT traversal is enabled. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<bool> enableNatTraversal_ = nullptr;
    // The tunnel IP address.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The peer CA certificate when a VPN gateway that uses an SM certificate is used to create the IPsec connection.
    std::shared_ptr<string> remoteCaCertificate_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The tunnel role. Valid values:
    // 
    // *   **master**
    // *   **slave**
    std::shared_ptr<string> role_ = nullptr;
    // The tunnel status. Valid values:
    // 
    // *   **active**
    // *   **updating**
    // *   **deleting**
    std::shared_ptr<string> state_ = nullptr;
    // The BGP configuration.
    std::shared_ptr<ModifyTunnelAttributeResponseBodyTunnelBgpConfig> tunnelBgpConfig_ = nullptr;
    // The tunnel ID.
    std::shared_ptr<string> tunnelId_ = nullptr;
    // The Phase 1 configuration.
    std::shared_ptr<ModifyTunnelAttributeResponseBodyTunnelIkeConfig> tunnelIkeConfig_ = nullptr;
    // The configurations of IPsec Phase 2.
    std::shared_ptr<ModifyTunnelAttributeResponseBodyTunnelIpsecConfig> tunnelIpsecConfig_ = nullptr;
    // The tunnel zone.
    std::shared_ptr<string> zoneNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
