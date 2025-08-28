// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONSRESPONSEBODYVPNCONNECTIONSVPNCONNECTIONTUNNELOPTIONSSPECIFICATIONTUNNELOPTIONSTUNNELBGPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONSRESPONSEBODYVPNCONNECTIONSVPNCONNECTIONTUNNELOPTIONSSPECIFICATIONTUNNELOPTIONSTUNNELBGPCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BgpStatus, bgpStatus_);
      DARABONBA_PTR_TO_JSON(LocalAsn, localAsn_);
      DARABONBA_PTR_TO_JSON(LocalBgpIp, localBgpIp_);
      DARABONBA_PTR_TO_JSON(PeerAsn, peerAsn_);
      DARABONBA_PTR_TO_JSON(PeerBgpIp, peerBgpIp_);
      DARABONBA_PTR_TO_JSON(TunnelCidr, tunnelCidr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BgpStatus, bgpStatus_);
      DARABONBA_PTR_FROM_JSON(LocalAsn, localAsn_);
      DARABONBA_PTR_FROM_JSON(LocalBgpIp, localBgpIp_);
      DARABONBA_PTR_FROM_JSON(PeerAsn, peerAsn_);
      DARABONBA_PTR_FROM_JSON(PeerBgpIp, peerBgpIp_);
      DARABONBA_PTR_FROM_JSON(TunnelCidr, tunnelCidr_);
    };
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig() = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig(const DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig &) = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig(DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig &&) = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig() = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig& operator=(const DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig &) = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig& operator=(DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bgpStatus_ != nullptr
        && this->localAsn_ != nullptr && this->localBgpIp_ != nullptr && this->peerAsn_ != nullptr && this->peerBgpIp_ != nullptr && this->tunnelCidr_ != nullptr; };
    // bgpStatus Field Functions 
    bool hasBgpStatus() const { return this->bgpStatus_ != nullptr;};
    void deleteBgpStatus() { this->bgpStatus_ = nullptr;};
    inline string bgpStatus() const { DARABONBA_PTR_GET_DEFAULT(bgpStatus_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig& setBgpStatus(string bgpStatus) { DARABONBA_PTR_SET_VALUE(bgpStatus_, bgpStatus) };


    // localAsn Field Functions 
    bool hasLocalAsn() const { return this->localAsn_ != nullptr;};
    void deleteLocalAsn() { this->localAsn_ = nullptr;};
    inline string localAsn() const { DARABONBA_PTR_GET_DEFAULT(localAsn_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig& setLocalAsn(string localAsn) { DARABONBA_PTR_SET_VALUE(localAsn_, localAsn) };


    // localBgpIp Field Functions 
    bool hasLocalBgpIp() const { return this->localBgpIp_ != nullptr;};
    void deleteLocalBgpIp() { this->localBgpIp_ = nullptr;};
    inline string localBgpIp() const { DARABONBA_PTR_GET_DEFAULT(localBgpIp_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig& setLocalBgpIp(string localBgpIp) { DARABONBA_PTR_SET_VALUE(localBgpIp_, localBgpIp) };


    // peerAsn Field Functions 
    bool hasPeerAsn() const { return this->peerAsn_ != nullptr;};
    void deletePeerAsn() { this->peerAsn_ = nullptr;};
    inline string peerAsn() const { DARABONBA_PTR_GET_DEFAULT(peerAsn_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig& setPeerAsn(string peerAsn) { DARABONBA_PTR_SET_VALUE(peerAsn_, peerAsn) };


    // peerBgpIp Field Functions 
    bool hasPeerBgpIp() const { return this->peerBgpIp_ != nullptr;};
    void deletePeerBgpIp() { this->peerBgpIp_ = nullptr;};
    inline string peerBgpIp() const { DARABONBA_PTR_GET_DEFAULT(peerBgpIp_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig& setPeerBgpIp(string peerBgpIp) { DARABONBA_PTR_SET_VALUE(peerBgpIp_, peerBgpIp) };


    // tunnelCidr Field Functions 
    bool hasTunnelCidr() const { return this->tunnelCidr_ != nullptr;};
    void deleteTunnelCidr() { this->tunnelCidr_ = nullptr;};
    inline string tunnelCidr() const { DARABONBA_PTR_GET_DEFAULT(tunnelCidr_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig& setTunnelCidr(string tunnelCidr) { DARABONBA_PTR_SET_VALUE(tunnelCidr_, tunnelCidr) };


  protected:
    // The negotiation state of BGP. Valid values:
    // 
    // *   **success**
    // *   **false**
    std::shared_ptr<string> bgpStatus_ = nullptr;
    // The ASN on the Alibaba Cloud side.
    std::shared_ptr<string> localAsn_ = nullptr;
    // The BGP address on the Alibaba Cloud side.
    std::shared_ptr<string> localBgpIp_ = nullptr;
    // The ASN of the tunnel peer.
    std::shared_ptr<string> peerAsn_ = nullptr;
    // The BGP IP address of the tunnel peer.
    std::shared_ptr<string> peerBgpIp_ = nullptr;
    // The BGP CIDR block of the tunnel.
    std::shared_ptr<string> tunnelCidr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
