// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONSRESPONSEBODYVPNCONNECTIONSVPNCONNECTIONVPNBGPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONSRESPONSEBODYVPNCONNECTIONSVPNCONNECTIONVPNBGPCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
      DARABONBA_PTR_TO_JSON(LocalAsn, localAsn_);
      DARABONBA_PTR_TO_JSON(LocalBgpIp, localBgpIp_);
      DARABONBA_PTR_TO_JSON(PeerAsn, peerAsn_);
      DARABONBA_PTR_TO_JSON(PeerBgpIp, peerBgpIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TunnelCidr, tunnelCidr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
      DARABONBA_PTR_FROM_JSON(LocalAsn, localAsn_);
      DARABONBA_PTR_FROM_JSON(LocalBgpIp, localBgpIp_);
      DARABONBA_PTR_FROM_JSON(PeerAsn, peerAsn_);
      DARABONBA_PTR_FROM_JSON(PeerBgpIp, peerBgpIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TunnelCidr, tunnelCidr_);
    };
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig() = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig(const DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig &) = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig(DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig &&) = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig() = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig& operator=(const DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig &) = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig& operator=(DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authKey_ == nullptr
        && return this->localAsn_ == nullptr && return this->localBgpIp_ == nullptr && return this->peerAsn_ == nullptr && return this->peerBgpIp_ == nullptr && return this->status_ == nullptr
        && return this->tunnelCidr_ == nullptr; };
    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string authKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // localAsn Field Functions 
    bool hasLocalAsn() const { return this->localAsn_ != nullptr;};
    void deleteLocalAsn() { this->localAsn_ = nullptr;};
    inline int64_t localAsn() const { DARABONBA_PTR_GET_DEFAULT(localAsn_, 0L) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig& setLocalAsn(int64_t localAsn) { DARABONBA_PTR_SET_VALUE(localAsn_, localAsn) };


    // localBgpIp Field Functions 
    bool hasLocalBgpIp() const { return this->localBgpIp_ != nullptr;};
    void deleteLocalBgpIp() { this->localBgpIp_ = nullptr;};
    inline string localBgpIp() const { DARABONBA_PTR_GET_DEFAULT(localBgpIp_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig& setLocalBgpIp(string localBgpIp) { DARABONBA_PTR_SET_VALUE(localBgpIp_, localBgpIp) };


    // peerAsn Field Functions 
    bool hasPeerAsn() const { return this->peerAsn_ != nullptr;};
    void deletePeerAsn() { this->peerAsn_ = nullptr;};
    inline int64_t peerAsn() const { DARABONBA_PTR_GET_DEFAULT(peerAsn_, 0L) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig& setPeerAsn(int64_t peerAsn) { DARABONBA_PTR_SET_VALUE(peerAsn_, peerAsn) };


    // peerBgpIp Field Functions 
    bool hasPeerBgpIp() const { return this->peerBgpIp_ != nullptr;};
    void deletePeerBgpIp() { this->peerBgpIp_ = nullptr;};
    inline string peerBgpIp() const { DARABONBA_PTR_GET_DEFAULT(peerBgpIp_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig& setPeerBgpIp(string peerBgpIp) { DARABONBA_PTR_SET_VALUE(peerBgpIp_, peerBgpIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tunnelCidr Field Functions 
    bool hasTunnelCidr() const { return this->tunnelCidr_ != nullptr;};
    void deleteTunnelCidr() { this->tunnelCidr_ = nullptr;};
    inline string tunnelCidr() const { DARABONBA_PTR_GET_DEFAULT(tunnelCidr_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig& setTunnelCidr(string tunnelCidr) { DARABONBA_PTR_SET_VALUE(tunnelCidr_, tunnelCidr) };


  protected:
    // The authentication key of the BGP routing protocol.
    std::shared_ptr<string> authKey_ = nullptr;
    // The ASN on the Alibaba Cloud side.
    std::shared_ptr<int64_t> localAsn_ = nullptr;
    // The BGP IP address on the Alibaba Cloud side.
    std::shared_ptr<string> localBgpIp_ = nullptr;
    // The ASN of the peer.
    std::shared_ptr<int64_t> peerAsn_ = nullptr;
    // The BGP IP address of the peer.
    std::shared_ptr<string> peerBgpIp_ = nullptr;
    // The negotiation state of the BGP routing protocol. Valid values:
    // 
    // *   **success**
    // *   **false**
    std::shared_ptr<string> status_ = nullptr;
    // The BGP CIDR block of the IPsec-VPN connection. The CIDR block falls within 169.254.0.0/16. The subnet mask of the CIDR block must be 30 bits in length.
    std::shared_ptr<string> tunnelCidr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
