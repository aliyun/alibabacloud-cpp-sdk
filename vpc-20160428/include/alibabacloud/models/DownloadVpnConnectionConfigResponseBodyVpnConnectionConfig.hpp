// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADVPNCONNECTIONCONFIGRESPONSEBODYVPNCONNECTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADVPNCONNECTIONCONFIGRESPONSEBODYVPNCONNECTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs.hpp>
#include <alibabacloud/models/DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigIkeConfig.hpp>
#include <alibabacloud/models/DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigIpsecConfig.hpp>
#include <alibabacloud/models/DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BgpConfigs, bgpConfigs_);
      DARABONBA_PTR_TO_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_TO_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_TO_JSON(Local, local_);
      DARABONBA_PTR_TO_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_TO_JSON(Remote, remote_);
      DARABONBA_PTR_TO_JSON(RemoteSubnet, remoteSubnet_);
      DARABONBA_PTR_TO_JSON(TunnelsConfig, tunnelsConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BgpConfigs, bgpConfigs_);
      DARABONBA_PTR_FROM_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_FROM_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_FROM_JSON(Local, local_);
      DARABONBA_PTR_FROM_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_FROM_JSON(Remote, remote_);
      DARABONBA_PTR_FROM_JSON(RemoteSubnet, remoteSubnet_);
      DARABONBA_PTR_FROM_JSON(TunnelsConfig, tunnelsConfig_);
    };
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig() = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig(const DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig &) = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig(DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig &&) = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig() = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig& operator=(const DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig &) = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig& operator=(DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bgpConfigs_ == nullptr
        && return this->ikeConfig_ == nullptr && return this->ipsecConfig_ == nullptr && return this->local_ == nullptr && return this->localSubnet_ == nullptr && return this->remote_ == nullptr
        && return this->remoteSubnet_ == nullptr && return this->tunnelsConfig_ == nullptr; };
    // bgpConfigs Field Functions 
    bool hasBgpConfigs() const { return this->bgpConfigs_ != nullptr;};
    void deleteBgpConfigs() { this->bgpConfigs_ = nullptr;};
    inline const Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs & bgpConfigs() const { DARABONBA_PTR_GET_CONST(bgpConfigs_, Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs) };
    inline Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs bgpConfigs() { DARABONBA_PTR_GET(bgpConfigs_, Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs) };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig& setBgpConfigs(const Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs & bgpConfigs) { DARABONBA_PTR_SET_VALUE(bgpConfigs_, bgpConfigs) };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig& setBgpConfigs(Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs && bgpConfigs) { DARABONBA_PTR_SET_RVALUE(bgpConfigs_, bgpConfigs) };


    // ikeConfig Field Functions 
    bool hasIkeConfig() const { return this->ikeConfig_ != nullptr;};
    void deleteIkeConfig() { this->ikeConfig_ = nullptr;};
    inline const Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigIkeConfig & ikeConfig() const { DARABONBA_PTR_GET_CONST(ikeConfig_, Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigIkeConfig) };
    inline Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigIkeConfig ikeConfig() { DARABONBA_PTR_GET(ikeConfig_, Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigIkeConfig) };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig& setIkeConfig(const Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigIkeConfig & ikeConfig) { DARABONBA_PTR_SET_VALUE(ikeConfig_, ikeConfig) };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig& setIkeConfig(Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigIkeConfig && ikeConfig) { DARABONBA_PTR_SET_RVALUE(ikeConfig_, ikeConfig) };


    // ipsecConfig Field Functions 
    bool hasIpsecConfig() const { return this->ipsecConfig_ != nullptr;};
    void deleteIpsecConfig() { this->ipsecConfig_ = nullptr;};
    inline const Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigIpsecConfig & ipsecConfig() const { DARABONBA_PTR_GET_CONST(ipsecConfig_, Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigIpsecConfig) };
    inline Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigIpsecConfig ipsecConfig() { DARABONBA_PTR_GET(ipsecConfig_, Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigIpsecConfig) };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig& setIpsecConfig(const Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigIpsecConfig & ipsecConfig) { DARABONBA_PTR_SET_VALUE(ipsecConfig_, ipsecConfig) };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig& setIpsecConfig(Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigIpsecConfig && ipsecConfig) { DARABONBA_PTR_SET_RVALUE(ipsecConfig_, ipsecConfig) };


    // local Field Functions 
    bool hasLocal() const { return this->local_ != nullptr;};
    void deleteLocal() { this->local_ = nullptr;};
    inline string local() const { DARABONBA_PTR_GET_DEFAULT(local_, "") };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig& setLocal(string local) { DARABONBA_PTR_SET_VALUE(local_, local) };


    // localSubnet Field Functions 
    bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
    void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
    inline string localSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


    // remote Field Functions 
    bool hasRemote() const { return this->remote_ != nullptr;};
    void deleteRemote() { this->remote_ = nullptr;};
    inline string remote() const { DARABONBA_PTR_GET_DEFAULT(remote_, "") };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig& setRemote(string remote) { DARABONBA_PTR_SET_VALUE(remote_, remote) };


    // remoteSubnet Field Functions 
    bool hasRemoteSubnet() const { return this->remoteSubnet_ != nullptr;};
    void deleteRemoteSubnet() { this->remoteSubnet_ = nullptr;};
    inline string remoteSubnet() const { DARABONBA_PTR_GET_DEFAULT(remoteSubnet_, "") };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig& setRemoteSubnet(string remoteSubnet) { DARABONBA_PTR_SET_VALUE(remoteSubnet_, remoteSubnet) };


    // tunnelsConfig Field Functions 
    bool hasTunnelsConfig() const { return this->tunnelsConfig_ != nullptr;};
    void deleteTunnelsConfig() { this->tunnelsConfig_ = nullptr;};
    inline const Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig & tunnelsConfig() const { DARABONBA_PTR_GET_CONST(tunnelsConfig_, Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig) };
    inline Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig tunnelsConfig() { DARABONBA_PTR_GET(tunnelsConfig_, Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig) };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig& setTunnelsConfig(const Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig & tunnelsConfig) { DARABONBA_PTR_SET_VALUE(tunnelsConfig_, tunnelsConfig) };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig& setTunnelsConfig(Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig && tunnelsConfig) { DARABONBA_PTR_SET_RVALUE(tunnelsConfig_, tunnelsConfig) };


  protected:
    std::shared_ptr<Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs> bgpConfigs_ = nullptr;
    // The configurations of Phase 1 negotiations.
    std::shared_ptr<Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigIkeConfig> ikeConfig_ = nullptr;
    // The configurations of Phase 2 negotiations.
    std::shared_ptr<Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigIpsecConfig> ipsecConfig_ = nullptr;
    // The identifier of the customer gateway.
    std::shared_ptr<string> local_ = nullptr;
    // The CIDR block on the data center side.
    std::shared_ptr<string> localSubnet_ = nullptr;
    // The identifier of the VPN gateway.
    std::shared_ptr<string> remote_ = nullptr;
    // The CIDR block on the virtual private cloud (VPC) side.
    std::shared_ptr<string> remoteSubnet_ = nullptr;
    // The tunnel configurations of the peer gateway device.
    // 
    // The parameters in **TunnelsConfig** are returned only when the IPsec-VPN connection supports the dual-tunnel mode.
    std::shared_ptr<Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig> tunnelsConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
