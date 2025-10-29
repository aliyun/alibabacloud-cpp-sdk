// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLPLUGINRESPONSEBODYDATAINSTALLPLUGINRESULTS_HPP_
#define ALIBABACLOUD_MODELS_INSTALLPLUGINRESPONSEBODYDATAINSTALLPLUGINRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class InstallPluginResponseBodyDataInstallPluginResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallPluginResponseBodyDataInstallPluginResults& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
    };
    friend void from_json(const Darabonba::Json& j, InstallPluginResponseBodyDataInstallPluginResults& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
    };
    InstallPluginResponseBodyDataInstallPluginResults() = default ;
    InstallPluginResponseBodyDataInstallPluginResults(const InstallPluginResponseBodyDataInstallPluginResults &) = default ;
    InstallPluginResponseBodyDataInstallPluginResults(InstallPluginResponseBodyDataInstallPluginResults &&) = default ;
    InstallPluginResponseBodyDataInstallPluginResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallPluginResponseBodyDataInstallPluginResults() = default ;
    InstallPluginResponseBodyDataInstallPluginResults& operator=(const InstallPluginResponseBodyDataInstallPluginResults &) = default ;
    InstallPluginResponseBodyDataInstallPluginResults& operator=(InstallPluginResponseBodyDataInstallPluginResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && return this->pluginId_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline InstallPluginResponseBodyDataInstallPluginResults& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string pluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline InstallPluginResponseBodyDataInstallPluginResults& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


  protected:
    std::shared_ptr<string> gatewayId_ = nullptr;
    std::shared_ptr<string> pluginId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
