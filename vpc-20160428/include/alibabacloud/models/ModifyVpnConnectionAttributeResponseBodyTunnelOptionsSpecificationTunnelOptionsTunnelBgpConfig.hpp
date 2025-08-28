// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPNCONNECTIONATTRIBUTERESPONSEBODYTUNNELOPTIONSSPECIFICATIONTUNNELOPTIONSTUNNELBGPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPNCONNECTIONATTRIBUTERESPONSEBODYTUNNELOPTIONSSPECIFICATIONTUNNELOPTIONSTUNNELBGPCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig& obj) { 
      DARABONBA_PTR_TO_JSON(LocalAsn, localAsn_);
      DARABONBA_PTR_TO_JSON(LocalBgpIp, localBgpIp_);
      DARABONBA_PTR_TO_JSON(PeerAsn, peerAsn_);
      DARABONBA_PTR_TO_JSON(PeerBgpIp, peerBgpIp_);
      DARABONBA_PTR_TO_JSON(TunnelCidr, tunnelCidr_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalAsn, localAsn_);
      DARABONBA_PTR_FROM_JSON(LocalBgpIp, localBgpIp_);
      DARABONBA_PTR_FROM_JSON(PeerAsn, peerAsn_);
      DARABONBA_PTR_FROM_JSON(PeerBgpIp, peerBgpIp_);
      DARABONBA_PTR_FROM_JSON(TunnelCidr, tunnelCidr_);
    };
    ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig() = default ;
    ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig(const ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig &) = default ;
    ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig(ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig &&) = default ;
    ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig() = default ;
    ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig& operator=(const ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig &) = default ;
    ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig& operator=(ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->localAsn_ != nullptr
        && this->localBgpIp_ != nullptr && this->peerAsn_ != nullptr && this->peerBgpIp_ != nullptr && this->tunnelCidr_ != nullptr; };
    // localAsn Field Functions 
    bool hasLocalAsn() const { return this->localAsn_ != nullptr;};
    void deleteLocalAsn() { this->localAsn_ = nullptr;};
    inline int64_t localAsn() const { DARABONBA_PTR_GET_DEFAULT(localAsn_, 0L) };
    inline ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig& setLocalAsn(int64_t localAsn) { DARABONBA_PTR_SET_VALUE(localAsn_, localAsn) };


    // localBgpIp Field Functions 
    bool hasLocalBgpIp() const { return this->localBgpIp_ != nullptr;};
    void deleteLocalBgpIp() { this->localBgpIp_ = nullptr;};
    inline string localBgpIp() const { DARABONBA_PTR_GET_DEFAULT(localBgpIp_, "") };
    inline ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig& setLocalBgpIp(string localBgpIp) { DARABONBA_PTR_SET_VALUE(localBgpIp_, localBgpIp) };


    // peerAsn Field Functions 
    bool hasPeerAsn() const { return this->peerAsn_ != nullptr;};
    void deletePeerAsn() { this->peerAsn_ = nullptr;};
    inline int64_t peerAsn() const { DARABONBA_PTR_GET_DEFAULT(peerAsn_, 0L) };
    inline ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig& setPeerAsn(int64_t peerAsn) { DARABONBA_PTR_SET_VALUE(peerAsn_, peerAsn) };


    // peerBgpIp Field Functions 
    bool hasPeerBgpIp() const { return this->peerBgpIp_ != nullptr;};
    void deletePeerBgpIp() { this->peerBgpIp_ = nullptr;};
    inline string peerBgpIp() const { DARABONBA_PTR_GET_DEFAULT(peerBgpIp_, "") };
    inline ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig& setPeerBgpIp(string peerBgpIp) { DARABONBA_PTR_SET_VALUE(peerBgpIp_, peerBgpIp) };


    // tunnelCidr Field Functions 
    bool hasTunnelCidr() const { return this->tunnelCidr_ != nullptr;};
    void deleteTunnelCidr() { this->tunnelCidr_ = nullptr;};
    inline string tunnelCidr() const { DARABONBA_PTR_GET_DEFAULT(tunnelCidr_, "") };
    inline ModifyVpnConnectionAttributeResponseBodyTunnelOptionsSpecificationTunnelOptionsTunnelBgpConfig& setTunnelCidr(string tunnelCidr) { DARABONBA_PTR_SET_VALUE(tunnelCidr_, tunnelCidr) };


  protected:
    // The ASN of the tunnel on the Alibaba Cloud side.
    std::shared_ptr<int64_t> localAsn_ = nullptr;
    // The BGP IP address of the tunnel on the Alibaba Cloud side.
    std::shared_ptr<string> localBgpIp_ = nullptr;
    // The ASN of the tunnel peer.
    std::shared_ptr<int64_t> peerAsn_ = nullptr;
    // The BGP IP address of the tunnel peer.
    std::shared_ptr<string> peerBgpIp_ = nullptr;
    // The BGP CIDR block of the tunnel.
    std::shared_ptr<string> tunnelCidr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
