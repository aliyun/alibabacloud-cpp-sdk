// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPNCONNECTIONATTRIBUTERESPONSEBODYVPNBGPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPNCONNECTIONATTRIBUTERESPONSEBODYVPNBGPCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EnableBgp, enableBgp_);
      DARABONBA_PTR_TO_JSON(LocalAsn, localAsn_);
      DARABONBA_PTR_TO_JSON(LocalBgpIp, localBgpIp_);
      DARABONBA_PTR_TO_JSON(PeerAsn, peerAsn_);
      DARABONBA_PTR_TO_JSON(PeerBgpIp, peerBgpIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TunnelCidr, tunnelCidr_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableBgp, enableBgp_);
      DARABONBA_PTR_FROM_JSON(LocalAsn, localAsn_);
      DARABONBA_PTR_FROM_JSON(LocalBgpIp, localBgpIp_);
      DARABONBA_PTR_FROM_JSON(PeerAsn, peerAsn_);
      DARABONBA_PTR_FROM_JSON(PeerBgpIp, peerBgpIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TunnelCidr, tunnelCidr_);
    };
    ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig() = default ;
    ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig(const ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig &) = default ;
    ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig(ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig &&) = default ;
    ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig() = default ;
    ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig& operator=(const ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig &) = default ;
    ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig& operator=(ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableBgp_ != nullptr
        && this->localAsn_ != nullptr && this->localBgpIp_ != nullptr && this->peerAsn_ != nullptr && this->peerBgpIp_ != nullptr && this->status_ != nullptr
        && this->tunnelCidr_ != nullptr; };
    // enableBgp Field Functions 
    bool hasEnableBgp() const { return this->enableBgp_ != nullptr;};
    void deleteEnableBgp() { this->enableBgp_ = nullptr;};
    inline string enableBgp() const { DARABONBA_PTR_GET_DEFAULT(enableBgp_, "") };
    inline ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig& setEnableBgp(string enableBgp) { DARABONBA_PTR_SET_VALUE(enableBgp_, enableBgp) };


    // localAsn Field Functions 
    bool hasLocalAsn() const { return this->localAsn_ != nullptr;};
    void deleteLocalAsn() { this->localAsn_ = nullptr;};
    inline int32_t localAsn() const { DARABONBA_PTR_GET_DEFAULT(localAsn_, 0) };
    inline ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig& setLocalAsn(int32_t localAsn) { DARABONBA_PTR_SET_VALUE(localAsn_, localAsn) };


    // localBgpIp Field Functions 
    bool hasLocalBgpIp() const { return this->localBgpIp_ != nullptr;};
    void deleteLocalBgpIp() { this->localBgpIp_ = nullptr;};
    inline string localBgpIp() const { DARABONBA_PTR_GET_DEFAULT(localBgpIp_, "") };
    inline ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig& setLocalBgpIp(string localBgpIp) { DARABONBA_PTR_SET_VALUE(localBgpIp_, localBgpIp) };


    // peerAsn Field Functions 
    bool hasPeerAsn() const { return this->peerAsn_ != nullptr;};
    void deletePeerAsn() { this->peerAsn_ = nullptr;};
    inline int32_t peerAsn() const { DARABONBA_PTR_GET_DEFAULT(peerAsn_, 0) };
    inline ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig& setPeerAsn(int32_t peerAsn) { DARABONBA_PTR_SET_VALUE(peerAsn_, peerAsn) };


    // peerBgpIp Field Functions 
    bool hasPeerBgpIp() const { return this->peerBgpIp_ != nullptr;};
    void deletePeerBgpIp() { this->peerBgpIp_ = nullptr;};
    inline string peerBgpIp() const { DARABONBA_PTR_GET_DEFAULT(peerBgpIp_, "") };
    inline ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig& setPeerBgpIp(string peerBgpIp) { DARABONBA_PTR_SET_VALUE(peerBgpIp_, peerBgpIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tunnelCidr Field Functions 
    bool hasTunnelCidr() const { return this->tunnelCidr_ != nullptr;};
    void deleteTunnelCidr() { this->tunnelCidr_ = nullptr;};
    inline string tunnelCidr() const { DARABONBA_PTR_GET_DEFAULT(tunnelCidr_, "") };
    inline ModifyVpnConnectionAttributeResponseBodyVpnBgpConfig& setTunnelCidr(string tunnelCidr) { DARABONBA_PTR_SET_VALUE(tunnelCidr_, tunnelCidr) };


  protected:
    // Indicates whether BGP is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> enableBgp_ = nullptr;
    // The ASN on the Alibaba Cloud side.
    std::shared_ptr<int32_t> localAsn_ = nullptr;
    // The BGP IP address on the Alibaba Cloud side.
    std::shared_ptr<string> localBgpIp_ = nullptr;
    // The ASN on the data center side.
    std::shared_ptr<int32_t> peerAsn_ = nullptr;
    // The BGP IP address of the data center.
    std::shared_ptr<string> peerBgpIp_ = nullptr;
    // The negotiation state of BGP. Valid values:
    // 
    // *   **success**: normal
    // *   **false**: abnormal
    std::shared_ptr<string> status_ = nullptr;
    // The BGP CIDR block of the IPsec-VPN connection.
    std::shared_ptr<string> tunnelCidr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
