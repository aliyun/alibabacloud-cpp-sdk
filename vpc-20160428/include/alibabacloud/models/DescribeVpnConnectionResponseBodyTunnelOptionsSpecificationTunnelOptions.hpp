// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONRESPONSEBODYTUNNELOPTIONSSPECIFICATIONTUNNELOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONRESPONSEBODYTUNNELOPTIONSSPECIFICATIONTUNNELOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig.hpp>
#include <alibabacloud/models/DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelIkeConfig.hpp>
#include <alibabacloud/models/DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelIpsecConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_TO_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_TO_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(RemoteCaCertificate, remoteCaCertificate_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TunnelBgpConfig, tunnelBgpConfig_);
      DARABONBA_PTR_TO_JSON(TunnelId, tunnelId_);
      DARABONBA_PTR_TO_JSON(TunnelIkeConfig, tunnelIkeConfig_);
      DARABONBA_PTR_TO_JSON(TunnelIndex, tunnelIndex_);
      DARABONBA_PTR_TO_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
      DARABONBA_PTR_TO_JSON(ZoneNo, zoneNo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_FROM_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_FROM_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(RemoteCaCertificate, remoteCaCertificate_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TunnelBgpConfig, tunnelBgpConfig_);
      DARABONBA_PTR_FROM_JSON(TunnelId, tunnelId_);
      DARABONBA_PTR_FROM_JSON(TunnelIkeConfig, tunnelIkeConfig_);
      DARABONBA_PTR_FROM_JSON(TunnelIndex, tunnelIndex_);
      DARABONBA_PTR_FROM_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
      DARABONBA_PTR_FROM_JSON(ZoneNo, zoneNo_);
    };
    DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions() = default ;
    DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions(const DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions &) = default ;
    DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions(DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions &&) = default ;
    DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions() = default ;
    DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& operator=(const DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions &) = default ;
    DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& operator=(DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customerGatewayId_ != nullptr
        && this->enableDpd_ != nullptr && this->enableNatTraversal_ != nullptr && this->internetIp_ != nullptr && this->remoteCaCertificate_ != nullptr && this->role_ != nullptr
        && this->state_ != nullptr && this->status_ != nullptr && this->tunnelBgpConfig_ != nullptr && this->tunnelId_ != nullptr && this->tunnelIkeConfig_ != nullptr
        && this->tunnelIndex_ != nullptr && this->tunnelIpsecConfig_ != nullptr && this->zoneNo_ != nullptr; };
    // customerGatewayId Field Functions 
    bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
    void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
    inline string customerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
    inline DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


    // enableDpd Field Functions 
    bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
    void deleteEnableDpd() { this->enableDpd_ = nullptr;};
    inline string enableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, "") };
    inline DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& setEnableDpd(string enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


    // enableNatTraversal Field Functions 
    bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
    void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
    inline string enableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, "") };
    inline DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& setEnableNatTraversal(string enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // remoteCaCertificate Field Functions 
    bool hasRemoteCaCertificate() const { return this->remoteCaCertificate_ != nullptr;};
    void deleteRemoteCaCertificate() { this->remoteCaCertificate_ = nullptr;};
    inline string remoteCaCertificate() const { DARABONBA_PTR_GET_DEFAULT(remoteCaCertificate_, "") };
    inline DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& setRemoteCaCertificate(string remoteCaCertificate) { DARABONBA_PTR_SET_VALUE(remoteCaCertificate_, remoteCaCertificate) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tunnelBgpConfig Field Functions 
    bool hasTunnelBgpConfig() const { return this->tunnelBgpConfig_ != nullptr;};
    void deleteTunnelBgpConfig() { this->tunnelBgpConfig_ = nullptr;};
    inline const Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig & tunnelBgpConfig() const { DARABONBA_PTR_GET_CONST(tunnelBgpConfig_, Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig) };
    inline Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig tunnelBgpConfig() { DARABONBA_PTR_GET(tunnelBgpConfig_, Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig) };
    inline DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& setTunnelBgpConfig(const Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig & tunnelBgpConfig) { DARABONBA_PTR_SET_VALUE(tunnelBgpConfig_, tunnelBgpConfig) };
    inline DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& setTunnelBgpConfig(Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig && tunnelBgpConfig) { DARABONBA_PTR_SET_RVALUE(tunnelBgpConfig_, tunnelBgpConfig) };


    // tunnelId Field Functions 
    bool hasTunnelId() const { return this->tunnelId_ != nullptr;};
    void deleteTunnelId() { this->tunnelId_ = nullptr;};
    inline string tunnelId() const { DARABONBA_PTR_GET_DEFAULT(tunnelId_, "") };
    inline DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& setTunnelId(string tunnelId) { DARABONBA_PTR_SET_VALUE(tunnelId_, tunnelId) };


    // tunnelIkeConfig Field Functions 
    bool hasTunnelIkeConfig() const { return this->tunnelIkeConfig_ != nullptr;};
    void deleteTunnelIkeConfig() { this->tunnelIkeConfig_ = nullptr;};
    inline const Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelIkeConfig & tunnelIkeConfig() const { DARABONBA_PTR_GET_CONST(tunnelIkeConfig_, Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelIkeConfig) };
    inline Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelIkeConfig tunnelIkeConfig() { DARABONBA_PTR_GET(tunnelIkeConfig_, Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelIkeConfig) };
    inline DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& setTunnelIkeConfig(const Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelIkeConfig & tunnelIkeConfig) { DARABONBA_PTR_SET_VALUE(tunnelIkeConfig_, tunnelIkeConfig) };
    inline DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& setTunnelIkeConfig(Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelIkeConfig && tunnelIkeConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIkeConfig_, tunnelIkeConfig) };


    // tunnelIndex Field Functions 
    bool hasTunnelIndex() const { return this->tunnelIndex_ != nullptr;};
    void deleteTunnelIndex() { this->tunnelIndex_ = nullptr;};
    inline int32_t tunnelIndex() const { DARABONBA_PTR_GET_DEFAULT(tunnelIndex_, 0) };
    inline DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& setTunnelIndex(int32_t tunnelIndex) { DARABONBA_PTR_SET_VALUE(tunnelIndex_, tunnelIndex) };


    // tunnelIpsecConfig Field Functions 
    bool hasTunnelIpsecConfig() const { return this->tunnelIpsecConfig_ != nullptr;};
    void deleteTunnelIpsecConfig() { this->tunnelIpsecConfig_ = nullptr;};
    inline const Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelIpsecConfig & tunnelIpsecConfig() const { DARABONBA_PTR_GET_CONST(tunnelIpsecConfig_, Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelIpsecConfig) };
    inline Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelIpsecConfig tunnelIpsecConfig() { DARABONBA_PTR_GET(tunnelIpsecConfig_, Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelIpsecConfig) };
    inline DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& setTunnelIpsecConfig(const Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelIpsecConfig & tunnelIpsecConfig) { DARABONBA_PTR_SET_VALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };
    inline DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& setTunnelIpsecConfig(Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelIpsecConfig && tunnelIpsecConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };


    // zoneNo Field Functions 
    bool hasZoneNo() const { return this->zoneNo_ != nullptr;};
    void deleteZoneNo() { this->zoneNo_ = nullptr;};
    inline string zoneNo() const { DARABONBA_PTR_GET_DEFAULT(zoneNo_, "") };
    inline DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions& setZoneNo(string zoneNo) { DARABONBA_PTR_SET_VALUE(zoneNo_, zoneNo) };


  protected:
    // The ID of the customer gateway associated with the tunnel.
    std::shared_ptr<string> customerGatewayId_ = nullptr;
    // Indicates whether the DPD feature is enabled for the tunnel. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<string> enableDpd_ = nullptr;
    // Indicates whether NAT traversal is enabled for the tunnel. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<string> enableNatTraversal_ = nullptr;
    // The tunnel IP address.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The CA certificate of the tunnel peer.
    // 
    // This parameter is returned only if the VPN gateway is of the ShangMi (SM) type.
    std::shared_ptr<string> remoteCaCertificate_ = nullptr;
    // The tunnel role. Valid values:
    // 
    // *   **master**: The tunnel is an active tunnel.
    // *   **slave**: The tunnel is a standby tunnel.
    std::shared_ptr<string> role_ = nullptr;
    // The tunnel status. Valid values:
    // 
    // *   **active**
    // *   **updating**
    // *   **deleting**
    std::shared_ptr<string> state_ = nullptr;
    // The state of the IPsec-VPN connection. Valid values:
    // 
    // *   **ike_sa_not_established**: Phase 1 negotiations failed.
    // *   **ike_sa_established**: Phase 1 negotiations succeeded.
    // *   **ipsec_sa_not_established**: Phase 2 negotiations failed.
    // *   **ipsec_sa_established**: Phase 2 negotiations succeeded.
    std::shared_ptr<string> status_ = nullptr;
    // The BGP configurations.
    std::shared_ptr<Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig> tunnelBgpConfig_ = nullptr;
    // The tunnel ID.
    std::shared_ptr<string> tunnelId_ = nullptr;
    // The configuration of Phase 1 negotiations.
    std::shared_ptr<Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelIkeConfig> tunnelIkeConfig_ = nullptr;
    // The order in which the tunnel is created.
    // 
    // *   **1**: Tunnel 1.
    // *   **2**: Tunnel 2.
    // 
    // >  This parameter is returned only if the IPsec-VPN connection is associated with a transit router.
    std::shared_ptr<int32_t> tunnelIndex_ = nullptr;
    // The configurations of Phase 2 negotiations.
    std::shared_ptr<Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelIpsecConfig> tunnelIpsecConfig_ = nullptr;
    // The zone where the tunnel is deployed.
    // 
    // You can call [DescribeZones](https://help.aliyun.com/document_detail/36064.html) to query zone IDs.
    std::shared_ptr<string> zoneNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
