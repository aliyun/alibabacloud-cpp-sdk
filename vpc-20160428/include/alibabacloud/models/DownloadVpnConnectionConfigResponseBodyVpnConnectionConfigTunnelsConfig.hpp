// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADVPNCONNECTIONCONFIGRESPONSEBODYVPNCONNECTIONCONFIGTUNNELSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADVPNCONNECTIONCONFIGRESPONSEBODYVPNCONNECTIONCONFIGTUNNELSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfigTunnelConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(TunnelConfig, tunnelConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(TunnelConfig, tunnelConfig_);
    };
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig() = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig(const DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig &) = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig(DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig &&) = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig() = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig& operator=(const DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig &) = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig& operator=(DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tunnelConfig_ != nullptr; };
    // tunnelConfig Field Functions 
    bool hasTunnelConfig() const { return this->tunnelConfig_ != nullptr;};
    void deleteTunnelConfig() { this->tunnelConfig_ = nullptr;};
    inline const vector<Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfigTunnelConfig> & tunnelConfig() const { DARABONBA_PTR_GET_CONST(tunnelConfig_, vector<Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfigTunnelConfig>) };
    inline vector<Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfigTunnelConfig> tunnelConfig() { DARABONBA_PTR_GET(tunnelConfig_, vector<Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfigTunnelConfig>) };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig& setTunnelConfig(const vector<Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfigTunnelConfig> & tunnelConfig) { DARABONBA_PTR_SET_VALUE(tunnelConfig_, tunnelConfig) };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfig& setTunnelConfig(vector<Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfigTunnelConfig> && tunnelConfig) { DARABONBA_PTR_SET_RVALUE(tunnelConfig_, tunnelConfig) };


  protected:
    std::shared_ptr<vector<Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigTunnelsConfigTunnelConfig>> tunnelConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
