// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADVPNCONNECTIONCONFIGRESPONSEBODYVPNCONNECTIONCONFIGBGPCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADVPNCONNECTIONCONFIGRESPONSEBODYVPNCONNECTIONCONFIGBGPCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(BgpConfig, bgpConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(BgpConfig, bgpConfig_);
    };
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs() = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs(const DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs &) = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs(DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs &&) = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs() = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs& operator=(const DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs &) = default ;
    DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs& operator=(DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bgpConfig_ == nullptr; };
    // bgpConfig Field Functions 
    bool hasBgpConfig() const { return this->bgpConfig_ != nullptr;};
    void deleteBgpConfig() { this->bgpConfig_ = nullptr;};
    inline const vector<Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig> & bgpConfig() const { DARABONBA_PTR_GET_CONST(bgpConfig_, vector<Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig>) };
    inline vector<Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig> bgpConfig() { DARABONBA_PTR_GET(bgpConfig_, vector<Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig>) };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs& setBgpConfig(const vector<Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig> & bgpConfig) { DARABONBA_PTR_SET_VALUE(bgpConfig_, bgpConfig) };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigs& setBgpConfig(vector<Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig> && bgpConfig) { DARABONBA_PTR_SET_RVALUE(bgpConfig_, bgpConfig) };


  protected:
    std::shared_ptr<vector<Models::DownloadVpnConnectionConfigResponseBodyVpnConnectionConfigBgpConfigsBgpConfig>> bgpConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
