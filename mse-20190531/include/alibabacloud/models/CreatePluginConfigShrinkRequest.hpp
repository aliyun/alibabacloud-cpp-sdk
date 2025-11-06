// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLUGINCONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLUGINCONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreatePluginConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePluginConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ConfigLevel, configLevel_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(ResourceIdList, resourceIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePluginConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ConfigLevel, configLevel_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(ResourceIdList, resourceIdListShrink_);
    };
    CreatePluginConfigShrinkRequest() = default ;
    CreatePluginConfigShrinkRequest(const CreatePluginConfigShrinkRequest &) = default ;
    CreatePluginConfigShrinkRequest(CreatePluginConfigShrinkRequest &&) = default ;
    CreatePluginConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePluginConfigShrinkRequest() = default ;
    CreatePluginConfigShrinkRequest& operator=(const CreatePluginConfigShrinkRequest &) = default ;
    CreatePluginConfigShrinkRequest& operator=(CreatePluginConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->config_ == nullptr && return this->configLevel_ == nullptr && return this->enable_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->pluginId_ == nullptr
        && return this->resourceIdListShrink_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreatePluginConfigShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline CreatePluginConfigShrinkRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // configLevel Field Functions 
    bool hasConfigLevel() const { return this->configLevel_ != nullptr;};
    void deleteConfigLevel() { this->configLevel_ = nullptr;};
    inline int32_t configLevel() const { DARABONBA_PTR_GET_DEFAULT(configLevel_, 0) };
    inline CreatePluginConfigShrinkRequest& setConfigLevel(int32_t configLevel) { DARABONBA_PTR_SET_VALUE(configLevel_, configLevel) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreatePluginConfigShrinkRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline CreatePluginConfigShrinkRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline int64_t pluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, 0L) };
    inline CreatePluginConfigShrinkRequest& setPluginId(int64_t pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // resourceIdListShrink Field Functions 
    bool hasResourceIdListShrink() const { return this->resourceIdListShrink_ != nullptr;};
    void deleteResourceIdListShrink() { this->resourceIdListShrink_ = nullptr;};
    inline string resourceIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceIdListShrink_, "") };
    inline CreatePluginConfigShrinkRequest& setResourceIdListShrink(string resourceIdListShrink) { DARABONBA_PTR_SET_VALUE(resourceIdListShrink_, resourceIdListShrink) };


  protected:
    // The language in which you want to display the results. Valid values: zh and en. zh indicates Chinese, which is the default value. en indicates English.
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    std::shared_ptr<string> config_ = nullptr;
    // The application scope of the plug-in. Valid values:
    // 
    // *   0: global
    // *   1: route
    // *   2: domain name
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> configLevel_ = nullptr;
    // Indicates whether the plug-in is enabled.
    // 
    // This parameter is required.
    std::shared_ptr<bool> enable_ = nullptr;
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The gateway plug-in ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> pluginId_ = nullptr;
    // The domain IDs or route IDs. They are distinguished based on ConfigLevel.
    std::shared_ptr<string> resourceIdListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
