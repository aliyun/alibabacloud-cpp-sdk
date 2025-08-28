// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADVPNCONNECTIONCONFIGRESPONSEBODYVPNCONNECTIONCONFIGBGPCONFIGSBGPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADVPNCONNECTIONCONFIGRESPONSEBODYVPNCONNECTIONCONFIGBGPCONFIGSBGPCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig& obj) { 
      DARABONBA_PTR_TO_JSON(LocalAsn, localAsn_);
      DARABONBA_PTR_TO_JSON(LocalBgpIp, localBgpIp_);
      DARABONBA_PTR_TO_JSON(PeerAsn, peerAsn_);
      DARABONBA_PTR_TO_JSON(PeerBgpIp, peerBgpIp_);
      DARABONBA_PTR_TO_JSON(TunnelCidr, tunnelCidr_);
      DARABONBA_PTR_TO_JSON(TunnelId, tunnelId_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalAsn, localAsn_);
      DARABONBA_PTR_FROM_JSON(LocalBgpIp, localBgpIp_);
      DARABONBA_PTR_FROM_JSON(PeerAsn, peerAsn_);
      DARABONBA_PTR_FROM_JSON(PeerBgpIp, peerBgpIp_);
      DARABONBA_PTR_FROM_JSON(TunnelCidr, tunnelCidr_);
      DARABONBA_PTR_FROM_JSON(TunnelId, tunnelId_);
    };
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig() = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig(const DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig &) = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig(DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig &&) = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig() = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig& operator=(const DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig &) = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig& operator=(DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->localAsn_ != nullptr
        && this->localBgpIp_ != nullptr && this->peerAsn_ != nullptr && this->peerBgpIp_ != nullptr && this->tunnelCidr_ != nullptr && this->tunnelId_ != nullptr; };
    // localAsn Field Functions 
    bool hasLocalAsn() const { return this->localAsn_ != nullptr;};
    void deleteLocalAsn() { this->localAsn_ = nullptr;};
    inline string localAsn() const { DARABONBA_PTR_GET_DEFAULT(localAsn_, "") };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig& setLocalAsn(string localAsn) { DARABONBA_PTR_SET_VALUE(localAsn_, localAsn) };


    // localBgpIp Field Functions 
    bool hasLocalBgpIp() const { return this->localBgpIp_ != nullptr;};
    void deleteLocalBgpIp() { this->localBgpIp_ = nullptr;};
    inline string localBgpIp() const { DARABONBA_PTR_GET_DEFAULT(localBgpIp_, "") };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig& setLocalBgpIp(string localBgpIp) { DARABONBA_PTR_SET_VALUE(localBgpIp_, localBgpIp) };


    // peerAsn Field Functions 
    bool hasPeerAsn() const { return this->peerAsn_ != nullptr;};
    void deletePeerAsn() { this->peerAsn_ = nullptr;};
    inline string peerAsn() const { DARABONBA_PTR_GET_DEFAULT(peerAsn_, "") };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig& setPeerAsn(string peerAsn) { DARABONBA_PTR_SET_VALUE(peerAsn_, peerAsn) };


    // peerBgpIp Field Functions 
    bool hasPeerBgpIp() const { return this->peerBgpIp_ != nullptr;};
    void deletePeerBgpIp() { this->peerBgpIp_ = nullptr;};
    inline string peerBgpIp() const { DARABONBA_PTR_GET_DEFAULT(peerBgpIp_, "") };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig& setPeerBgpIp(string peerBgpIp) { DARABONBA_PTR_SET_VALUE(peerBgpIp_, peerBgpIp) };


    // tunnelCidr Field Functions 
    bool hasTunnelCidr() const { return this->tunnelCidr_ != nullptr;};
    void deleteTunnelCidr() { this->tunnelCidr_ = nullptr;};
    inline string tunnelCidr() const { DARABONBA_PTR_GET_DEFAULT(tunnelCidr_, "") };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig& setTunnelCidr(string tunnelCidr) { DARABONBA_PTR_SET_VALUE(tunnelCidr_, tunnelCidr) };


    // tunnelId Field Functions 
    bool hasTunnelId() const { return this->tunnelId_ != nullptr;};
    void deleteTunnelId() { this->tunnelId_ = nullptr;};
    inline string tunnelId() const { DARABONBA_PTR_GET_DEFAULT(tunnelId_, "") };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig& setTunnelId(string tunnelId) { DARABONBA_PTR_SET_VALUE(tunnelId_, tunnelId) };


  protected:
    std::shared_ptr<string> localAsn_ = nullptr;
    std::shared_ptr<string> localBgpIp_ = nullptr;
    std::shared_ptr<string> peerAsn_ = nullptr;
    std::shared_ptr<string> peerBgpIp_ = nullptr;
    std::shared_ptr<string> tunnelCidr_ = nullptr;
    std::shared_ptr<string> tunnelId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
